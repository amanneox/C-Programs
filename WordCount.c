#include <stdio.h>
#define  IN 1
#define OUT 0
int main() {
  int state=OUT;
  int nw,c,nl,nc=0;
  while ((c=getchar()) !=EOF) {
    ++nc;
    if (c=='\n') {
      ++nl;
    }
    if(c==' ' || c=='\t' || c=='\n'){
      state=OUT;
    }
    else if(state==OUT){
      state=IN;
      ++nw;
    }
  }
  printf("%3d%3d%3d\n",nl,nw,nc );
  return 0;
}
