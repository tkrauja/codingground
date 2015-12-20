#include<iostream>

using namespace std;

int main(){
	
	int num;
	
	cout << "Enter a number to play the game of threes: ";
	cin >> num;
	
	while(num != 1){
		if(num % 3 == 0){
			num = num / 3;
			cout << num << " 0" << endl;
		}
		else if(num % 3 == 1){
			num -= 1;
			cout << num << " -1" << endl;
		}
		else{
			num += 1;
			cout << num << " +1" << endl;
		}
	}
	return 0;
}