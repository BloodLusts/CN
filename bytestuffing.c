#include<stdio.h>
int main()
{
  int statbyte[8];
printf("Enter the 8 bit array:\n");
  for(int j=0;j<8;j++){
      scanf("%d",&statbyte[j]);
  }
  int stufbyte[8]={0,1,1,1,1,1,1,0};
  int newarr[24];
  for (int i=0; i<24; i++)
  {
      if(i>=0 && i<8){
          newarr[i]=statbyte[i];
      }
      else if(i>=8 && i<16){
          newarr[i]=stufbyte[i-8];
      }
      else if(i>=16 && i<24)
      {
          newarr[i]=statbyte[i-16];
      }
      
  }
  printf("\nNew array formed is : ");
  for(int j=0;j<24;j++){
      printf("%d ",newarr[j]);
  }

return 0;
}