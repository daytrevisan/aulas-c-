#include <iostream>
using namespace std;

int main() {

    int number1;
    int number2;

    cout << "Digite o primeiro número: ";
    cin >> number1;
    cout << "Digite o segundo número: ";
    cin >> number2;

    int sum = number1 + number2;
    cout << "Soma: " << sum;
    
    int sub = number1 - number2;
    cout << "\nSubtracao: " << sub;

    int mul = number1 * number2;
    cout << "\nMultiplicacao: " << mul;

    float div = number1 / number2;
    cout << "\nDivisao: " << div;

    float fdiv = (float)number1 / (float)number2;
    cout << "\nDivisao float: " << fdiv;
    
    int res = number1 % number2;
    cout << "\nResto da Divisao: " << res;

    return 0;
}
