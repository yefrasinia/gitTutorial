//
//  main.cpp
//  chess
//
//  Created by yefrasinia on 28.09.2018.
//  Copyright © 2018 chess. All rights reserved.
//

#include <iostream>
#include "chessboard.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    ChessBoard cb;
    cb.debugPrint();
    cb.placePiece('E', 2 , 'p');

    return 0;
}
