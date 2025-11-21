#include <stdio.h>
#include <string.h>

int isvowel(char c){
    char caps[]="AEIOU";
    char small[]="aeiou";
    int i;
    for(i=0;i<5;i=i+1){
        if(c==caps[i] || c==small[i]) return 1;
    }
    return 0;
}

int main(){
    char s[300];
    printf("enter string: ");
    scanf("%s",s);

    int left= 0;
    int right=strlen(s)-1;

    while(left<right){
        if(!isvowel(s[left])) left=left+1;
        else if(!isvowel(s[right])) right=right-1;
        else{
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left=left+1;
            right=right-1;
        }
    }

    printf("%s",s);
    return 0;
}
