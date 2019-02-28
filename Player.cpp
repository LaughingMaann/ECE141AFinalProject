//
//  Player.c
//  hw5
//
//  Created by Ester Park on 2/26/19.
//  Copyright © 2019 Ester Park. All rights reserved.
//
#include "Player.hpp"

namespace ECE141 {
    int Player::pCount=0;
    static PieceColor autoColor() { //static member will class to player class
        return (++Player::pCount % 2 ? Piececolor::blue : PieceColor::gold;) ; //will return even or odd, even=blue, odd=gold
    }
    
}
