#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n],b[8]={0,1,1,1,1,1,1,0};
    printf("Enter elements of array a:\n");
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int c[24];
    
    for(int j=0;j<24;j++){
        if (j<8){
            c[j]=b[j];
        } 
        else if(j>=8 && j<16){
            c[j]=a[j-8]; 
        } 
        else if(j>=16 && j<24){
            c[j]=b[j-16];
        }
    }

    printf("Output array is\n");
    for(int k=0;k<24;k++){
        printf("%d ",c[k]);
    }
    
    return 0;
}
