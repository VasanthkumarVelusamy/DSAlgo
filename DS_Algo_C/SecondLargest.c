#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
  int value, largest, secondLargest;
  largest = -1;
  secondLargest = 0;
  for (size_t i = 1; i < argc; i++) {
    value = atoi(argv[i]);
    if (value > secondLargest && value < largest) {
      secondLargest = value;
    }
    if (value>largest) {
      secondLargest = largest;
      largest = value;
    }
  }
  printf("%d\n",secondLargest);
}
