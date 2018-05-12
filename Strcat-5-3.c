#include <stdio.h>
#include <conio.h>
void strcat1(char *s,char *t);
int main() {
  char s[20],t[20];
  gets(s);
  gets(t);
  strcat1(s,t);
  printf("%s\n",s);
  return 0;
}
void strcat1(char *s,char *t){
  while (*s) {
  ++s;
  }
  while (*t) {
    *s=*t;
    ++s;
    ++t;
  }
  *s='\0';
}
