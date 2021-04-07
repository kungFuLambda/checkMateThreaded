#include <iostream>
#include "Piece.h"
#include "Board.h"


int main() {
    Board board = Board();
    std::cout << "Board created" << std::endl;
    board.populateBoard();
    std::cout << "Board populated" << std::endl;
    board.printBoard();

    return 0;
}
