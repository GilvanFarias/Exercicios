#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int cod, quanItem, pedidoConcluido;
	
	cout << "********************CARDAPIO**************************" << endl;
	cout << "Digite o c�digo para escolher um item do CARD�PIO " << endl;
	cout << " 100 - Hamb�rguer - R$ 5,50" << endl;
	cout << " 101 - Cachorro-Quente - R$ 4,50" << endl;
	cout << " 102 - Milkshake - R$ 5,50" << endl;
	cout << " 103 - Pizza brotinho - R$ 5,50" << endl;
	cout << " 104 - Cheeseburguer - R$ 5,50" << endl;
	cout << "*******************************************************" << endl;
	
	cout << " Digite o c�digo do seu item " << endl;
	cin >> cod;
	
	switch (cod){
		
		case 100:
			cout << " Quantos Hamburguer voc� deseja? ";
			cin >> quanItem;
			
			pedidoConcluido = quanItem * 4.50;
			
			cout << " Total a pagar:R$ " << pedidoConcluido;
			break;
			
		case 101:
			cout << " Quantos Hamburguer voc� deseja? ";
			cin >> quanItem;
			
			pedidoConcluido = quanItem * 5.50;
			
			cout << " Total a pagar:R$ " << pedidoConcluido;
			break;
			
		case 102:
			cout << " Quantos Hamburguer voc� deseja? ";
			cin >> quanItem;
			
			pedidoConcluido = quanItem * 4.50;
			
			cout << " Total a pagar:R$ " << pedidoConcluido;
			break;
			
		case 103:
			cout << " Quantos Hamburguer voc� deseja? ";
			cin >> quanItem;
			
			pedidoConcluido = quanItem * 4.50;
			
			cout << " Total a pagar:R$ " << pedidoConcluido;
			break;
			
		case 104:
			cout << " Quantos Hamburguer voc� deseja? ";
			cin >> quanItem;
			
			pedidoConcluido = quanItem * 4.50;
			
			cout << " Total a pagar:R$ " << pedidoConcluido;
			break;
		
		default:
			cout << " Valor selecionado inv�lido ";
		
		
			
	}
		

	
}
