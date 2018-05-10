#include <stdio.h>
#include <conio.h>
#include <math.h>
int calc(int);
int main() {
  int i,m=0;
  scanf("%d\n",&m);
  for (i=0;i<5;++i) {
  printf("%d\n",calc(m));
  }

  return 0;
}
int calc(int x){
  static int j=0;
  ++j;
  return pow(x,j);
}
