#include <iostream>

using namespace std;

int main() {
	
    int edad = 28;
    int altura = 170;
    float peso = 65.5;
    double salario = 3000.0;
    double saldo_bancario = 5000.0;
    char inicial_nombre = 'J';

    cout << "Hab�a una vez un hombre llamado Juan, cuya inicial de nombre era " << inicial_nombre << "." << endl;
    cout << "Juan ten�a " << edad << " a�os de edad y med�a " << altura << " cent�metros de altura." << endl;
    cout << "Pesaba " << peso << " kilogramos y trabajaba en una empresa con un salario de $" << salario << " mensuales." << endl;
    cout << "Un d�a, Juan decidi� revisar su saldo bancario y descubri� que ten�a $" << saldo_bancario << " en su cuenta." << endl;

    return 0;
}

