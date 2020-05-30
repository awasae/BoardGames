#include "Gomoku.h"
#include "GameBase.h"
#include <array>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

// Initializing the empty Gomoku Board Board

Gomoku::Gomoku() : GameBase::GameBase(20,20){
	
}
//constructor for custom board
Gomoku::Gomoku(int x, int y) : GameBase::GameBase(x,y) {

}
//consturctor for custom board and custom win point
Gomoku::Gomoku(int x, int y,int z) : GameBase::GameBase(x, y ,z) {

}



