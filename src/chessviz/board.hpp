#pragma once
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int FriendlyFire(int side, int i2, int j2, char pole[][9]);
int AttackArea(int team, int area, int i2, int j2, char pole[][9]);
int MoveCheck(int team, int i1, int i2, int j1, int j2, char pole[][9]);
void Chess_Field(char pole[][9]);
void Move(char pole[][9], int* team);
