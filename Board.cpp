//
// Created by Leont on 05/04/2021.
//

#include "Board.h"
#include <vector>
#include <iostream>


void Board::populateBoard() {
    //generate pawns
    for (int i=0;i<8;i++) {
        const int location[2]={1,i};
        const int location2[2] = {6,i};
        this->addPiece(location,PAWN,WHITE);
        this->addPiece(location2,PAWN,BLACK);
    }

    //generate castles
    for (int i=0;i<2;i++){
        const int location[2]={0,i*7};
        const int location2[2] = {7,i*7};
        this->addPiece(location,ROOK,WHITE);
        this->addPiece(location2,ROOK,BLACK);
    }

    //generate knights
    for (int i=0;i<2;i++){
        const int location[2]={0,i*5+1};
        const int location2[2] = {7,i*5+1};
        this->addPiece(location,KNIGHT,WHITE);
        this->addPiece(location2,KNIGHT,BLACK);
    }

    //generate bishops
    for (int i=0;i<2;i++){
        const int location[2]={0,i*3+2};
        const int location2[2] = {7,i*3+2};
        this->addPiece(location,BISHOP,WHITE);
        this->addPiece(location2,BISHOP,BLACK);
    }

    int location[2]={0,3};
    int location2[2] = {7,3};
    this->addPiece(location,QUEEN,WHITE);
    this->addPiece(location2,QUEEN,BLACK);
    location[1]++;
    location2[1]++;
    this->addPiece(location,KING,WHITE);
    this->addPiece(location2,KING,BLACK);
}

void Board::setScholarMate(){
    /*
     * TODO
     */
}

void Board::printBoard(){
    char board[8][8];
    for (int i=0;i<8;i++) {
        for (int ii = 0; ii < 8; ii++) {
            board[i][ii] = NULL;
        }
    }
    for (auto p=this->pieces.begin();p!=this->pieces.end();p++){
        int* location = p->get()->getLocation();
        board[location[0]][location[1]] = p->get()->getType();
    }

    for (int i=0;i<8;i++){
        std::cout<<"|";
        for (int ii=0;ii<8;ii++){
            char p= board[i][ii];
            if (p!=NULL) {
                std::cout <<" "<< p <<" |";
            }
            else{
                std::cout << " - "<<'|';
            }
        }
        std::cout<<std::endl;
    }
}

void Board::addPiece(const int *location, pieceType type,pieceColour colour) {
    std::unique_ptr<Piece> p = std::make_unique<Piece>(location,type,colour);
    this->pieces.push_back(std::move(p));
}




