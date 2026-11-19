#include <iostream>
#include <cstdlib>
using namespace std;

void flipCoin(string& coin){
	int num = rand() % 2;

	if(num == 0){
		coin = "heads";
	}else{
		coin = "tails";
	}
}

int main(){

	string coin;
	int numOfFlips;
	cout << "Please enter a number of coin flips: ";
	cin >> numOfFlips;

	srand(2);
	for (int i = 0; i < numOfFlips; i++){
		flipCoin(coin);
		cout << coin << endl;
	}

	return 0;
}
