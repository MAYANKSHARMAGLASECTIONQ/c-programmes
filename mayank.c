#include<stdio.h>
int main() {
float mayank,yash,raman;
printf("enter the value of mayank:");
scanf("%f",&mayank);
printf("enter the value of yash:");
scanf("%f",&yash);
  raman = mayank;
  

  
  mayank = yash;

  
  yash = raman;

  
  printf("\nAfter swapping, mayank's favouraite number= %.2f\n", mayank);
  printf("After swapping, yash's favouraite nu51122mber = %.2f", yash);
  return 0;2
}
