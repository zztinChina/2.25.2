#include<stdio.h>
#include<string.h>
void fan(char* arr1, int k)
{   
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int s = 0;
		int tem = 0;
		tem = *(arr1);
		for (s = 0; s < len-1; s++)
		{
			*(arr1 + s) = *(arr1 + s + 1);
		}
		*(arr1 + len - 1) = tem;
	}
	printf("%s", arr1);
	
}
int main()
{
	char arr1[] = { "abcdefg" };
	int k = 0;
	scanf_s("%d", &k);
	fan(arr1, k);
	return 0;
}