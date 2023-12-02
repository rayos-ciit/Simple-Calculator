#include <iostream>
using namespace std;

int main() {

	char oper;
	float num1, num2;
	string str;

	cout << "Welcome to the Simple Calculator! Press any key to start." << endl;
	getline(cin, str);

	cout << "Enter an operator (+, -, *, /, %): " << endl;

	bool isoper = false;

	do
	{
		cin >> oper;


		if (oper == '+' || oper == '-' || oper == '*' || oper == '/' || oper == '%')
		{
			isoper = true;
		}
		else cout << "Please input the operators listed above." << endl;

	} while (!isoper);

	switch (oper)
	{
	case '+':
		cout << "Input two numbers to add: " << endl;
		cin >> num1 >> num2;
		cout << "The sum is equal to: " << num1 + num2 << endl;
		break;
	case '-':
		cout << "Input two numbers to subtract: " << endl;
		cin >> num1 >> num2;
		cout << "The difference is equal to: " << num1 - num2 << endl;
		break;
	case '*':
		cout << "Input two numbers to multiply: " << endl;
		cin >> num1 >> num2;
		cout << "The product is equal to: " << num1 * num2 << endl;
		break;
	case '/':
		cout << "Input two numbers to divide: " << endl;
		cin >> num1 >> num2;
		cout << "The quotient is equal to: " << num1 / num2 << endl;
		break;
	case '%':
	{
		cout << "Input two numbers to find the remainder: " << endl;
		cin >> num1 >> num2;
		int num1int = (int)num1;
		int num2int = (int)num2;
		cout << "The remainder is equal to: " << num1int % num2int << endl;
	}
	}
	return 0;
}


