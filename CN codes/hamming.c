#include <stdio.h>
#include <math.h>
int main()
{
	int data[11];
	printf("\nEnter the data: \n");
	for (int i = 0; i < 11; i++)
	{
		scanf("%d", &data[i]);
	}
	printf("\nEntered data is: ");
	for (int i = 0; i < 11; i++)
	{
		printf("%d", data[i]);
	}
	int a[4];
	a[0] = data[0] ^ data[2] ^ data[4] ^ data[6] ^ data[8] ^ data[10];
	a[1] = data[1] ^ data[2] ^ data[5] ^ data[6] ^ data[9] ^ data[10];
	a[2] = data[3] ^ data[4] ^ data[5] ^ data[6];
	a[3] = data[7] ^ data[8] ^ data[9] ^ data[10];
	printf("\nReductant bits are : ");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}
	int dec = 0;
	for (int i = 0; i < 4; i++)
	{
		dec += pow(2, i) * a[i];
	}
	printf("\n%d element is wrong.\nAfter correction:", dec - 1);
	for (int i = 0; i < 11; i++)
	{
		if (i == dec - 1)
		{
			if (data[i] == 1)
				data[i] = 0;
			else
				data[i] = 1;
		}
		
	}
	printf("\nData after correction: ");
		for (int i = 0; i < 11; i++)
		{
			printf("%d", data[i]);
		}

	return 0;
}