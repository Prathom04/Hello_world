#include<stdio.h>
#include<math.h>
int main(){
int a,b;
printf("Here you can do dividends.\n");
printf("Enter the value you want to split\n");
scanf("%d",&a);
printf("Enter the value you want to divide by.\n");
scanf("%d",&b);
int sum = a/b;
printf("Your quotient is : %d\n", sum);
int reminder = a%b;
printf(" your reminder is : %d\n", reminder);
printf("Thank you!");
getch();
}
