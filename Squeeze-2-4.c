#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() {
  char s1[10];
  char s2[10];
  int i,j,k=0;
  gets(s1);
  gets(s2);
  for(i=0;i<strlen(s1);++i){
    j=0;
    while (s2[j] !='\0') {
      
      if (s1[i]==s2[j]) {
        s1[i]=' ';
        break;
      }
      ++j;
    }
  }
  printf("%s\n",s1);
  return 0;
}
