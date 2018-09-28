//
//  chessboard.cpp
//  chess
//
//  Created by yefrasinia on 28.09.2018.
//  Copyright © 2018 chess. All rights reserved.
//

#include "chessboard.hpp"
#include <iostream>
ChessBoard::ChessBoard(){
    for(int i = 0; i<8 ;++i){
        for(int j=0; j<8 ; ++j){
            board[i][j] = ' ' ;
        }
    }
   
}

void ChessBoard::debugPrint(){
    std::cout<< ' ' ;
    for(int i = 0; i<8 ;++i){
    std::cout <<' ' << (char)('A' + i);
    }
    std::cout << std::endl;
    for(int rank = 8; rank > 0 ; --rank){
        std::cout << rank ;
        for(int file=0; file < 8 ; ++file){
            std::cout<< ' '<<board[rank-1][file] ;
        }
        std::cout << std::endl;
    }
}
PlayerColour ChessBoard::getTurn(){
    return turn;
}
void ChessBoard::placePiece(char file, int rank, ChessPiece piece){
    board[rank-1][file - 'A'] = piece ;
}
ChessBoardIterator::ChessBoardIterator()
: rank(0) , file (0)
{}
bool operator!=(const ChessBoardIterator that){
    return !operator==(that);
}
bool operator==(const ChessBoardIterator that){
    return this->rank==that.rank && this->file == that.file;
}
ChessPiece::reference operator*() const{
    
}
ChessBoardIterator& operator++();
