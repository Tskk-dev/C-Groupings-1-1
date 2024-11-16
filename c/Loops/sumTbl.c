#include <stdio.h>
// Code made by Shanley Lim
int main(){
	int sum = 0;
	int num = 2;
	
	printf("%-5s |\t%-5s\n", "NUM","SUM");
	printf("%5s\t%5s\n", "-----","-----");
	
	for(int i = num; i < 100;){
		sum += i;
	
		printf("%-5d |\t%-5d\n", i, sum);
		i += 3;
	}
	
	return 0;
}