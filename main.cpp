// main.cpp
#include <iostream>
#include "Player.h" // Include the Player header file

using namespace std;

int main() {
    // Create a Player instance with initial HP of 100
    Player player(100);

    // Reduce the player's HP by 50 using the takeDamage method
    player.takeDamage(50);

    // Print the player's remaining HP using the getHp method
    cout << "Player hp: " << player.getHp();

    return 0; // Indicate successful program termination
}


/*To get the code to work you have to type "g++ main.cpp Player.cpp -o main
./main" in the terminal*/

