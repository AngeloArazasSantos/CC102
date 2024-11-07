#include <iostream>

using namespace std;

int main()
{
	char ans;
	cout << "is it raining? [y/n]  : ";
	cin >> ans;
	if (ans == 'y'){
		cout << "get an umbrella";
	}
	else if (ans == 'n'){
		cout << "It is Sunny";
	}
	else{
		cout << "Invalid Input";
	}
	
	return 0;
}
	