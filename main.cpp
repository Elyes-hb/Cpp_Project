#include<iostream>


using namespace std;

int main()
{	
	int a;
	int b;
	int sum;


	cout << "Enter a number " << endl;
	cin >> a;

	cout << "Enter another number " << endl;
	cin >> b;
	if (a > b){
		sum = a + b;
		cout << "the sum is  " << sum << endl;
	}
	else cout << "a not greater than b";
	cin >> sum;
	

//	std::cout<<"hello world"<<std::endl;
//std::cin.get(); 
	return 0;
}
