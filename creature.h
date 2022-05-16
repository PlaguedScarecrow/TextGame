#pragma once

#include <iostream>


class creature
{
public: 
	// A lot of these might be irrelevent
	std::string name = "";
	std::string classFeature = ""; // Player only
	std::string spellName = "";
	std::string featoptional = "";
	std::string mainAction = "";
	std::string bonusAction = "";
	std::string reactionAction = "";
	std::string proficiencies = "";
	std::string knownLanguages = "";
	std::string senses = "";
	int dicecount;
	int strMod = (strength - 10) / 2;
	int dexMod = (dexterity - 10) / 2;
	int conMod = (constitution - 10) / 2;
	int intMod = (intelligence - 10) / 2;
	int wisMod = (wisdom - 10) / 2;
	int chaMod = (charisma - 10) / 2;
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;
	int strengthSavingThrow;
	int dexteritySavingThrow;
	int constitutionSavingThrow;
	int intelligenceSavingThrow;
	int wisdomSavingThrow;
	int charismaSavingThrow;
	int armorClass;
	int hitDice;
	int hitPoints;
	int defenses;
	int temporaryHitPoints;
	int proficiencyBonus;
	int walkingSpeed;
	int swimmingSpeed;
	int climbingSpeed;
	int burrowSpeed;
	int flyingSpeed;
};