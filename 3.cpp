#include <iostream> //Sempre começar c++ com este comando

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float numero;
	
	cout << "Informe seu numero:";
	cin >> numero;
	
	if(numero <0){
		cout << "\n\nSeu numero é negativo";
	}else if(numero >0){
		cout << "\n\nSeu numero é positivo";
	}else if (numero == 0){
		cout << "\n\nSeu numero é neutro";
	}
}

