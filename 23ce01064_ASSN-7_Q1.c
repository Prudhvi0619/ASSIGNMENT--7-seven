#include<stdio.h>
int main() {
    char ch[100],Z;
    int count =0;
    printf("Enter any word or any line : ");
    fgets(ch,100,stdin);
    printf("Enter the character that u want to know the frequency : ");
    scanf("%c", &Z);
    printf("The entered character is : %c\n", Z);
    printf("The entered word or line is : ");
    puts(ch);
    printf("\n");
    for(int i=0 ; ch[i]!='\0' ; i++){
        if(ch[i]==Z){
            count ++;
        }

    }
    printf("The frequency of the given character is : %d", count);
    return 0;

}