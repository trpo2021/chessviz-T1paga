#ifndef BOARD_HPP
#define BOARD_HPP
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int FriendlyFire(int side, int i2, int j2, char pole[][9]);
int AttackArea(int team, int area, int i2, int j2, char pole[][9]);
int MoveCheck(int team, int i1, int i2, int j1, int j2, char pole[][9]);
void ChessField(char pole[][9]);  
void Move(char pole[][9], int* team);
#endif
