#include <stdio.h>
#include <conio.h>
#include <string.h>
int strend1(char *s,char *t);
int main() {
  char s[10],t[10];
  int x;
  gets(s);
  gets(t);
  x=strend1(s,t);
  printf("%d\n",x);
  return 0;
}
int strend1(char *s,char *t){
  s += (strlen(s) - strlen(t));
  while (*t++==*s++) {
  if (*s=='\0') {
    return 1;
    }
  }
  return 0;
}
