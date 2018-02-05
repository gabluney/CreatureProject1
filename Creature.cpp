#include "Creature.h"


Creature::Creature()
{
    health = 100;
    strength = 10;
    name = "Bill";
    x = 0;
    y = 0;
    level = 1;
}

Creature::~Creature()
{
    //dtor
}
// Get & Set Methods
double Creature::getHealth() const {
    return health;
}

int Creature::getX() const {
    return x;
}
int Creature::getY() const {
    return y;
}
int Creature::getStrength() const{
    return strength;
}
string Creature::getName() const {
    return name;
}
int Creature::getLevel() const{
    return level;
}
void Creature::setLevel(int cLevel){
level = cLevel;
}
void Creature::setX(int cX) {
    x = cX;
}
void Creature::setY(int cY) {
    y = cY;
}
void Creature::setHealth(double cHealth) {
    health = cHealth;
}
void Creature::setStrength(int cStrength){
    strength = cStrength;
}
void Creature::setName(string cName){
    name = cName;

}
void Creature::attack(int damage){
health = health - damage;
}

void Creature::evade(int newx){
x = newx;
}
void Creature::respawn(){
    health = 100;
    strength = 10;
    x = 0;
    y = 0;

}
void Creature::printStats(){
    cout << "\nThe creature's name is " << name << endl;
    cout << "The creature's health is " << health << endl;
    cout << "The creature's strength is " << strength << endl;
    cout << "The creature's X position is " << x << endl;
    cout << "The creature's Y position is " << y << endl;

}
