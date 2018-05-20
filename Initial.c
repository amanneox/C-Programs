#include <conio.h>
#include <string.h>
#include <stdio.h>
int main() {
  char name[]={"Aman Adhikari"};
  int len,i,flag=0;
  printf("%s\n",name);

  char *s;
  s=name;
  printf("%c%c",s[0],'.');
  while (*s) {
    if (*s==' ') {
      flag=1;
    }
    if (flag==1) {
     printf("%c",*s);
    }

    ++s;
  }
  return 0;
}
