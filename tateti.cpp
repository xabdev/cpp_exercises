#include <iostream>


char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int win();
void board();

int clrscr() {std::cout << "\033[2J\033[1;1H";}


int main() {
    int player = 1;
    int i;
    int choice;
    char mark;

    do  {
            board();
            player = (player%2) ? 1:2;
            std::cout << "Player " << player << ", enter a number: ";
            std::cin >> choice;
            mark=(player == 1) ? 'x' : 'o';
            if (choice == 1 && square[1] == '1')
                square[1] = mark;
            else if (choice == 2 && square[2] == '2')
                square[2] = mark;
            else if (choice == 3 && square[3] == '3')
                square[3] = mark;
            else if (choice == 4 && square[4] == '4')
                square[4] = mark;
            else if (choice == 5 && square[5] == '5')
                square[5] = mark;
            else if (choice == 6 && square[6] == '6')
                square[6] = mark;
            else if (choice == 7 && square[7] == '7')
                square[7] = mark;
            else if (choice == 8 && square[8] == '8')
                square[8] = mark;
            else if (choice == 9 && square[9] == '9')
                square[9] = mark;
            else {
                std::cout << "invalid move ";
                player--;
                std::cin.ignore();
                std::cin.get();
            }

            i = win();
            player++;
            } while (i == -1);
            board();
            if (i == 1)
            std::cout << "==\aPlayer " << --player << " win ";
            else
            std::cout << "==\aGame draw";
            std::cin.ignore();
            std::cin.get();
            return 0;

    }


int win() {
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;


}


void board() {

    clrscr();
    std::cout << "       TA-TE-TI " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Player 1  -  Player 2" << std::endl;
    std::cout << "   X    " << "        O" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "  " << square[7] << "   |   " << square[8] << "    |   " << square[9] << std::endl;
    std::cout << "------|--------|------" << std::endl;
    std::cout << "  " << square[4] << "   |   " << square[5] << "    |   " << square[6] << std::endl;
    std::cout << "------|--------|------" << std::endl;
    std::cout << "  " << square[1] << "   |   " << square[2] << "    |   " << square[3] << std::endl;
    std::cout << "" << std::endl;
}





