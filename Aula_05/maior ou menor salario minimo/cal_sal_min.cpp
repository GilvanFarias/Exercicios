#include <iostream>


using namespace std;

int main(){
	
	float num, salMin = 1000.00 ;
	
	cout << "Qual seu salário? ";
	cin >> num;
	
	if(num <= salMin ){
		
		cout << "Seu salario é menor do que o salario minimo ";
	}else{
		
		cout << "Seu salario é maior do que o salario minimo ";
	}
}
