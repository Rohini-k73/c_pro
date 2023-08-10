#include<stdio.h>

void mystrrev(char*);
void main(){
	char str1[] = "Hello, how are you";
	mystrrev(str1);
	printf("%s", str1);
}
void mystrrev(char* str){
	int length = strlen(str), i=0;
	char str2[length]; 
	while(length--){
		str2[i] = str[length];
		i++;
	}
	i=0;
	while(str[i]!='\0'){
		str[i] = str2[i];
		i++;
	}
}