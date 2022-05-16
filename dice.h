#pragma once

#include <string>
#include <random>

int Dice(int range)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, range);

    return distr(gen);
}