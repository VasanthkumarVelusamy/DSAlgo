#include<stdio.h>
int main(){
  int a[20] = {1,2,3,4};
  // int *ip = &a;
  char *name = "Vasanthkumar";
  int *ip = &a;

printf("The size of integer array of size 20 is %lu\n",sizeof(a));
  printf("The size of integer pointer %lu\n",sizeof(ip));
  // printf("The size of char pointer %lu\n",sizeof(cp));
}
