#include<stdio.h>

int main(){
	int n;
	printf("enter a integer");
	scanf("%d", &n);
	float fp;
	scanf("%f, &fp);
	double dp = 789.123456;
	char c = 'M';
	char str[50] = "Good night";
	printf("Integer value is %d",n);
	printf("\nFloat value is %f",fp);
	printf("\nDouble value is %lf",dp);
	printf("\nCharacter is %c",c);
	printf("\nString is %s",str);
	printf("\nOctal value is %o",n);
	printf("\nHexadecimal value is %x",n);
	return 0;
}
