#include <stdio.h>

int main() {
  int A;
  int a4, a3, a2, a1;
  double res;
  scanf("%d", &A);
  a4=A/1000;
  a3=(A/100)%10;
  a2=(A/10)%10;
  a1=A%10;
  res=((double)a4*a2)/(a3*a1);   
  printf("%.2f", res);  
  return 0;
}