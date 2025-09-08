#include <stdio.h>

void contavogais(char s[], int*q){
    int cont = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]== 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i]== 'U')cont++;
    }
    *q = cont;
}

int main(){
    char s[30];
    scanf("%s",s);
    int qnt;
    contavogais(s,&qnt);
    printf("%d\n",qnt);
    return 0;
}