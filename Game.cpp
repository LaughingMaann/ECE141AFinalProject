//
//  Game.cpp
//  hw5
//
//  Created by Ester Park on 2/26/19.
//  Copyright © 2019 Ester Park. All rights reserved.
//

#include "Game.hpp"

namespace ECE141 {
    class RicksGame : public Game {
    public:
        virtual ~RicksGame;
        
        RickgsGame() {
            initializeTiles();
            initializePieces();
        }
        
        bool gameIsRunning() {
            //return t/f whether soeone won or forfieted..
            return true;
        }
        
        Game& run(Player &aPlayer1, Player &aPlayer2) {
            activePlayer=&aPlayer1;
            //if game is running, tell player to make decision
            while(gamIsRunning() ) {
                activePlayer->takeTurn(*this);
                activePlayer=(activePlayer==&aPlayer1) ? activePlayer=&aPlayer2 :
                activePlayer=&aPlayer1;
                
            }
        }
        
        size_t countAvailablePieces(PieceColor aColor) {}
   
        const Piece* getPlayerPiece(PieceColor aColor, int anIndex) {
            
        }
        bool validLocatoin(const Location &aLocation) {
            //ensure location.row and col are within bounds
        }
        //what if get location on player, just to right is 2 right and 2 up, if wanna make a move
        //and jump of the board then thats a forfiet
        const Tile* getTileAt(const Location &aLocation) {
            if(validLocation(aLocation)) {
                reutrn &tiles[aLocation.row][aLocation.col];
            }
            return nullptr;
        }
        
        movePieceTo(const Piece &aPiece, const Location &aLocation) {
            if(validLocation(aLocation)){
                
            }
            //activePlayer forfiets bc of a bad move;;;
            //if you got to the kind row, have to make him king
            //if jump
        };
        
        std::vector<Piece*> goldPieces;
        std::vector<Piece*> bluePieces;
        std::vector<Tiles> tiles[kBoardHeight];
        
        Player *activePlayer;
        
    };
    
    Game* Game::create() {
        return new RicksGame();
    }
}
