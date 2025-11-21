#include <stdio.h>

int main(){
    int n;
    printf("enter the size of the square matrix (n x n): ");
    scanf("%d",&n);

    int a[200][200];
    int i=0,j=0;

    printf("now enter all %d rows:\n",n);
    for(i=0;i<n;i=i+1)
        for(j=0;j<n;j=j+1)
            scanf("%d",&a[i][j]);

    printf("\noriginal matrix:\n");
    for(i=0;i<n;i=i+1){
        for(j=0;j<n;j=j+1) printf("%d ",a[i][j]);
        printf("\n");
    }

    for(i=0;i<n;i=i+1)
        for(j=i+1;j<n;j=j+1){
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }

    for(i=0;i<n;i=i+1){
        int l=0, r=n-1;
        while(l<r){
            int t=a[i][l];
            a[i][l]=a[i][r];
            a[i][r]=t;
            l=l+1; r=r-1;
        }
    }

    printf("\nmatrix after 90 degree clockwise rotation:\n");
    for(i=0;i<n;i=i+1){
        for(j=0;j<n;j=j+1) printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}
