#include <cstdlib>
#include <iostream>
#include <string>
#include "Creature.h"


using namespace std;


int main()
{
    int sizearray = 10;
    Creature *array = new Creature [sizearray];

    // Initialize each creature
    array[0].setName("Sarge");
    array[0].setLevel(1);
    array[0].setX(10);
    array[0].setY(6);
    array[0].setStrength(10);
    array[0].setHealth(100);


    array[1].setName("Grif");
    array[1].setLevel(3);
    array[1].setX(0);
    array[1].setY(7);
    array[1].setStrength(30);
    array[1].setHealth(100);

    array[2].setName("Simmons");
    array[2].setLevel(2);
    array[2].setX(20);
    array[2].setY(11);
    array[2].setStrength(20);
    array[2].setHealth(100);

    array[3].setName("Donut");
    array[3].setLevel(1);
    array[3].setX(0);
    array[3].setY(12);
    array[3].setStrength(10);
    array[3].setHealth(100);

    array[4].setName("Lopez");
    array[4].setLevel(7);
    array[4].setX(30);
    array[4].setY(15);
    array[4].setStrength(70);
    array[4].setHealth(100);

    array[5].setName("Sue");
    array[5].setLevel(6);
    array[5].setX(80);
    array[5].setY(35);
    array[5].setStrength(60);
    array[5].setHealth(100);

    array[6].setName("Turf");
    array[6].setLevel(9);
    array[6].setX(75);
    array[6].setY(39);
    array[6].setStrength(90);
    array[6].setHealth(100);

    array[7].setName("Drag");
    array[7].setLevel(4);
    array[7].setX(58);
    array[7].setY(95);
    array[7].setStrength(40);
    array[7].setHealth(100);

    array[8].setName("Santos");
    array[8].setLevel(10);
    array[8].setX(86);
    array[8].setY(12);
    array[8].setStrength(100);
    array[8].setHealth(100);

    array[9].setName("Morgan");
    array[9].setLevel(6);
    array[9].setX(94);
    array[9].setY(38);
    array[9].setStrength(60);
    array[9].setHealth(100);

    //print array
    for ( int i = 0; i < sizearray; i++ )
        array[i].printStats();
    cout << endl;
    return 0;
}
