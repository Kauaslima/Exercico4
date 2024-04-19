#include <iostream>

using namespace std;

// Função para verificar e retornar o dia da semana
string obterDiaDaSemana(int numero) {
    switch (numero) {
    case 1:
        return "Domingo";
    case 2:
        return "Segunda-Feira";
    case 3:
        return "Terça-Feira";
    case 4:
        return "Quarta-Feira";
    case 5:
        return "Quinta-Feira";
    case 6:
        return "Sexta-Feira";
    case 7:
        return "Sábado";
    default:
        return "Dia inválido";
    }
}

// Função para realizar operações matemáticas
double calcularOperacao(double num1, double num2, char operacao) {
    switch (operacao) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Divisão por zero não é permitida." << endl;
            return 0;
        }
    default:
        cout << "Operação inválida." << endl;
        return 0;
    }
}

// Função para verificar se uma letra é vogal ou consoante
void verificarLetra(char letra) {
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
        letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        cout << "Vogal" << endl;
    else
        cout << "Consoante" << endl;
}

int main() {
    int opcao;
    double num1, num2;
    char operacao, letra;

    // Problema 1
    cout << "Digite um número de 1 a 7: ";
    cin >> opcao;
    cout << obterDiaDaSemana(opcao) << endl;

    // Problema 2
    cout << "Digite dois números: ";
    cin >> num1 >> num2;
    cout << "Digite a operação matemática (+, -, * ou /): ";
    cin >> operacao;
    cout << "Resultado: " << calcularOperacao(num1, num2, operacao) << endl;

    // Problema 3
    cout << "Digite uma letra: ";
    cin >> letra;
    verificarLetra(letra);

    return 0;
}
