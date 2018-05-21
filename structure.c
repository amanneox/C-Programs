#include <stdio.h>
#include <conio.h>
#include <math.h>
struct point{
  int x;
  int y;
};

void main(){
  struct point temp={0,1};
  temp.x=20;
  temp.y=30;
  printf("%d\t%d\t",temp.x,temp.y);
}
