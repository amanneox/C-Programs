#include <conio.h>
#include <stdio.h>
int main() {
  char s[10];
  scanf("%s\n",s);
  int i,j,k=0;
  int c;
  while ((c=s[k] !='\0')) {
    if (s[k]==' ') {
      ++i;
      j=i;
      while ((s[j+1])==' '){
        ++j;
      }
      s[i+1]=s[j];
      s[j]=' ';
    }
    ++k;
  }
  printf("%s\n",s);
  return 0;
}
