#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
char nm[50];
int i; 
char end[50];
}aluno;



int main(){
aluno a;
scanf("%s",a.nm);
scanf("%d",&a.i);
scanf("%s", a.end);
printf("%s\n%d\n%s\n",a.nm,a.i,a.end);

}
