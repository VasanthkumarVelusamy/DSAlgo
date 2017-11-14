#include<stdio.h>

void func(){
  static int count;

  count++;
    printf("%d\n",count);
}
int main(){
  func();
  func();
  func();
  func();
  func();



}
