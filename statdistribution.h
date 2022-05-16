#pragma once
//#include "creature.h"
#include "dice.h"
#include "multiroll.h"
#include "startingarray.h"
#include <iostream>


template <typename A>
inline A Value0(A a, A b, A c, A d, A e, A f, A g)
{
	return a * (a == b || a == c || a == d || a == e || a == f || a == g);
}

template <typename B>
inline B Value1(B a, B b, B c, B d, B e, B f)
{
	return a * (a == b || a == c || a == d || a == e || a == f);
}

template <typename C>
inline C Value2(C a, C b, C c, C d, C e)
{
	return a * (a == b || a == c || a == d || a == e);
}

int main()
{
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;

	int statValue0 = StartingRolls();
	int statValue1 = StartingRolls();
	int statValue2 = StartingRolls();
	int statValue3 = StartingRolls();
	int statValue4 = StartingRolls();
	int statValue5 = StartingRolls();

	printf("Your rolled stats are: ");
	std::cout << statValue0 << ", ";
	std::cout << statValue1 << ", ";
	std::cout << statValue2 << ", ";
	std::cout << statValue3 << ", ";
	std::cout << statValue4 << ", ";
	std::cout << statValue5 << "." << std::endl;

	std::vector<int> Array = { statValue0, statValue1, statValue2, statValue3, statValue4, statValue5 };

	system("pause");


	printf("Please enter the value you wish to put into your strength: ");
	std::cin >> strength;
	int testValue0 = Value0(strength, Array.at(0), Array.at(1), Array.at(2), Array.at(3), Array.at(4), Array.at(5));

	if (testValue0 == 0)
	{
		printf("You did not enter a valid input!");
	}
	else
	{
		printf("Your strength is a "); std::cout << strength; printf("!");

		if (strength == Array.at(0))
		{
			Array.erase(Array.begin());
		}
		else if (strength == Array.at(1))
		{
			Array.erase(Array.begin() + 1);
		}
		else if (strength == Array.at(2))
		{
			Array.erase(Array.begin() + 2);
		}
		else if (strength == Array.at(3))
		{
			Array.erase(Array.begin() + 3);
		}
		else if (strength == Array.at(4))
		{
			Array.erase(Array.begin() + 4);
		}
		else
		{
			Array.erase(Array.begin() + 5);
		}
	}

	printf("Please enter the value you wish to put into your dexterity:");
	std::cin >> dexterity;

	int testValue1 = Value1(dexterity, Array.at(0), Array.at(1), Array.at(2), Array.at(3), Array.at(4));

	if (testValue1 == 0)
	{
		printf("You did not enter a valid input!");
	}
	else
	{
		printf("Your dexterity is a "); std::cout << dexterity; printf("!");

		if (dexterity == Array.at(0))
		{
			Array.erase(Array.begin());
		}
		else if (dexterity == Array.at(1))
		{
			Array.erase(Array.begin() + 1);
		}
		else if (dexterity == Array.at(2))
		{
			Array.erase(Array.begin() + 2);
		}
		else if (dexterity == Array.at(3))
		{
			Array.erase(Array.begin() + 3);
		}
		else
		{
			Array.erase(Array.begin() + 4);
		}
	}

	printf("Please enter the value you wish to put into your constitution:");
	std::cin >> constitution;

	int testValue2 = Value2(constitution, Array.at(0), Array.at(1), Array.at(2), Array.at(3));

	if (testValue2 == 0)
	{
		printf("You did not enter a valid input!");
	}
	else
	{
		printf("Your constitution is a "); std::cout << constitution; printf("!");

		if (constitution == Array.at(0))
		{
			Array.erase(Array.begin());
		}
		else if (constitution == Array.at(1))
		{
			Array.erase(Array.begin() + 1);
		}
		else if (constitution == Array.at(2))
		{
			Array.erase(Array.begin() + 2);
		}
		else
		{
			Array.erase(Array.begin() + 3);
		}
	}

	printf("Please enter the value you wish to put into your intelligence:");
	std::cin >> intelligence;
	printf("Please enter the value you wish to put into your wisdom:");
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
