#include<stdio.h>
#include<string.h>
void reverse(int l , int i, char ch[], char b[]);
int main(){
    char ch[100];
    char b[100];
    int l;
    printf("Enter the line or word : ");
    fgets(ch,100,stdin);
    l=strlen(ch);
    b[l]='\0';
  reverse(l,l,ch,b);

  printf("The reverse word is : %s", b);



  return 0;



}
void reverse(int l,int i,char ch[],char b[]){
    if(i==1){
        b[l-i]=ch[i-1];
    }
    else{
        b[l-i]=ch[i-1];
        reverse(l,i-1,ch,b);

    }
}