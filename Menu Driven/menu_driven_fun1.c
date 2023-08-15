//menu driven program

#include <stdio.h>

int even_odd(int num);
int perfect(int num);
int palindrome(int num);
int prime(int num);
int armstrong(int num);
int sum_of_range(int num);
int sum(int num);

void main() {
    int num;
    int choice;
    
    int exit = 1;
    while (exit == 1) {
        printf("Enter your choice: \n1.Even Number \n2.Perfect Number \n3.Palindrome Number \n4.Prime Number \n5.Armstrong Number \n6.Sum Of range numbers \n7.Sum of last two digit ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            // even number
            printf("Enter your number: ");
            scanf("%d", &num);
            int ans = even_odd(num);
            if (ans == 1)
                printf("The given num %d is even\n", num);
            else
                printf("The given num %d is odd\n", num);
        }

        if (choice == 2)
    	{
        // perfect number
        	printf("Enter a number: ");
        	scanf("%d", &num);
        	int ans = perfect(num);
        		if(ans == 1)
        			 printf("The given num %d is a Perfect number\n", num);
        		if(ans==0)
        		 printf("The given num %d is not a Perfect number\n", num);
        }
        
        		
		if (choice == 3)
    	{
        // palindrome
        	printf("Enter a number: ");
        	scanf("%d", &num);
        	int ans = palindrome(num);
        		if(ans == 1)
        			 printf("The given num %d is a palindrome number\n", num);
        		if(ans==0)
        		 printf("The given num %d is not a palindrome number\n", num);

		}
		//prime or not
		if (choice == 4)
		{
			printf("Enter a number: ");
        	scanf("%d", &num);
        	int ans = prime(num);
        		if(ans == 1)
        			 printf("The given num %d is a prime number\n", num);
        		if(ans==0)
        		 printf("The given num %d is not a prime number\n", num);
		}
		// Armstrong Number
		if (choice == 5)
		{
			printf("Enter a number: ");
        	scanf("%d", &num);
        	int ans = armstrong(num);
        		if(ans == 1)
        			 printf("The given num %d is a Armstrong Number\n", num);
        		if(ans==0)
        		 printf("The given num %d is not a prime number\n", num);
		}
		
		if (choice == 6)
    	{
        // sum of number range
        	printf("Enter a number: ");
        	scanf("%d", &num);
        	int ans = sum_of_range(num);
				printf("Sum of given number digit is %d\n", ans);
		}

        
        if (choice == 7) {
            // sum of two digits
            printf("Enter a number: ");
            scanf("%d", &num);
            int ans = sum(num);
            printf("Sum of digits of given number is %d\n", ans);
        }
        
        if (choice <= 0 || choice > 7) {
            printf("Invalid input!\n");
        }
    }
}

int even_odd(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int perfect(int num) {
    int sum = 0, i;
    for (i = 1; i < num; i++) {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}

int palindrome(int num) {
    int rev = 0;
    int dup = num;
    while (num) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (dup == rev)
        return 1;
    else
        return 0;
}

int prime(int num) {
    int flag = 0, i = 2;
    while (i < num / 2) {
        if (num % i == 0)
            flag = 1;
        i++;
    }
    if (flag)
        return 0;
    else
        return 1;
}

int armstrong(int num) {
    int arm = 0, rem, pow = 0, multiple = 1;
    int dup = num, i;
    while (num) {
        pow++;
        num = num / 10;
    }
    num = dup;
    while (num) {
        rem = num % 10;
        for (i = 1; i <= pow; i++) {
            multiple = multiple * rem;
        }
        arm = arm + multiple;
        multiple = 1;
        num = num / 10;
    }
    if (dup == arm)
        return 1;
    else
        return 0;
}

int sum_of_range(int num) {
	int i, sum = 0; //i is starting value
	for(i = 1;i <= num;i++){
		sum = sum + i;
	}
 		return sum;
}

int sum(int num){ 
	int digit, sum=0;
	
	sum = num % 10;
	
	while(num){
		digit = num % 10;
		num = num / 10;
	}
		sum = sum + digit;
	
		return sum;

}