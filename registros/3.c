#include <stdio.h>
#include <stdlib.h>

typedef struct{int x; int y}ponto;


int main(){
struct retangulo {ponto s; ponto i};
struct retangulo r;
scanf("%d %d",&r.s.x, &r.s.y);
scanf("%d %d",&r.i.x, &r.i.y);
int l = abs(r.s.x - r.i.x);
int h = abs(r.s.y - r.i.y);
int area = l*h;
int cd = sqrt((l*l)+(h*h));
int p = 2*(l + h);
printf("%d\n%d\n%d\n",area,cd,p);
}