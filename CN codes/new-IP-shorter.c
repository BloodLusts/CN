#include<stdio.h>
#include<stdlib.h>

void Anding(int *octet,int *arr)
{
    int anding[4];
    for(int j=0;j<4;j++)
    {
        anding[j] = octet[j]&arr[j];
    }
    printf("After anding: ");
    for(int i=0;i<4;i++)
    {
        printf("%d ",anding[i]);
    }

}


int main()
{
    int classA[4]={255,0,0,0};
    int classB[4]={255,255,0,0};
    int classC[4]={255,255,255,0};
    
    char IP[16];
    printf("Enter the IP address: ");
    gets(IP);
    printf("Entered IP address is: %s\n",IP);
    int i=0;
    int octet[4]={0};
    int count=0;
    while(IP[i]&&i<=15)
    { 
        if(IP[i]=='.')
        i++;
        else
        {   
            octet[count]=atoi(&IP[i]);
            count++;
            while(IP[i] && IP[i]!='.')
            {
                i++;
            }   
        }
    }
    printf("Octet array: ");
    for(int i=0;i<4;i++)
    {
        printf("%d ",octet[i]);
    }

    if(octet[0]>=0 && octet[0]<128)
    {
       printf("\nBelongs to class A\n");
       Anding(octet,classA);
    }
    else if(octet[0]>=128 && octet[0]<192)
    {
       printf("\nBelongs to class B\n");
       Anding(octet,classB);
    }
    else if(octet[0]>=192 && octet[0]<223)
    {
       printf("\nBelongs to class C\n");
       Anding(octet,classC);
    }
    else
        printf("\n!!");
 


    return 0;
}