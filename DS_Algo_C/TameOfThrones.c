//
//  main.c
//  TameOfThronesString
//
//  Created by Vasanthkumar V on 02/08/17.
//  Copyright © 2017 Vasanthkumar V. All rights reserved.
//
#include<stdio.h>
#include<string.h>
#include<stddef.h>

int main() {
    char messages[100], *secretWord, *copy, *kingdom;

    int i=0, j=0, lengthOfCodeInMessage=0;
    printf("Enter the string: ");
    fgets(messages,200,stdin);

    copy = strdup(messages);
    kingdom = strtok(copy,",");
    // secretWord  = strtok(NULL, "\"");

    // if(!messages || !kingdom){
    //     printf("\nWrong message format\n");
    //     return 1;
    // }
    //
    // if (strcmp(kingdom, "Air")==0) {
    //     secretWord = "owl";
    // }
    // else if(strcmp(kingdom, "Land")==0) {
    //     secretWord = "panda";
    // }
    // else if(strcmp(kingdom, "Water")==0) {
    //     secretWord = "octopus";
    // }
    // else if(strcmp(kingdom, "Ice")==0) {
    //     secretWord = "mammoth";
    // }
    // else if (strcmp(kingdom, "Fire")==0) {
    //     secretWord = "dragon";
    // }
    // kingdom = toupper('k');
    printf("\n Kingdom is : *%s*",kingdom);
    printf("\n message is : *%s*",messages);
    // printf("\n secret word is : *%s*",secretWord);

    i=0;
    while (secretWord[i]!='\0') {
        j=0;
        while (secretWord[i] != messages[j] && messages[j] != '\0') {
            j++;
        }
        if (secretWord[i] == messages[j]) {
            lengthOfCodeInMessage++;
            while (messages[j]!='\0') {
                messages[j] = messages[j+1];
                j++;
            }
        }
        i++;
    }

    if (strlen(secretWord) == lengthOfCodeInMessage) {
        printf("\n keyword Present\n");
    }
    else {
        printf("\nKeyword not present\n");
    }
}
