#ifndef PLAYER_H
#define PLAYER_H

// Header guards prevent multiple inclusion of the same header file
// If PLAYER_H is not defined, define it and continue with the contents of the file

class Player {
public:
    // Constructor for the Player class
    Player(int hp);

    // Member function to get the player's HP
    int getHp();

    // Member function to simulate the player taking damage
    void takeDamage(int amount);

private:
    int pHp; // Private member variable to store the player's HP
};

#endif
