#include <stdio.h>
#include <conio.h>
#define swap(t,x,y){ t=x;  x=y; y=t;}

int main() {
  int t,x,y=0;
  printf("ENTER X:\t");
  scanf("%d\n",&x);
  printf("ENTER Y:\t");
  scanf("%d\n",&y);
  swap(t,x,y);
  printf("X,Y:%d%d\t",x,y);
  return 0;
}
