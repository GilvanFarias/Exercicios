#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int numMes;
	char*mesExtenso = "";
	bool invalido = false;
	
	cout << "Informe o número do mês: ";
	cin >> numMes;
	
	if (numMes == 1){
		
		mesExtenso = "Janeiro";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if( numMes == 2){
		
		mesExtenso = "Fevereiro";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
	}else if( numMes == 3){
		
		mesExtenso = "Março";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if( numMes == 4){
		
		mesExtenso = "Abril";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if( numMes == 5){
		
		mesExtenso = "Maio";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if( numMes == 6){
		
		mesExtenso = "Junho";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if( numMes == 7){
		
		mesExtenso = "Julho";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if( numMes == 8){
		
		mesExtenso = "Agosto";
		
		
	}else if( numMes == 9){
		
		mesExtenso = "Setembro";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if( numMes == 10){
		
		mesExtenso = "Outubro";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if( numMes == 11){
		
		mesExtenso = "Novembro";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if( numMes == 12){
		
		mesExtenso = "Dezembro";
		
		cout << "O número " << numMes << " Equivale ao mês de " << mesExtenso;
		
	}else if(numMes > 12 == !invalido){
		
		cout << "Número inválido";
	}
	  
	
	
	
}
