#include<stdio.h>
#include<string.h>

void takeName(char s[]){
    char a[100];
    int i = 0, j = strlen(s) - 1;
    while(j >= 0){
        if(s[j] == ' ') break;
        a[i] = s[j];
        i++; j--;
    }
    printf("%s", strrev(a));
}

int main(){
    char s[100];
    printf("Nhap vao Ho va ten: ");
    fgets(s, sizeof(s), stdin);
    if (s[strlen(s) - 1] == '\n'){
    	s[strlen(s) - 1] = '\0';
	}
    takeName(s);
    return 0;
}

