#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sched.h>
#include <time.h>

/* Check if number is prime */
int is_prime(long n) {
    if (n < 2) return 0;
    for (long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <core_number>\n", argv[0]);
        return 1;
    }

    int core = atoi(argv[1]);

    /* Bind program to one CPU core */
    cpu_set_t set;
    CPU_ZERO(&set);
    CPU_SET(core, &set);

    if (sched_setaffinity(0, sizeof(set), &set) != 0) {
        perror("sched_setaffinity");
        return 1;
    }

    printf("Running on CPU core %d for 10 seconds...\n", core);

    struct timespec start, now;
    clock_gettime(CLOCK_MONOTONIC, &start);

    long count = 0;
    long n = 2;

    while (1) {
        if (is_prime(n))
            count++;
        n++;

        clock_gettime(CLOCK_MONOTONIC, &now);
        if ((now.tv_sec - start.tv_sec) >= 10)
            break;
    }

    printf("Core %d found %ld primes in 10 seconds\n", core, count);
    return 0;
}

