#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t){
    //if length different
    if (strlen(s)!=strlen(t)){
        return false;
    }
    int count[26]={0};

    for (int i=0; s[i]!='\0'; i++){
        count[s[i]-'a']++; //increment for s
        count[t[i]-'a']--; //decrement for t
    }
    for (int i=0; i<26; i++){
        if (count[i]!=0){
            return false;
        }
    }
    return true;
}