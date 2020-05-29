#include <iostream>

using namespace std;

int main(){
	
	int num, res;
	
	cout << "Digite um número negativo ou positivo: ";
	cin >> num;
	
	if (num >= 0){
		
		cout << "O número digitado é par  ";
	}else{
		
		cout << "O número digitado é negativo";
	}
}
