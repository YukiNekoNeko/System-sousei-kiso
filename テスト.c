#include <stdio.h>
#include <string.h>

int main()
{
	char password[100];
	
	printf("パスワードを入力してください");
	scanf("%99s",password);
	
	int length = strlen(password);
	int has_upper = 0;
	int has_lower = 0;
	int i;
	
	for (i=0; i<length; i++){
		if (isupper(password[i])){
			has_upper = 1;
		}
		if (islower(password[i])){
			has_lower = 1;
		}
	}
	
	if(length >= 8 && has_upper && has_lower){
		printf("強いパスワードです。 \n");
	} else {
		printf("弱いです。改善点は\n");
		if (length < 8){
			printf("パスワードが短い。\n");
		}
		if (!has_upper){
			printf("少なくとも一つの大文字を含めて。\n");
		}
		if (!has_lower){
			printf("少なくとも一つの小文字を含めて。\n");
		}
	}
	return 0;
}