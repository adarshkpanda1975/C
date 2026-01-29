#include <stdio.h>

int main (){
int a;
int b;
char c;
printf("Operator:");
scanf("%c",&c);
printf("\n");
printf("First no.");
scanf("%d",&a);
printf("\n");
printf("Second no.");
scanf("%d",&b);
printf("\n");
if(c=='+'){
printf("Sum: %d \n",a+b);
}
else if(c=='-'){
printf("Diff: %d \n",a-b);
}
else if(c=='*'){
printf("Product: %d \n",a*b);
}
else if(c=='/'){
printf("Quotient: %d \n",a/b);
}
return 0;

}
