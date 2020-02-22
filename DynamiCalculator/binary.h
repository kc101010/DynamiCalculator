//pre-processor directives
#include <iostream>
#include <string>


int binaryDec(std::string in){
	
	
	
	int calc = 128;
	int _final = 0;
	
	for(int j = 0; j < 8; ++j){
		if(in[j] == '1'){
			_final += calc;
		}
		
		calc /= 2;
	}
	
	return _final;
}

void DecBinary(){
	int num[32], n , i = 0;
	
	
	std::cout << "Decimal to Binary" << std::endl;
	std::cout << "Please enter Decimal number to convert" << std::endl;
	/* 
			Original code used from:
			https://www.javatpoint.com/cpp-program-to-convert-decimal-to-binary
			But resulted in extra numbers being included
		
			New code used from:
			https://www.geeksforgeeks.org/program-decimal-binary-conversion/
			Which works as intended
	
	*/
	
	std::cin >> n;
	
	
	while(n > 0){
		num[i] = n % 2;
		n = n / 2;
		i++;
	}
	
	for(int j = i - 1; j >= 0; j--){
		std::cout << num[j];
	}

	
	
	
}
