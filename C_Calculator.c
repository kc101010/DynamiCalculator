//Pre-processor directives
#include <stdio.h>

// KYLE THE C CALCULATOR
// WRITTEN 23/11/19, BASED OFF OF CALCULATOR DESIGNS FROM OTHER PERSONAL PROJECTS AND JORDANS WORK

//23/11/19 ~ 01:02 ; Basic outline finished - must compile, execute and debug ASAP. This program has not been compiled and tested at time of writing. 

//Global Variable for all of users input
static int u_num1, u_num2, u_op;

// Function declarations
int addition(int *x, int *y);
int subtraction(int *x, int *y);
int division(int *x, int *y);
int multiplication(int *x, int *y);

//Function to recieve values from user
int requestValues(){
	
	printf("Please enter your calculation (make sure to add spaces between each character): \n\n");
	scanf("%d %c %d", &u_num1, &u_op, &u_num2);
	if(u_op == ' ' || ){
		printf("ERROR: Operator not found - please try again");
		scanf("%d %c %d", &u_num1, &u_op, &u_num2);
	}
		
	
	
	printf("\nYour calculation is %d %c %d \n", u_num1, u_op , u_num2);
	printf("The result is: ");
	
	
	
	if(u_op == '+'){
		addition(&u_num1, &u_num2);
	}else if(u_op == '-'){
		subtraction(&u_num1, &u_num2);
	}else if(u_op == '/'){
		division(&u_num1, &u_num2);
	}else if(u_op == '*'){
		multiplication(&u_num1, &u_num2);
	}
	
}

//CALCULATION FUNCTIONS START

int addition(int *x, int *y){
	*x += *y;
	printf("%d", *x);
	return(*x);
}

int subtraction(int *x, int *y){
	*x -= *y;
	printf("%d", *x);
	return(*x);
}

int division(int *x, int *y){
	*x /= *y;
	printf("%d", *x);
	return(*x);
}

int multiplication(int *x, int *y){
	*x *= *y;
	printf("%d", *x);
	return(*x);
}

//CALCULATION FUNCTIONS END

//Main method - begins program
int main(){
	
	printf("##### The C Calculator #####\nThis calculator will take 2 values and carry out the calculation your request!\n");
	
	requestValues();
	
	return 0;
}