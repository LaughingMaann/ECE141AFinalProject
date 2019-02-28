//
//  Game.hpp
//  hw5
//
//  Created by Ester Park on 2/26/19.
//  Copyright © 2019 Ester Park. All rights reserved.
//



#ifndef Game_hpp
#define Game_hpp

#include <"Player.hpp">
#include <"Piece.hpp">

namespace ECE141 {
    
    class Game{
    public:
        static const int kBoardHeigh=8;
        static const int kBoardWidth=8;
        static const int kPiecesPerSide=12;
        
        virtual ~Game();
        
        virtual Game& run(Player &aPlayer1, Player &aPlayer2)=0; //pure virtual
        virtual size_t countAvailablePiece(PieceColor aColor)=0; //avaialbe are the ones that havnet been capture yet
        virtual const Piece* getPlayerPiece(PieceColor aColor, int anIndex)=0;
        virtual bool validLocatoin(const Location &aLocation)=0;
        //what if get location on player, just to right is 2 right and 2 up, if wanna make a move
        //and jump of the board then thats a forfiet
        virtual const Tile* getTileAt(const Location &aLocation)=0;
        
        virtual movePieceTo(const Piece &aPiece, const Location &aLocation)=0;
        
        //give me the first peice gold has left on the board,
        
        static Game* create(); //the only thing the game asks the player, its your turn, turn is over
        
        
        
    }
}

#endif /* Game_hpp */
