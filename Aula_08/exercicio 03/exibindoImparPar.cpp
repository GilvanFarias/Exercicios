#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int cont=0, num=0, par, impar =0;
	
	cout<< " Digite um n�mero\n ";
	cin>> num;

	while(num>=cont){
		
	if(num%2 == 0){
		par = par + 1;
		cout<< num<< " Este n�mero � par\n";
		
		num --;
	}else if (num%2 == 1){
			
		impar = impar + 1;
		cout<<num<< " Este n�mero � impar\n";
		
		num --;	
	}
		
			
		}
		
		cout << " \nN�meros exibidos par "<<par;
		cout << " \nN�meros exibidos impar "<<impar;
		
	}

