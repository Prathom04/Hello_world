#include <stdio.h>
#include <math.h>
int main (){
float a;
int b;
printf("welcome to my site.\n");
printf("Here you can calculate the amount of power :a^b.\n ");
printf("Enter the value of a");
scanf("%f",&a);
printf("Enter the value of b");
scanf("%d",&b);
float sum = pow(a,b);
printf ("Here is the answer is. %.2f",sum);
return 0;
}
