#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the IP address :");
    char ipaddress[16];
    gets(ipaddress);
    puts(ipaddress);
    int count = 0;
    int ipstored[12] = {0};
    int i = 0;
    if (ipaddress[i] == '.')
    {
        printf("\nInvalid IP address!");
    }
    while (ipaddress[i] != '\0' && count < 5)
    {
        if (ipaddress[i] == '.')
        {
            i++;
        }
        else
        {
            ipstored[count] = atoi(&ipaddress[i]);
            count++;
            while (ipaddress[i] && ipaddress[i] != '.')
            {
                i++;
            }
        }
    }
    for (i = 0; i < count; i++)
    {
        printf("\noctet %d > %d ", i + 1, ipstored[i]);
    }
    return 0;
}