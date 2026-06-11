#include <stdio.h>

char* longestCommonPrefix(char** str, int strsize){
    if (strsize==0){ //if array is empty
        return "";
    }
    //char by char through first string
    for (int i=0; str[0][i]!= '\0'; i++){
        char currentchar=str[0][i]; //storing the char

        for (int j=1; j<strsize; j++){
            //checking for the char in other words in the same pos
            if (str[j][i]=='\0'|| str[j][i]!= currentchar){
                str[0][i]='\0';
                return str[0];
            }

        }
    }
    return str[0];
}
