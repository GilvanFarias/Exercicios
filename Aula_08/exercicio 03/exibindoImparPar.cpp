#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int cont=0, num=0, par, impar =0;
	
	cout<< " Digite um número\n ";
	cin>> num;

	while(num>=cont){
		
	if(num%2 == 0){
		par = par + 1;
		cout<< num<< " Este número é par\n";
		
		num --;
	}else if (num%2 == 1){
			
		impar = impar + 1;
		cout<<num<< " Este número é impar\n";
		
		num --;	
	}
		
			
		}
		
		cout << " \nNúmeros exibidos par "<<par;
		cout << " \nNúmeros exibidos impar "<<impar;
		
	}

