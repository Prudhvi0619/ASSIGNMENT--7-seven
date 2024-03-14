#include<stdio.h>
int main(){
    char ch[100];
    int count=0,l,d=1;
    printf("Enter the string : ");
    scanf("%s", &ch);
    for(int i=0; ch[i]!='\0' ; i++){
        count++;
    }
  l=count;
  for(int i=0 ; i<=l/2 ; i++){
    if(ch[i]!=ch[l-i-1]){
        d=0;
    }
  }
  if(d==1){
    printf("The given word is palindrome ");
  }
  if(d==0){
    printf("The given word is not a palindrome ");
  }
  return 0;


}