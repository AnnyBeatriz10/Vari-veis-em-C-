#include <iostream>
using namespace std;
int main(){
  //TIPO NOME;
  //TIPO NOME = VALOR

//BLOCO 1: Definição das variáveis

  int numeros=1; //10,25...
  char letras='a'; //'b'
  //char letras[20];  matriz, vetor ...
  double decimal=1.5; //2,5 4,5
  float decimal2=1.5; // precisão de casas decimais do double
  bool vivo=true; //True ou False / 1 ou 0
  string palavra= "Hello"; // Recebe um texto maior do que o char (o char recebe apenas um caracter)

  //BLOCO 2: imprimir na tela o contúdo das variáveis declaradas anteriormente

  cout << numeros << "\n";
  cout << letras << "\n";
  cout << decimal << "\n";
  cout << decimal2 << "\n";
  cout << vivo << "\n";
  cout << palavra << "\n";
  
  //BLOCO 3: Pedir entrada ao usuário

  cout << "Digite o número de vidas: ";
  //Ler do teclado:
  cin >> numeros;
  cout << "Digite uma letra: ";
  cin >> letras;
  cout << "Digite um decimal: ";
  cin >> decimal;
  cout << "Digite uma quantia em dinheiro: ";
  cin >> decimal2;
  cout << "Digite seu nome: ";
  cin >> palavra; 

  /* BLOCO 4: mostrar os valores armazenados nas variáveis

// imprimir uma mensagem antes de mostrar o conteúdo das entradas:*/
  cout << "Os dados armazenados foram:\n " ;

  cout << numeros << "\n" << letras << "\n" << decimal << "\n" << decimal2 << "\n" << palavra << "\n";

  // Finalizar o programa
  system("pause");


  return 0;

}