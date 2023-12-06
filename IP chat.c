#include<stdio.h>
#include<stdlib.h>
int main()
{
char ipaddress[16];
gets (ipaddress); 
puts (ipaddress); 
int count=0;
int ipstored[12]={0}; 
int i=0;
if(ipaddress[i]=='.'){
printf("\nInvalid IP address!");
}
while(ipaddress[i]!='\0' &&count<12)
{
if(ipaddress[i]=='.'){
i++;
}
else {
ipstored[count]=atoi(&ipaddress[i]);
count++;
while(ipaddress[i]!='\0'&&ipaddress[i]!='.'){
i++;
}
}
}
for (i=0; i<count; i++){
printf("\noctet %d > %d ",i+1, ipstored[i]);}
return 0;

}