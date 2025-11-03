#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct 
{
   int x;
   int y;
}cordenadas;

int main(){
cordenadas c;
scanf("%d", &c.x);
scanf("%d", &c.y);
int a = c.x*c.x + c.y*c.y;
a = sqrt(a);
printf("%d\n",a);
}