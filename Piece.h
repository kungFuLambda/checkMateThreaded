//
// Created by Leont on 05/04/2021.
//

#ifndef CHECKMATE_PIECE_H
#define CHECKMATE_PIECE_H

#include <tuple>
#include <ios>

enum pieceType{
    PAWN,KNIGHT,BISHOP,ROOK,QUEEN,KING,
};
enum pieceColour{
    WHITE,BLACK
};

class Piece {
public:
    Piece(const int *location, pieceType type,pieceColour colour);
    int* getLocation();
    char getType();
private:
    int location[2];
    pieceType type;
    pieceColour colour;

    void move(int *location);
};




#endif //CHECKMATE_PIECE_H
