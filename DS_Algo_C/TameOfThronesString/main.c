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

void upper_string(char *string);
void send_message(char *message);
char *get_secret_word(char *kingdom, char *secretWord);


char *allies;

int main() {
    char *message;
    printf("Enter the message");
    fgets(message, 200, stdin);
    send_message(message);
    fflush(stdin);
//    printf("\nKing: ");
//    printf("\nAllies: %s\n",allies);
}

void send_message(char *message) {
    char *secretWord, *copy, *kingdom;
     int i=0, j=0, lengthOfCodeInMessage=0;
    copy = strdup(message);
    kingdom = strtok(copy,",");
    message = strtok(NULL, " \"");

    upper_string(kingdom);
    upper_string(message);

    if(!message || !kingdom){
        printf("\nWrong message format\n");
        return;
    }

    secretWord = get_secret_word(kingdom, secretWord);

    printf("\n Kingdom is : *%s*",kingdom);
    printf("\n message is : *%s*",message);
    printf("\n secret word is : *%s*",secretWord);
    fflush(stdout);
    i=0;
    
    while (secretWord[i]!='\0') {
        j=0;
        while (secretWord[i] != message[j] && message[j] != '\0') {
            j++;
        }
        if (secretWord[i] == message[j]) {
            lengthOfCodeInMessage++;
            while (message[j]!='\0') {
                message[j] = message[j+1];
                j++;
            }
        }
        i++;
    }
    if (strlen(secretWord) == lengthOfCodeInMessage) {
        printf("\n keyword Present\n");
        if (allies == NULL) {
            allies = kingdom;
        }else {
            strcat(allies, kingdom);
        }
    }
    else {
        printf("\nKeyword not present\n");
    }
}

char *get_secret_word(char *kingdom, char *secretWord) {
    if (strcmp(kingdom, "AIR")==0) {
        secretWord = "OWL";
    }
    else if(strcmp(kingdom, "LAND")==0) {
        secretWord = "PANDA";
    }
    else if(strcmp(kingdom, "WATER")==0) {
        secretWord = "OCTOPUS";
    }
    else if(strcmp(kingdom, "ICE")==0) {
        secretWord = "MAMMOTH";
    }
    else if (strcmp(kingdom, "FIRE")==0) {
        secretWord = "DRAGON";
    }
    else {
        printf("\nInvalid kingdom name given\n");
        fflush(stdout);
        return " ";
    }
    return secretWord;
}

void upper_string(char *string){
    while(string){
        if ( string >= 'a' && string <= 'z' ){
            string = string - 32;
        }
        string++;
    }
}
