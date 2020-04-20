//Exercício 1 e 2 da lista geral TERMINADOS :)

#include <iostream>
#include <stdio.h>
#include "Horario.h"

using namespace std;

double quantocustou(double intervalo)
{
    double foo;
    if (intervalo < 180) {
        return (4.50);
    }
    if (intervalo > 720) {
        return(33.00);
    }
    else if (intervalo >= 180 && intervalo <= 720) {
        foo = ((intervalo-180)/15);
        foo = foo * 0.75;
        return (4.50 + foo);
    }
    return (-999);
}

int main()
{
    double horapadrao, minpadrao, intervalo, horasecundaria, minutosecundario;
  
    cout << "Digite a hora desejada!\n";
    cin >> horapadrao;
    cout << "Digite os minutos desejados!\n";
    cin >> minpadrao;
    //chamando construtora
    Horario h(horapadrao, minpadrao);

    cout << "Salvando dados, etapa 2\n";
    cout << "Digite a hora desejada!\n";
    cin >> horasecundaria;
    cout << "Digite os minutos desejados!\n";
    cin >> minutosecundario;
    //chamando contrutora
    Horario x(horasecundaria, minutosecundario);

    intervalo = h.calcularIntervalo(x);
    cout << "intervalo foi de: " << intervalo << " minutos.\n";
    cout << "O custo do intervalo foi: R$" << quantocustou(intervalo) << "\n";


    return 0;
}
