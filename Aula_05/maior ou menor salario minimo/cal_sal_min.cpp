#include <iostream>


using namespace std;

int main(){
	
	float num, salMin = 1000.00 ;
	
	cout << "Qual seu sal�rio? ";
	cin >> num;
	
	if(num <= salMin ){
		
		cout << "Seu salario � menor do que o salario minimo ";
	}else{
		
		cout << "Seu salario � maior do que o salario minimo ";
	}
}
