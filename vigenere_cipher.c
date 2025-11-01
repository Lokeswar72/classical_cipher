#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100

void Vigenere(char PT[], char key[]){
    char CT[SIZE];
    char ch;
    int PT_len = strlen(PT);
    int key_len = strlen(key);
    for(int i=0;i<PT_len;i++){
        if(isalpha(PT[i])){
            ch = ((toupper(PT[i]) - 'A')+(toupper(key[i%key_len])-'A'))%26 +'A';
            if(islower(PT[i])){
                ch = tolower(ch);
            }
        CT[i]=ch;
        }
        else{
        CT[i]=PT[i];}
    }
    CT[PT_len]='\0';
    printf("THE CIPHER TEXT: %s",CT);
}

int main(){
    char PT[SIZE];
    char key[SIZE];
    printf("enter plain text: ");
    scanf("%[^\n]",PT);
    printf("enter key: ");
    scanf("%s",key);
    Vigenere(PT,key);
    return 0;
}
