#include <stdio.h>
#include <conio.h>
#include <string.h>

char *reverse();
static char *name[]={"AMAN ADHIKARI","Anand Adhikari"};
int main() {
  reverse();
  return 0;
}
char *reverse(){
  int x;
   int i=strlen(name)-1;
  while (*name) {
    printf("%s\n",name[i]);
    x=strlen(name[i])-1;
    while (x >-1) {
      printf("%c",name[i][x]);
      --x;
    }
    printf("\n");
    --i;
  }
}
