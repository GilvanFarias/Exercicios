#include <iostream>

using namespace std;

int main(){
	
	int num, res;
	
	cout << "Digite um n�mero negativo ou positivo: ";
	cin >> num;
	
	if (num >= 0){
		
		cout << "O n�mero digitado � par  ";
	}else{
		
		cout << "O n�mero digitado � negativo";
	}
}
