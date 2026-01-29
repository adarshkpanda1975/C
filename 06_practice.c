#include<stdio.h> 
int i;
int main(){ 
    printf("enter the no.:");
    scanf("%d",&i);
    int r =  i % 97;
     if (r==0){
         printf("True \n");
     }
     else
     {
         printf("false \n");
     }
    return 0;
}