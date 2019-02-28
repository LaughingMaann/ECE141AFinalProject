//
//  Peice.h
//  hw5
//
//  Created by Ester Park on 2/26/19.
//  Copyright © 2019 Ester Park. All rights reserved.
//

#ifndef Peice_hpp
#define Peice_hpp

namespace ECE141{
    
    enum class PieceColor {gold, blue};
    enum class PieceKind {pawn, king};
    enum class TileColor {light, dark};
    
    class Piece;
    //by default everyting in struct is public
    //we use struct here instead of class, if you make class need make public private
    struct Location{
        //ned ctor
        // initializer list, anything after colon, ill initialize the internal properites of the class
        Location(int aCol, int aRow : col(aCol), row(aRow))
        //something that starts with aSomething that means its an argument
        //theInt means its local to the block
        //need copy ctor
        Location(const Location &aCopy) : row(aCopy.row), col(aCopy.col) {}
        int row;
        int col;
        
    };
    
    //need to make grid identitification to classify all the tiles
    struct Tile{
        //need ctor, you see color, need to make a tile class
        Tile(TileColor aColor, const Location &aLocation, Piece *aPiece=nullptr) :
        color(aColor), location(aLocation), piece(aPiece) {}
        //ctor
        Tile(const Tile &aCopy): color(aCopy.color), location(aCopy.locatoin),
        piece(aCopy.piece) {
            int theInt=10;
        }
        
        TileColor color; //color, those without prefix is a data memeber
        Location locatoin; //why using struct isntead of classes?
        Piece *piece; //PEICE IS THE ONLY THING THAT CHANGES, which is why the tile and location dont
        //const typecast,
    };
    
    //peices have a class and kind
    class Piece{
    public:
        Piece(PieceColor aColor, const Location &aLocation, PieceKind aKind):
        color(aColor), Location(aLocation), kind(aKind) {}
        
        
        Piece(const Piece &aCopy) {}
        Piecekind           kind;
        const PieceColor    color;
        Location location; //notion of location is going to be constantly used
        //dont have player and game obj
        
    };
    
#endif
