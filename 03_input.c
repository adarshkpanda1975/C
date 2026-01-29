#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    size_t size = 0;

    printf("Enter a sentence: ");
    getline(&str, &size, stdin);   // getline allocates memory

    printf("You entered: %s", str);

    free(str);                     // free memory after use
    return 0;
}
