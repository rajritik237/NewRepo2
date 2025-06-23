#include<iostream>  
using namespace std;  
int main() {  
	int number;
	cout << "enter a positive number::" << endl;  
	cin >> number;  
	if (number% 2 == 0) 
	{  
		cout << "the number " << number<< " even" << endl;  
	} 
	else 
	{  
		cout << "the number " << number << " odd" << endl;  
	}  
	return 0;
}