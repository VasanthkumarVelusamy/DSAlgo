#include<stdio.h>
#include<string.h>
int main(int argc, char **argv){
char *name = argv[1];
char str[12] = "vasanthkumar";
char *str1 = "chandhru";
char *myName[] = {"dhivya","priya","kumar","vasanth"};
 char nam[][10] = {"dhivya","priya","kumar","vasanth"};

printf("%lu\n",sizeof(myName));
printf("%lu\n",sizeof(nam));
// printf("%c\n",nam[1][8]);
// if(nam[1][8]=='\0')
// printf("The selected char is nul");
// char **herName = nam;
herName = myName;

// gets(str);
// sprintf(str, "vasanth %s",name);
// fputs(str,stdout);
printf("%s\n", herName[0]);
// printf("the Input string is %s\n", str);
// printf("size of array is %lu\n",sizeof(str));
// printf("size of array is %lu\n",strlen(str));
}
