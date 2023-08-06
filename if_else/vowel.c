//Program to check vowel or consonant

#include<stdio.h>
void main(){
	
	int ch;
	printf("Enter a character");
	scanf("%c", &ch);
	
//	if(ch== 'a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')

	if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117 || ch==65 || ch==69  || ch==73  || ch==79  || ch==85) //ASCII value
	{
		printf("'%c' is Vowel", ch);
	}
	else{
		printf("'%c' is not Vowel", ch);
	}

}
