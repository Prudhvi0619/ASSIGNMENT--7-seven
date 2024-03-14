#include<stdio.h>
int main() {
    char ch[100],b[100];
    int i, j,n=0;
    printf("Enter the word or any sentence : ");;
    fgets(ch,100,stdin);
    for( i=0;ch[i]!='\0';i++){
        if((ch[i]>='a'&& ch[i]<='z') || (ch[i]>='A' &&ch[i]<='Z')){
            b[n]=ch[i];
            n++;

        }
        b[n]='\0';
    
    
    }
    printf("The Final Word is : %s ", b);
    
    return 0;
}