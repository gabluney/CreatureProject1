#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
using namespace std;
class Creature
{
    public:
        Creature();
        Creature(double chealth, int cstregnth, string cname, int cx, int cy);
        virtual ~Creature();
        double getHealth() const;
        int getLevel()const;
        int getX()const;
        int getY()const;
        string getName() const;
        int getStrength() const;
        void setX(int cX);
        void setY(int cY);
        void setName(string cName);
        void setStrength(int cstrength);
        void setHealth(double cHealth);
        void setLevel(int clevel);
        void printStats();
        void attack(int damage);
        void respawn();
        void evade(int newx);
    protected:

    private:
        double health;
        int x;
        int y;
        string name;
        int strength;
        int level;
};

#endif // CREATURE_H
