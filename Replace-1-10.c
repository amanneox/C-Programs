#include <conio.h>
#include <stdio.h>
int main() {
  char s[20];
  gets(s);
  int i,j,c=0;
  while (s[j]!='\0') {
    if (s[j]=='\t') {
      s[i++]='\\t';
    }
    else if(s[j]=='\\'){
      s[i++]='\\';
    }
    else if(s[j]=='\b'){
      s[i++]='\\b';
    }
    else{
      continue;
    }
    ++j;
  }
  printf("%s\n",s);
  return 0;
}
