#pragma once
#include "dice.h"
#include "creature.h"

#include <vector>
#include <iostream>


int MultiDiceRoll(int max, int dicecount)
{
	int result = 0;
	
	for (int i = 0; i < dicecount; i++)
	{
		result += Dice(max);
	}

	return result;
}