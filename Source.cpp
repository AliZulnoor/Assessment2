#include<iostream>
#include<string>
#include<math.h>

using namespace std;
int main()
{
	int number, m=1;
	int c = 1;

	string name;
	
		cout << "Pease enter your name" << endl;
		getline(cin, name);
	cout << "Please enter a number" << endl;
	cin >> number;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input, Please enter a number" << endl;
		cin >> number;

	}
	int i = 1;
	int facto = 1;
	cout << "Your name: " << name << endl;
	cout<< "Your number: " << number << endl;
	cout << "\n FACTORIAL" << endl;
	while (i<=number)
	{

		facto *= i;
		i++;
	}
	cout << "The factorial of the number is :" << facto << endl;
	cout << "\n TABLE" << endl;
	do 
	{
		
			cout << number<<" * " << c << " = " << number*c<< endl;
			c++;

	} while (c <10);

	cout << "\n EXPONENTS" << endl;
		for (int i = 0; i < 11; i++)
	{
		cout<<number << " with exponent " << i << "=" <<pow(number, i) << endl;
	}
	
}