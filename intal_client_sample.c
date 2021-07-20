#include <stdio.h>
#include "intal.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    void *intal1;
	void *intal2;
	void *sum;
	void *diff;
	void *product;
	void *quotient;
	void *exp;
	char ans[5];
	char str1[500];
	printf("Enter 1st number:-");
	scanf("%s",str1);
	char str2[500];
	printf("Enter 2nd number:-");
	scanf("%s",str2);
	intal1 = intal_create(str1);
	intal2 = intal_create(str2);
	int n;
	start:
    printf("\nSelect a option given below:-\n");
    printf("1. Increament and decreament of numbers\n");
    printf("2. Display numbers\n");
    printf("3. Maximum of two numbers\n");
    printf("4. Addition of two numbers\n");
    printf("5. Subtraction of two numbers\n");
    printf("6. Multiplication of two numbers\n");
    printf("7. Division of two numbers\n");
    printf("8. Reverse a number\n");
    printf("\nYour choice:==");
    scanf("%d",&n);
	switch(n)
        {
            case 1:
                intal1 = intal_increment(intal1);
                intal2 = intal_decrement(intal2);
                printf("Two intals after increment and decrement:\n");
                printf("%s\n", intal2str(intal1));
                printf("%s\n", intal2str(intal2));
                printf("Do you want to restart this program?(y/n)");
                scanf("%s",&ans);
                if(ans[0]=='y'||ans[0]=='Y')
                    goto start;
                else
                    break;


            case 2:
                printf("First intal: %s\n", intal2str(intal1));
                printf("Second intal: %s\n", intal2str(intal2));
                printf("Do you want to restart this program?(y/n)");
                scanf("%s",&ans);
                if(ans[0]=='y'||ans[0]=='Y')
                    goto start;
                else
                    break;


            case 3:
                printf("Max of two intals: %s\n",(intal_compare(intal1, intal2) > 0) ? intal2str(intal1) : intal2str(intal2));
                printf("Do you want to restart this program?(y/n)");
                scanf("%s",&ans);
                if(ans[0]=='y'||ans[0]=='Y')
                    goto start;
                else
                    break;


            case 4:
                sum = intal_add(intal1, intal2);
                printf("Sum: %s\n", intal2str(sum));
                printf("Do you want to restart this program?(y/n)");
                scanf("%s",&ans);
                if(ans[0]=='y'||ans[0]=='Y')
                    goto start;
                else
                    break;


            case 5:
                diff = intal_diff(intal1, intal2);
                printf("Diff: %s\n", intal2str(diff));
                printf("Do you want to restart this program?(y/n)");
                scanf("%s",&ans);
                if(ans[0]=='y'||ans[0]=='Y')
                    goto start;
                else
                    break;

            case 6:
                product = intal_multiply(intal1, intal2);
                printf("Product: %s\n", intal2str(product));
                printf("Do you want to restart this program?(y/n)");
                scanf("%s",&ans);
                if(ans[0]=='y'||ans[0]=='Y')
                    goto start;
                else
                    break;

            case 7:
                quotient = intal_divide(intal1, intal2);
                printf("Quotient: %s\n", intal2str(quotient));
                exp = intal_pow(intal1, quotient);
                printf("%s ^ %s: %s\n", intal2str(intal1), intal2str(quotient), intal2str(exp));
                printf("Do you want to restart this program?(y/n)");
                scanf("%s",&ans);
                if(ans[0]=='y'||ans[0]=='Y')
                    goto start;
                else
                    break;

            case 8:
                printf("Reversed string 1st: %s\n", string_reverse(intal2str(intal1),strlen(intal2str(intal1))));
                printf("Reversed string 2nd: %s\n", string_reverse(intal2str(intal2),strlen(intal2str(intal2))));
                printf("Do you want to restart this program?(y/n)");
                scanf("%s",&ans);
                if(ans[0]=='y'||ans[0]=='Y')
                    goto start;
                else
                    break;

            default :
                printf("Wrong choice!Do you want to restart this program?(y/n)");
                scanf("%s",&ans);
                if(ans[0]=='y'||ans[0]=='Y')
                    goto start;
                else
                    break;
        }
	//Make sure you destroy all the intals created.
	intal_destroy(sum);
	intal_destroy(diff);
	intal_destroy(product);
	intal_destroy(quotient);
	intal_destroy(exp);
	intal_destroy(intal1);
	intal_destroy(intal2);
	return 0;
}
