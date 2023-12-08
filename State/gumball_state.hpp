#pragma once

class GumballState 
{
public:
    virtual void insert_coin() = 0;
    virtual void turn_handle() = 0;
    virtual void remove_gum() = 0;
};

class NoCoinState : public GumballState
{
    void insert_coin();
    void turn_handle();
    virtual void remove_gum() = 0;

};