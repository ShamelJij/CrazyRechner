#include <cstdlib>
#include <iostream>
#include <ctime>
#include <utility>
using namespace std;
using std::cout, std::cin, std::endl;

using opsym_result_t = std::pair<char, double>;

//struct OpSymResult {
//	char operatorSymbol;
//	double result;
//};



int getRandomValue(int range)
{
	return rand() % range;
	//cout << "Random value on [0 " << range << "]: "
		//<< random_variable << '\n';
}

char getRandomOperatorSymbol() {
	static const char operatorSymbol[] = { '+', '-', '*', '/' };
	return operatorSymbol[getRandomValue(sizeof(operatorSymbol))];
}

opsym_result_t calcRandomOperation(double x, double y){
	char operatorSymbol = getRandomOperatorSymbol();
    double result;

		switch (operatorSymbol) {
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;
		}

		return std::make_pair(operatorSymbol, result);
	}


/*
char getCrazyOperator (const int& random_variable)
{

	char crazyOperator;
		switch (random_variable)
		{
		case 0:
			crazyOperator = '+';
			break;
		case 1:
			crazyOperator = '-';
				break;
		case 2:
			crazyOperator = '*';
				break;
		case 3:
			crazyOperator = '/';
				break;
		default:
			crazyOperator = 'n';
			break;
		}
		return crazyOperator;
}

void crazyRechner(const char& crazyOperator)
{

	double result;

	switch (operatorSymbol()) {
	case '+':
		result = firstInput + secondInput;
		break;
	case '-':
		result = firstInput - secondInput;
		break;
	case '*':
		result = firstInput * secondInput;
		break;
	case '/':
		result = firstInput / secondInput;
		break;
		// ...
	}
	return result;
}

int guessResult()
{
	double guessNum;
	if (guessNum != result)
	{
		cout << "Number is false.";
	}
	cout << "Number is right!";
}
*/

int main()
{
	
	double firstInput;
	double secondInput;
	//int getRandomValue(3);
	/*char getRandomOperatorSymbol();
	opsym_result_t calcRandomOperation(firstInput, secondInput);*/
	
	//char operatorSymbol = getRandomOperatorSymbol();
	
		//srand(unsigned(time(0))); //use current time as seed for random generator

	//double firstInput, secondInput;
	
	//char guessOp;
	//double result;
	//
	//for (int i = 0; i < 5; ++i) {
	//	opsym_result_t calcRandomOperation(firstInput, secondInput);
	//	cout << operatorSymbol << ": " << result << endl;
	//} 
	//
	
	cout << "\ngive first number:\n\n";
	cin >> firstInput;
	cout << "\ngive second number:\n\n";
	cin >> secondInput;
	auto opRes= calcRandomOperation(firstInput, secondInput);
	cout << "\n" << opRes.second << endl;

	cout << "\nOperator:\n\n";
	char guessOp;
	cin >> guessOp;
	if (guessOp == opRes.first) {
		cout << "\nright!\n";
	}
	else 
	{
		cout << "\nwrong!\n";
		cout << "\nResult is: ";
		cout << opRes.first << endl;
	}
	std::system("pause");

	
	
	/*for (int i = 0; i < 5; ++i) {
		auto opResPair = calcRandomOperation(firstInput, secondInput);
		cout << opResPair.first << ": " << opResPair.second<< endl;
	}*/

	for (int i = 0; i < 5; ++i) {
		std::pair<char, double> opResPair = calcRandomOperation(firstInput, secondInput);
		cout << opResPair.first << ": " << opResPair.second << endl;
	}

	/*for (int i = 0; i < 5; ++i) {
		opsym_result_t opResPair = calcRandomOperation(firstInput, secondInput);
		cout << opResPair.first << ": " << opResPair.second << endl;
	}*/
	

	/*auto guessOperator = 0;
	auto guessResult = 0;

	auto [operatorSymbol, result] = calcRandomOperation(firstInput, secondInput);
	cout << "Guess operator :";
	cin >> guessOperator;
	cout<<guessResult;

	cout << result;*/
	

	
	return 0;
	//system("pause>0");


}
