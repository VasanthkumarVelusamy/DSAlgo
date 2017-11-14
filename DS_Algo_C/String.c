#include<stdio.h>

int FindLength();
int findCountOfWords();
char *string;

int main() {
char *string;
    int i=0;
    printf("\nEnter the string: ");
    fgets(string, 300, stdin);
    while (string[i] != '\0') {
        if (string[i]=='\n') {
            string[i]='\0';
        }
        i++;
    }
    printf("the greeting is %s\n",string);
//    printf("the greeting is %s\n",greeting);
//    printf("\n length of the string is %d\n",FindLength());
//    printf("\n count of words in the string is %d\n",findCountOfWords());
}

int FindLength() {
    int i=0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

int findCountOfWords() {
    int i=0, count=1;
    printf("\nHello");
    printf("%s\n",string);
//    while (string[i]!='\0') {
////        if (string[i] == ' ') {
////            count++;
////        }
////        i++;
////        
////    }
    if (i!=0)
        return count;
    return i;
}
