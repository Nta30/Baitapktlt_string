//Viet chuong trinh nhap vao 1 chuoi va kiem tra xem co phai chuoi Palindrome(chuoi doi xung) hay khong
#include<stdio.h>
#include<string.h>
 int check_palindrome(char s[]){
 	int i=0,j=strlen(s)-1;
 	while(i<j){
 		if(s[i]!=s[j]) return 0;
 		i++;j--;
	 }
	 return 1;
 }
 
 int main(){
 	char s[100];
 	printf("Nhap vao chuoi:");
 	fgets(s,sizeof(s),stdin);
 	s[strlen(s)-1]='\0';
 	if(check_palindrome(s)==1){
 		printf("Day la chuoi Palindrome");
	 }else{
	 	printf("Day khong phai la chuoi Palindrome");
	 }
 }
 	
