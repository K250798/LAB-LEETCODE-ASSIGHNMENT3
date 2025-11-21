
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("how many words will you type: ");
    scanf("%d",&n);

    char w[300][300];
    int i=0;

    printf("now type each word one by one:\n");
    for(i=0;i<n;i=i+1) scanf("%s",w[i]);

    printf("\nwords you entered:\n");
    for(i=0;i<n;i=i+1) printf("%s\n",w[i]);

    printf("\nchecking for first palindrome...\n");

    for(i=0;i<n;i=i+1){
        char *s = w[i];
        int l=0, r=strlen(s)-1;
        int ok=1;

        while(l<r){
            if(s[l]!=s[r]){ ok=0; break; }
            l=l+1; r=r-1;
        }

        if(ok){
            printf("\nresult: %s\n",s);
            return 0;
        }
    }

    printf("\nresult: \n");
    return 0;
}
