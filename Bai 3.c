//Viet chuong trinh nhap vao 1 chuoi ki tu va dao nguoc chuoi do
#include<stdio.h>
#include<string.h>
 void rev_str(char a[]){
 	char temp;
 	int i=0,j=strlen(a)-1;
 	while(i<=j){
 		temp=a[i];
 		a[i]=a[j];
 		a[j]=temp;
 		i++;j--;
	 }
 }
 //Co the dung ham strrev cho nhanh
 //vd:printf("%s",strrev(a));
 int main(){
 	char a[100];
 	printf("Nhap vao chuoi:");
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';//Loai bo ki tu \n o cuoi chuoi
    rev_str(a);
    printf("Chuoi sau khi dao nguoc:");
    printf("%s",a);
    return 0;
 }
