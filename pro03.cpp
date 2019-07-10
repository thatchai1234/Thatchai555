#include<iostream>
#include<string>
using namespace std;
int main()
{
	int Fahrenhiet,C;
	cout <<"Enter Celsius temperature :";
	cin >> C;
	Fahrenhiet = (1.8 * C ) + 32 ;
	cout<< " fahrenhiet = " << (1.8 * C ) + 32 ;
	cout<< ((Fahrenhiet > 70 )? "\nNow weather in Thailand is HOT\n" : "\nNow weather in Thailand is COOL\n"); 
	return(0);
}