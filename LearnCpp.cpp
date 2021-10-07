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

int main()
{
    Arrays();
    std::cin.get();
};