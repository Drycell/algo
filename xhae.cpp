#include <iostream>
#include <string>
#include <algorithm>

int calc(int first_input, char operation, int second_input);	 				// return calc result
int stod(std::string *number, std::string input); 						// sorted string number --change--> dec number

int main(void)
{
	std::string number[11] = {"zero", "one", "two", "three", "four", "five", 
				  "six", "seven", "eight", "nine", "ten"};
	char operation[2];
	int loop, input1_dec, input2_dec, result_dec;
	std::string input[2];
	
	std::cin >> loop;
	
	std::string result;
	bool *a = new bool [loop];

	for(int i = 0; i < 11; i++)								  // result save
	{
		std::sort(number[i].begin(), number[i].end());
	}

	for(int i = 0; i < loop; i++)
	{
		std::cin >> input[0] >> operation[0] >> input[1] >> operation[1] >> result; 	   // input numerical formular
		
		std::sort(input[0].begin(), input[0].end());
		std::sort(input[1].begin(), input[1].end());
		std::sort(result.begin(), result.end());
		
		input1_dec = stod(number, input[0]);
		input2_dec = stod(number, input[1]);

		result_dec = calc(input1_dec, operation[0], input2_dec);
		
		if(result_dec < 0 || result_dec > 10)
			a[i] = false;
		else if(stod(number, result) == result_dec)
			a[i] = true;
		else
			a[i] = false;
	}

	for(int i = 0; i < loop; i++)
	{
		if(a[i])
			std::cout << "Yes" << std::endl;
		else
			std::cout << "No" << std::endl;
	}

	return 0;
}


int calc(int first_input, char operation, int second_input)
{
	if(operation == '+')
		return first_input + second_input;
	if(operation == '-')
		return first_input - second_input;
	if(operation == '*')
		return first_input * second_input;
}

int stod(std::string *number, std::string input)
{
	if(input == number[0])
		return 0;
	if(input == number[1])
		return 1;
	if(input == number[2])
		return 2;
	if(input == number[3])
		return 3;
	if(input == number[4])
		return 4;
	if(input == number[5])
		return 5;
	if(input == number[6])
		return 6;
	if(input == number[7])
		return 7;
	if(input == number[8])
		return 8;
	if(input == number[9])
		return 9;
	if(input == number[10])
		return 10;
}
