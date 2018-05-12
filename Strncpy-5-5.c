#include <stdio.h>
#include <conio.h>
#include <string.h>
void strncpy1(char *s,char *t,int *n);
int main() {
  char s[20],t[10];
  int n;
  gets(s);
  gets(t);
  scanf("%d\n",&n);
  strncpy1(s,t,n);
  printf("%s\n",s);
  return 0;
}
void strncpy1(char *s,char *t,int *n){
  s+=strlen(s);
  int i=0;
  while ((*s++=*t++) && i++<n) {
    ;
  }
}
