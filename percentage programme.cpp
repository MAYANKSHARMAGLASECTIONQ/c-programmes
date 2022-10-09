#include<stdio.h>
int main()
{int hindi,english,math,science,computer;
printf("enter marks of hindi:");
scanf("%d",&hindi);
printf("enter marks of english:");
scanf("%d",&english);
printf("enter marks of math:");
scanf("%d",&math);
printf("enter marks of science:");
scanf("%d",&science);
printf("enter marks of computer:");
scanf("%d",&computer);
int sum=hindi+english+math+science+computer;
printf("sum of all subjects is %d", sum);
int percentage=sum*100/500;
printf("\n percentage of the student is =%d",percentage);

}
