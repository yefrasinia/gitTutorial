//
//  chessboard.hpp
//  chess
//
//  Created by yefrasinia on 28.09.2018.
//  Copyright © 2018 chess. All rights reserved.
//

#ifndef chessboard_hpp
#define chessboard_hpp

#include <stdio.h>

#endif /* chessboard_hpp */
enum PlayerColour{
    WHITE,BLACK
};
typedef char ChessPiece;
class ChessBoard;
class ChessBoardIterator : public std::iterator<std::input_iterator_tag>{
    int rank, file ;
public:
    ChessBoardIterator();
    ChessBoardIterator(const ChessBoardIterator& that);
    bool operator!=(const ChessBoardIterator that);
    bool operator==(const ChessBoardIterator that);
    ChessPiece::reference operator*() const;
    ChessBoardIterator& operator++();
};
class ChessBoard
{
    ChessPiece board[8][8];
    PlayerColour turn ;
public:
    ChessBoard();
    bool isCheckMate();
    bool isCheck();
    bool isEmpty(char file, int rank);
    void placePiece(char file , int rank , ChessPiece piece);
    PlayerColour getTurn();
    
    void debugPrint();
    friend class ChessBoardIterator;
};
