#include<stdio.h>
int main(){
  int array[] = {1,3,4,5,2,8,6};

  for (size_t i = 0; array[i]!='\0'; i++) {
    printf("%d ",array[i]);
  }
  printf("\n");
}
