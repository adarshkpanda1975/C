#include<stdio.h> 

int main(){ 
    int a;
    scanf("%d",&a);

      switch (a)
      {
      case 1 :
        printf("Grade A");
        break;
        case 2:
        printf("Grade B");
        break;
        case 3:
        printf("Grade C");
        break;
        case 4:
        printf("Grade D");
        break;
        case 5:
        printf("Grade E");
        break;
      
      default:
        printf("Fail");
        break;
      }
     return 0;
}