#include <iostream>
#include <string>
#include <sstream>






/* 
			####### Calculator written by Kyle Christie ########
			Development Started: 29/09/17
			
			- Program can regonise what type of calculation is being carried out. (29/09/19)
			- Program can find first numeric value, it doesn't have the capability to locate the 2nd (30/09/19)
			- If there are spaces in between each character then the program can't recognise the operator(30/09/19)
			- Program is broken, will not compile and will not function (02/10/2019)

*/ 


void findInt(){
		
	
		std::stringstream ss;
		
		
		ss << removeSpaces();
		
		std::string temp;
		int found;
		
		while(!ss.eof()){
			ss >> temp;
			if(std::stringstream(temp) >> found){
				std::cout << found << " " << std::endl;
			}
			
			temp = "";
		}
		
		
}

std::string removeSpaces(std::string userInput){
	
	std::string inputErase;
	
	userInput = inputErase;
	inputErase.erase(inputErase.begin(),inputErase.end(), ' ');
	
	return(inputErase);
}


void findOperator(std::string userInput){
	
	std::string comparators[4];
	comparators[0] = "+"; comparators[1] = "-"; comparators[2] = "*"; comparators[3] = "/"; 
	

		
		if(userInput.find(comparators[0],0) == true){
			
			std::cout << "addition" << std::endl;
		
		}else if(userInput.find(comparators[1], 0) == true){
		
			std::cout << "subtraction" << std::endl;
		
		}else if(userInput.find(comparators[2], 0) == true){
		
			std::cout << "multiplication" << std::endl;
		
		
		}else if(userInput.find(comparators[3], 0) == true){
		
			std::cout << "division" << std::endl;
		
		}else{
			std::cout << "NOT FOUND" << std::endl;
		}
	
	
}







void GetInput(){
	
	
	
	
	std::string userInput;


	
	std::cout << "Enter calculation: " << std::endl;
	std::cin >> userInput;


	
	removeSpaces(userInput);
	findInt();
	findOperator(userInput);
	
	
		
	
	
	//std::cout << "Numerical Input: " << uNumValues << std::endl;
	

}

void WelcomeMessage(){
	
 std::cout << "#### Calculator ####" << std::endl;
 GetInput();
}

int main(){
	
	WelcomeMessage();
	
	return 0;
}
