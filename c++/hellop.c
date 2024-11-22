#include<stdio.h>
#include<string.h>
int main(){
    char first[100];
    printf("Enter : ");
    scanf("s",first);
    strrev(first);
    printf("\n Reversed String: %s\n",first);
    return 0;
}