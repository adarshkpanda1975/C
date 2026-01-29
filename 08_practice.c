#include<stdio.h> 

int main(){ 
      int mark;
      printf("Enter your no.:");
      scanf("%d",&mark);

      if (mark>=90 && mark<=100)            
      {
        printf("Grade A \n");
      }
      else if (mark>=80 && mark<=89)            
      {
        printf("Grade B \n" );
      }
      else if (mark>=70 && mark<=79)            
      {
        printf("Grade C \n");
      }
      else if (mark>=60 && mark<=69)            
      {
        printf("Grade D \n");
      }
      else if (mark>=50 && mark<=59)            
      {
        printf("Grade E \n");
      }
      else
      {
        printf("INVALID \n");
      }
      
     return 0;
}