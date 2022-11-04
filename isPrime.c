#include <stdio.h>

int main()
{
	int n;
	int check = 0;
	scanf("%d", &n);
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			check = 1;
			break;
		}
	}
	if(check == 0 && n != 1){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}
