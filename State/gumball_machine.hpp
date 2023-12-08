#pragma once

#include "gumball_state.hpp"

class GumballMachine 
{
public:
    void insert_coin();
    void turn_handle();
    void remove_gum();
private:
    GumballState* state_;
};