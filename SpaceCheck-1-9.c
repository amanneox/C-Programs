#include <conio.h>
#include <stdio.h>
int main() {
  char s[10];
  gets(s);
  int i,j,k,l=0;
  int c;
  while ((c=s[k] !='\0')) {
    if (s[k]==' ') {

      j=k;
      while ((s[j+1])==' ' && s[j+1] !='\0'){
        ++j;
      }
      s[k+1]=s[j+1];
      s[j+1]=' ';
    }
    ++k;
  }

  printf("%s\n",s);


  return 0;
}
