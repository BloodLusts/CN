#include<stdio.h>
int main()
{   
    int n;
    printf("Enter the size of array of bits: \n");
    scanf("%d",&n);
    int bit[n];
    printf("Enter the bits: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&bit[i]);
    }
    int new[n*2];
    int j=0,count=0;
    for(int i=0;i<n;i++){
        new[j] = bit[i];
        
        if(new[j]==1)
        count++;

        else
        count=0;

        if(count==5){
        j=j+1;        
        new[j]=0;
        count=0;
        }
        j++;
    }
    printf("new array formed is:\n");
      for(int i=0;i<j;i++){
        printf("%d ",new[i]);
    }

    return 0;
}
    

