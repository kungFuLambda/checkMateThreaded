//
// Created by Leont on 05/04/2021.
//

#include "Piece.h"

#include <utility>
#include <ios>


int* Piece::getLocation() {
    return this->location;
}
void Piece::move(int* location){
    this->location[0]=location[0];
    this->location[1]=location[1];
}
char Piece::getType(){
    switch (this->type) {
        case 0:
            return 'p';
        case 1:
            return 'k';
        case 2:
            return 'b';
        case 3:
            return 'r';
        case 4:
            return 'q';
        case 5:
            return 'K';
    }
};
Piece::Piece(const int *location, pieceType type,pieceColour colour) {
    this->location[0]=location[0];
    this->location[1]=location[1];
    this->type=type;
    this->colour=colour;
}


