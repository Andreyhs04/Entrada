#include <iostream>

using namespace std;

/*int idade;
cout << "Qul sua idade? ";
cin >> idade;
cout << idade;*/
/*int numero = 5;
if (numero > 0) {
	cout << "Numero positivo";

};*/
/*char resposta;
cout << "DESEJA CONTINUAR?";
cin >> resposta;
if (resposta == 's' || resposta == 'S') {
	cout << "Voce escolheu continuar" ;
}
else {
	cout << "Voce escolheu sair";
}
}*/

/*int chocolate();
int funcao();
int posORneg();
int maiorOuMenor();

int main() {
	chocolate();
	funcao();
	posORneg();
	maiorOuMenor();
	return 0;
}

int chocolate() {
	float valorchocolate = 0.00;
	int quantidadeComprada;
	cout << "Questao 1: Escolha o numero de chocolates que voce quer comprar";
	cout << "\n";
	cin >> quantidadeComprada;
	if (quantidadeComprada > 25) {
		valorchocolate = 1.25;
	}
	else {
		valorchocolate = 1.50;
	}

	float valorDaCompra = valorchocolate * quantidadeComprada;


	cout << "Questao 1: ";
	cout << "Valor da sua compra e de: " << valorDaCompra;
	cout << "\n";


	return 0;
}*/

/*int funcao() {
	int numeroEscolhido;
	int resultado;
	cout << "\n";
	cout << "Questao 2: Escolha um numero";
	cout << "\n";
	cin >> numeroEscolhido;
	if (numeroEscolhido > 10) {
		resultado = numeroEscolhido + 10 * 2;
		cout << "Questao 2: ";
		cout << "O resultado final e: " << resultado;
		cout << "\n";
	}
	else {
		resultado = numeroEscolhido + 9 * 3 - 8;
		cout << "Questao 2: ";
		cout << "O resultado final e: " << resultado;
		cout << "\n";
	}




	return 0;

}*/

/*int posORneg() {
	int numeroEscolhido;
	cout << "\n";
	cout << "Questao 3: Escolha um numero para verificarmos algo";
	cout << "\n";
	cin >> numeroEscolhido;
	if (numeroEscolhido > 0) {
		cout << "Questao 3: ";
		cout << "O seu numero e positivo ";
		cout << "\n";
	}
	else {
		cout << "Questao 3: ";
		cout << "O seu numero e negativo ";
		cout << "\n";
	}

	return 0;
}*/

/*int maiorOuMenor() {
	int numeroEscolhido1;
	int numeroEscolhido2;
	cout << "\n";
	cout << "Questao 4: Escolha um numero para verificarmos algo";
	cout << "\n";
	cin >> numeroEscolhido1;
	cout << "Questao 4: Escolha outro numeor";
	cout << "\n";
	cin >> numeroEscolhido2;
	if (numeroEscolhido1 > numeroEscolhido2) {
		cout << "Questao 4: ";
		cout << numeroEscolhido1 << " > " << numeroEscolhido2;
		cout << "\n";
	}
	else {
		cout << "Questao 4: ";
		cout << numeroEscolhido1 << " < " << numeroEscolhido2;
		cout << "\n";
	}

	return 0;
}*/
#include <iostream>

using namespace std;

int main() {
	int a = 5;
	int b = 23;

	int temp = a;
	a = b;
	b = temp;

	cout << a;
	cout << b;
}
