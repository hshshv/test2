#pragma once

enum operation
{
    plus, minus, cafol, kelkei, power
};

class member
{
public:
    member(int a_, int n_);
    member(member* a, member* b, operation op);
    member * gzr();
    void print();

private:    
    member* CompA;
    member* CompB;
    int a;
    int n;
    bool isSimple;
    operation oper;
};