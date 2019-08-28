#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
float update_balance(string command, float dollars, float &balance);
int main()
{
	string command ;
	float balance = 10000, dollars;
	cout << "Exit with 0\n";
	cout << "your balance = "  << fixed << setprecision(2) << balance <<  endl;

	do{
		cout << "Input command ( 1 withdraw, 2 deposit ) : ";
		cin >> command ;
		if (command =="0") break;
		cout << "You amount : ";
		cin >> dollars;
		cout << "You balance : " << fixed << setprecision(2) << update_balance(command,dollars,balance) << endl;
	}while(true);

	return 0;
}

float update_balance(string command, float dollars, float &balance)
{
	if (command == "1")
		balance = balance - dollars;

	if (command == "2")
		balance = balance + dollars;
	return balance;
}