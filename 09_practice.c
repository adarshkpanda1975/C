#include<stdio.h> 

int main(){ 
    int in1, in2, in3;
    printf("Enter percentage of first subject:");
    scanf("%d",&in1);
    printf("Enter percentage of second subject:");
    scanf("%d",&in2);
    printf("Enter percentage of third subject:");
    scanf("%d",&in3);
    float t=(float)(in1+in2+in3)/3;
    printf("Your total percentage is %f \n",t);
    if (t>=40 && in1>=33 && in2>=33 && in3>=33)  
    {
        printf("PASS \n");
    }
    else
    {
        printf("FAIL \n");
    }
        
    return 0;
}