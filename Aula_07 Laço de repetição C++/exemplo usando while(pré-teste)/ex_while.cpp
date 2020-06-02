#include <iostream>

using namespace std;

int main(){
	
	int cont, num, res;
	
	cont = 0;
	
	cout << "Você desejaria ver a tabuada de que número?" << "\n";
	cin >> num;
	
	while(cont <= 10){
		
		res = num * cont;
		
		cout << "\n" << num << "x" << cont << " = " << res;
		
		cont ++;
	}
	
}
