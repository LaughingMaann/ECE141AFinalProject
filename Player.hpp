//
//  Player.c
//  hw5
//
//  Created by Ester Park on 2/26/19.
//  Copyright © 2019 Ester Park. All rights reserved.
#ifndef Player_hpp
#define Player_hpp

#include <"Piece.hpp">
#include<std.io>
namepsace ECE141{
    
    class Game;
    
    class Player{
    public:
        Player();
    protected:
        const PieceColor color; //so user cannot change whether hes gold or blue
        // virtual takeTurn(Game &aGame)=0; //make pure virtual if you want but not so dontset equal 0
        virtual bool takeTurn(Game &aGame); //if take too long, or wanna forfiet, return false
        static int pcount; //dong want u to constantly think about what player
    };
}



