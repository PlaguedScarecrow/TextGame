#pragma once

//#include "creature.h"
#include "dice.h"
#include "multirolls.h"

#include <stdlib.h>
#include <iostream>


int StartingAttributes()
{
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;
	
	printf("Welcome to Azrael's Dungeons and Dragons Text Game. Currently, your first step will be to assign numbers to your "); 
	printf("attributes in order to determine your strengths and weaknesses. Plese press enter to begin rolling for your attributes.");
	

	printf("Please enter the amount of points you wish to put into your strength:");
	std::cin >> strength;
	printf("Please enter the amount of points you wish to put into your dexterity:");
	std::cin >> dexterity;
	printf("Please enter the amount of points you wish to put into your constitution:");
	std::cin >> constitution;
	printf("Please enter the amount of points you wish to put into your intelligence:");
	std::cin >> intelligence;
	printf("Please enter the amount of points you wish to put into your wisdom:");
	std::cin >> wisdom;
	printf("Please enter the amount of points you wish to put into your charisma:");
	std::cin >> charisma;

	int strMod = (strength - 10) / 2;
	int dexMod = (dexterity - 10) / 2;
	int conMod = (constitution - 10) / 2;
	int intMod = (intelligence - 10) / 2;
	int wisMod = (wisdom - 10) / 2;
	int chaMod = (charisma - 10) / 2;

	printf("|Attribute Name |  Value  |  Mod  |\n");
	printf("|Strength       |    "); std::cout << strength; printf("    |   "); std::cout << strMod; printf("  |\n");
	printf("|Dexterity      |    "); std::cout << dexterity; printf("    |   "); std::cout << dexMod; printf("  |\n");
	printf("|Constitution   |    "); std::cout << constitution; printf("    |   "); std::cout << conMod; printf("  |\n");
	printf("|Intelligence   |    "); std::cout << intelligence; printf("    |   "); std::cout << intMod; printf("  |\n");
	printf("|Wisdom         |    "); std::cout << wisdom; printf("    |   "); std::cout << wisMod; printf("  |\n");
	printf("|Charisma       |    "); std::cout << charisma; printf("    |   "); std::cout << chaMod; printf("  |\n");

	return 0;
}