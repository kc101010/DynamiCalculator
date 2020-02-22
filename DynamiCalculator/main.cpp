//pre-processor directives
#include <iostream>
#include <string>
#include <array>
#include "decimal.h"
#include "binary.h"

void Logic(int num_val1, int num_val2, std::string op_type){
	if(op_type == "+"){
		std::cout << add(num_val1, num_val2) << std::endl;
	}else if(op_type == "-"){
		std::cout << subtract(num_val1, num_val2) << std::endl;
	}else if(op_type == "*"){
		std::cout << multiply(num_val1, num_val2) << std::endl;
	}else if(op_type == "/"){
		std::cout << divide(num_val1, num_val2) << std::endl;
	}
		
	
}


void findValues(std::string userInput){
	
	
	
	char comparators[] = {'+', '-', '*', '/'};
	int op_pos;
	
		
	
		for(int i = 0; i < userInput.length(); i++){
			for(int m = 0; m < sizeof(comparators); m++){
			
				if(userInput[i] == comparators[m]){
					op_pos = i;
					
					
				
				}	
			
			}
		}
		 std::string op_type = userInput.substr(op_pos, 1);
		 std::string val1 = userInput.substr(0, op_pos);
		 std::string val2 = userInput.substr(op_pos + 1, userInput.length() - op_pos );
		 
		 int num_val1 = std::stoi(val1);
		 int num_val2 = std::stoi(val2);
			
		 Logic(num_val1, num_val2, op_type);
	}




void GetInput(){
	std::string userInput;
	
	std::cout << "Enter Calculation: " << std::endl;
	std::cin >> userInput;

	if(userInput == "BINARY"){
		std::cout << "Binary to Decimal: " << std::endl;
		
		std::cout << "Please enter Binary number to convert" << std::endl;
		std::cin >> userInput;
		std::cout << binaryDec(userInput) << std::endl;
		
	}else if(userInput == "DECIMAL" ){
		
			DecBinary();
	
	}else{
		
		findValues(userInput);
	}
	
	
}

int main(){
	std::cout << "#### DynamiCalculator ####" << std::endl;
	std::cout << "Welcome to DynamiCalculator..." << std::endl;
	GetInput();
	
}