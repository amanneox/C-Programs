#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
int TOP=-1;
char s[5];
double c[5];
void push(double);
double pop(void);
int main() {
  int i,k,j,m;
  gets(s);

  while (s[k] !='\0') {
    m=s[k]-48;
    if (isdigit(s[k])) {
      printf("Pushed:%d\n",m);
      push(m);
    }
    else if(s[k]=='+' || s[k]=='-' || s[k]=='*'|| s[k]=='/'){
      i=pop();
      printf("Popped:%d\n",i);
      j=pop();
        printf("Popped:%d\n",j);
      if (s[k]=='+') {
        push(i+j);
        printf("Pushed:%d\n",i+j);
      }
      else if(s[k]=='-'){
        push(j-i);
      }
      else if(s[k]=='/'){
        push(i/j);
      }
      else if(s[k]=='*'){
        push(i*j);
      }
    }
    ++k;
  }

  printf("%lf\n",pop());

  return 0;
}

double pop(){
  if (TOP==-1) {
    printf("Underflow\n");
    return -999.0;
  }
  else{
    return c[--TOP];
  }
}

void push(double x){
  if (TOP==4) {
    printf("Overflow\n");
  }
  else{
    c[TOP++]=x;
  }
}
