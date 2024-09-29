#include <stdio.h>
int main(){
float radius;
scanf("%f",&radius);
double sum = 3.141592653 * radius * radius;
printf("%.9lf", sum);
return 0;
}
