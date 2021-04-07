//
// Created by Leont on 05/04/2021.
//
#include <memory>
#include <vector>
#include "Piece.h"
#ifndef CHECKMATE_BOARD_H
#define CHECKMATE_BOARD_H


class Board {
private:
    std::vector<std::unique_ptr<Piece>> pieces;
    std::vector<std::unique_ptr<Piece>> blackPieces;
    std::vector<std::unique_ptr<Piece>> whitePieces;
public:
    void populateBoard();
    void printBoard();
    void addPiece(const int *location, pieceType type, pieceColour colour);

    void setScholarMate();
};


#endif //CHECKMATE_BOARD_H
