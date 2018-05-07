#include <stdio.h>
#include <ctype.h>
int main() {
  int i,j,wc,vc,dc=0;
  char x[10];
  gets(x);
  while (x[j] !='\0') {

      if (x[j]=='a'||x[j]=='e'||x[j]=='i'||x[j]=='o'||x[j]=='u') {
        vc++;
      }

    if(isalpha(x[j])){
      ++wc;
    }

    if(isdigit(x[j])){
      ++dc;
    }

    j++;
  }

  printf("Vowels\t%d\n",vc);
  printf("Characters\t%d\n",wc);
  printf("Digits\t%d\n",dc);
  return 0;
}
