#include<stdio.h>
int main(){
  int a[] = {10,20,30,40,50,60};
  int *p[] = {a,a+1,a+2,a+3,a+4,a+5};
  int **pp = &p;

  printf("%d\n",p);
  printf("%d\n",p+1);
  printf("%d\n",pp);
  printf("%d\n",pp+1);

  printf("%d\n",a[3]);
  printf("%d\n",*(p+1));
  printf("%d\n",**(pp+3));
  pp++;
  printf("%d\n",*pp++);
  printf("%d\n",**pp);


}
