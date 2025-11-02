#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 2

int chartonum(char ch){
    return toupper(ch) - 'A';
}

char numtochar(int num){
    return(num % 26)+'A';
}

void hillchiper(int key[SIZE][SIZE],char plaintext[]){
    int len = strlen(plaintext);
    
    if(len%2!=0){
        strcat(plaintext,"X");
        len++;
    }
    for(int i=0;i<len;i+=2){
        int p[2];
        p[0]=chartonum(plaintext[i]);
        p[1]=chartonum(plaintext[i+1]);
        
        char c[2];
        c[0]=key[0][0]*p[0]+key[0][1]*p[1];
        c[1]=key[1][0]*p[0]+key[1][1]*p[1];
        
        printf("%c%c",numtochar(c[0]),numtochar(c[1]));
    }
    
    
}

int main(){
    int key[SIZE][SIZE];
    char plaintext[100];
    printf("enter plain text:");
    scanf(" %[^\n]", plaintext);
    printf("enter key in matrix :");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            scanf("%d",&key[i][j]);
        }
    }
    hillchiper(key,plaintext);
    
}
