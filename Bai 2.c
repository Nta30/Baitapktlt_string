//Nhap vao 1 chuoi va in ra do dai cua chuoi do
#include<stdio.h>
#include<string.h>
 int main(){
 	char s[100];
 	printf("Nhap vao chuoi:"); 
 	fgets(s,sizeof(s),stdin);
 	s[strlen(s)-1]='\0';
	printf("Do dai cua chuoi la:%d",strlen(s));
	return 0;
 }
