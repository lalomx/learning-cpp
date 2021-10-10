#include <iostream>

#include "Log.h"
#include "Player.h";

void Cadenas()
{
    int a = 8;
    Log l;


    const char* string = "Esto es una cadena";

    for (int i = 0; i < 5; i++)
    {
        const char c = string[i];
        std::cout << c << std::endl;
    }

    int* ptr = &a;
    *ptr = 10;

    int& aref = a;

    aref = 2;

    l.Error(string);
}

void Arrays()
{   
    Player p1("Lalo");
    p1.SetAge(39);
    Player p2("Cherno");
    Player p3("Goodzila");
    Player p4("Johan");
    Player p5("Kyle");

    Player players[5];
    players[0] = p1;
    players[0].PrintAge();
}

void Const() {
    const int MAX_AGE = 90;

    const int* a = new int;
    // *a = 2;
    // cannot reassign the pointer data

    // can reassign pointer itself
    a = (int*)&MAX_AGE;

    int* const b = new int;

    // can reassign pointer data
    *b = 2;

    // cannot reassign pointer itself
    // b = (int*)&MAX_AGE;

    // cannot reassign anything
    const int* const c = new int;

    std::cout << *a << std::endl;
    std::cout << *b << std::endl;
}


void Mutable() {
    Player lalo("Lalo");

    const std::string name =lalo.GetName();

    std::cout << name << std::endl;

    int x = 10;
    auto f = [=]() mutable
    {
        x++;
        std::cout << x << std::endl;
    };

    f();
}

void Constructors()
{
    Player lalo("Lalo");
    std::cout << lalo.GetName() << std::endl;

    Player nose;
    std::cout << nose.GetName() << std::endl;
}

void Classes()
{
    Player* p;
    Player l; // stack
    {
        p = new Player("Lalo"); // heap
    }

    std::cout << p->GetName() << std::endl;

    delete p; // delete from the heap

    // stack is freed after the function completes
}

int main()
{
    Classes();
    std::cin.get();
};