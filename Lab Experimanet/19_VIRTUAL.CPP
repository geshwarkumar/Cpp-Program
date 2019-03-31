/*C++ code to implement Virtual function
-GESHWAR KUMAR*/

#include <iostream>

using namespace std;

class Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading weapon features.\n"; }
};

class Bomb : public Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading bomb features.\n"; }
};

class Gun : public Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading gun features.\n"; }
};

int main()
{
    Weapon *w = new Weapon;
    Bomb *b = new Bomb;
    Gun *g = new Gun;

    w->loadfeatures();
    b->loadFeatures();
    g->loadFeatures();

    return 0;
}
