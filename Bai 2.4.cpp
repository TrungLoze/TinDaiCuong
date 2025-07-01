#include <stdio.h>
int main()
{
 float x,y,max;
 scanf("%f",&x);
 scanf("%f",&y);
 if (x>y){
 	max=x;
 }
 else{
 	max=y;
 }
 printf("%0.2f",max);
}

