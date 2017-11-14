#include<stdio.h>
#define IN 1
#define OUT 0

int main(){
  int wordCount, charCount, lineCount;
  wordCount = charCount = lineCount = 0;
  int c;
  int state = OUT;
  while((c=getchar()) != '0'){
    ++charCount;
    printf("the current char is %c\t\n",c);
    if (c==' '|| c=='\n' || c =='\t') {
      printf("\nI found an escape sequence,\n  ");
      state = OUT;
    }

    else if(state == OUT) {
          printf("The current word count is %d\n", wordCount);
      state = IN;
      ++wordCount;
                printf("The current word count is %d\n", wordCount);
    }
  }
  printf("%d\n",wordCount);  printf("%d\n",charCount);


}
