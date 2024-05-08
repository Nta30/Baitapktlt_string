//Viet ham de quy dao nguoc 1 chuoi
#include<stdio.h>
#include<string.h>
 void rev_str(char s[], int i, int j){
 	if(i>=j){
 		return; 
	 }
	char temp=s[i];
	s[i]=s[j];
	s[j]=temp;
	rev_str(s,i+1,j-1); 
 }
 int main(){
 	char s[100];
 	printf("Nhap chuoi:");
 	fgets(s,sizeof(s),stdin);
 	s[strlen(s)-1]='\0';
 	rev_str(s,0,strlen(s)-1);
 	printf("Chuoi sau khi dao nguoc:");
 	printf("%s",s);
 	return 0;
 }
