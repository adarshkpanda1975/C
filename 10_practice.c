#include<stdio.h> 
float tax;
int main()
{ 
      float in;
      printf("Enter your annual salary:");
      scanf("%f", &in);
      if(in>=2.5){
        if (in>=2.5 && in<5.0)
        {
         tax=(in*5)/100;  
        }
        else if (in>=5.0 && in<10.0)
        {
         tax=(in*20)/100;  
        }
        else if (in>=10)
        {
         tax=(in*30)/100;  
        }
        printf("%f \n",tax);
      }

      else{
        printf("No income tax \n");
          }
     return 0;
}
