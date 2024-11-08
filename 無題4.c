#include <stdio.h>

int main(void)
{
	int n;
	int k;
	
	printf("何匹の猫を飼っていますか。");
	scanf("%d",&n);
	
	printf("何匹の猫を飼いたいですか。");
	scanf("%d",&k);
	
	if(n<k)
	{
		printf("足りないです");
		
	}
	else if(n>k)
	{
		printf("足りてます");
	}
	else if(n==k)
	{
		printf("ぴったりです");
	}
	return 0;
}


