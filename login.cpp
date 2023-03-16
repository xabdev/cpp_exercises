#include <stdlib.h>
#include <iostream>



int main() {

    std::string user;
    std::string password;
    int attempt = 0;

    while (attempt != 3) {
        std::cout << "Ingrese su Usuario :" << std::endl;
        std::cin >> user;
            if (user != "net") {
                ++attempt;
                std::cout << "Usuario incorrecto!" << " Le quedan " << 3 - attempt << " intentos" << std::endl;
                continue;
            } else {
                std::cout << "Usuario Correcto" << std::endl;
                std::cout << "Ingrese su Password" << std::endl;
                std::cin >> password;
                    if (password != "123456") {
                            ++attempt;
                            std::cout << "Password incorrecto!" << " Le quedan " << 3 - attempt << " intentos" << std::endl;
                            continue;
                    } else { std::cout << "WELCOME!" << std::endl; break; }
            }
    }
}