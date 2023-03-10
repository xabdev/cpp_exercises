#include <stdlib.h>
#include <iostream>

int clrscr() {std::cout << "\033[2J\033[1;1H";}



int main() {

    while(true) {

        int v1 = 0, v2 = 0;
        char op;
        std::cout << "Ingrese un numero, seguido del operador y luego el ultimo numero: " << std::endl;
        std::cin >> v1 >> op >> v2;
        if (op != '+' && op != '-' && op != '*' && op != '/')
            {std::cout << op << " No es un Operador valido." << std::endl;}

        int sum = v1+v2, rest = v1-v2, mult = v1*v2, div = v1/v2;

        if (op == '+') {std::cout << sum << std::endl;}
        else if (op == '-') {std::cout << rest << std::endl;}
        else if (op == '*') {std::cout << mult << std::endl;}
        else if (op == '/') {std::cout << div << std::endl;}

        char ch = 'n';
        std::cout << "Continue? [y/n]  ";
        std::cin >> ch;
        if (ch == 'Y' || ch == 'y') {
            clrscr();
            continue;
        } else
            std::cout << "byebye!"; break;}

}