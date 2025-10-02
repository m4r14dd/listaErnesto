#include <stdio.h>
void maiux(char s[]){
   for(int i = 0; s[i] != '\0'; i++){
      if(s[i] >= 'a' && s[i] <= 'z'){
      char c = s[i];
      s[i] = c - 32;
      }
   }
   printf("%s\n", s);

}
void minus(char s[]){
   for(int i = 0; s[i] != '\0'; i++){
      if(s[i] >= 'A' && s[i] <= 'Z'){
         char c = s[i];
      s[i] = c + 32;}
   }
   printf("%s\n", s);

}

int main(){
   char s[100];
   scanf("%s", s);

   maiux(s);
   minus(s);
}