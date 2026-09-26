#include "../include/animals/wolf.h"

// #include <iostream>

int main() {
    Wolf wolf("Alpha", 3);

    wolf.PrintStatus();
    wolf.Move(2, 1);
    wolf.GrowOlder();
    wolf.Eat(8);
    wolf.PrintStatus();
    return 0;
}
