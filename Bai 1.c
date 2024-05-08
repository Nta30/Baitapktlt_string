//Nhap vao va in ra 1 chuoi ki tu
#include<stdio.h>
#include<string.h>
 int main(){
 	char s[100];
 	fgets(s,sizeof(s),stdin);
 	printf("%s",s);
 	return 0;
 }
