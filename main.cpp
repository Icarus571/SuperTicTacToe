#include <iostream>

void printTicTacToe()
{
    std::cout <<
    "\
 O | X | X  ||  O | X | X  ||  O | X | X \n\
 ---------  ||  ---------  ||  --------- \n\
 O | X | O  ||  O | X | O  ||  O | X | O \n\
 ---------  ||  ---------  ||  --------- \n\
 X | X | X  ||  X | X | X  ||  X | X | X \n\
========================================== \n\
 O | X | X  ||  O | X | X  ||  O | X | X \n\
 ---------  ||  ---------  ||  --------- \n\
 O | X | O  ||  O | X | O  ||  O | X | O \n\
 ---------  ||  ---------  ||  --------- \n\
 X | X | X  ||  X | X | X  ||  X | X | X \n\
========================================== \n\
 O | X | X  ||  O | X | X  ||  O | X | X \n\
 ---------  ||  ---------  ||  --------- \n\
 O | X | O  ||  O | X | O  ||  O | X | O \n\
 ---------  ||  ---------  ||  --------- \n\
 X | X | X  ||  X | X | X  ||  X | X | X \n\
"
    << std::endl;
}

void initializeBoard(char board[9][9])
{
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            board[i][j] = ' ';
        }
    }
}

void Clear()
{
#if defined _WIN32
    system("cls");
    //clrscr(); // including header file : conio.h
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
    //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences
#elif defined (__APPLE__)
    system("clear");
#endif
}

void printBoard(char board[9][9])
{
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            std::cout << " " << board[i][j] << " |";
            if (j % 3 == 2)
            {
                std::cout << "\b || ";
            }
        }

        std::cout << "\b\b\b\b    " << std::endl;

        if (i == 2 || i == 5)
        {
            std::cout << "==========================================" << std::endl;
        }
        else if (i == 8)
        {
            std::cout << std::endl << std::endl;
        }
        else
        {
            std::cout << " ---------  ||  ---------  ||  --------- " << std::endl;
        }
    }

}

int main()
{
    char board[9][9];
    initializeBoard(board);

    printBoard(board);

    board[0][0] = 'O';
    board[5][2] = 'X';
    printBoard(board);

    return 0;
}
