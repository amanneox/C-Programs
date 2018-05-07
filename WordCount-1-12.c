#include <stdio.h>
#define  IN 1
#define OUT 0
int main() {
  int state=IN;
  int c=0;
  while ((c=getchar()) !=EOF && state) {
      if(c==' ' || c=='\t' || c=='\n'){
        state=OUT;
        printf("\n");
      }
      else{
        printf("%c",c);
      }
      state=IN;
  }


  return 0;
}
