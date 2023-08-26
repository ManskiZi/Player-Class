#include "Player.h"

// Constructor for the Player class
Player::Player(int hp) {
    pHp = hp; // Initialize the player's HP with the provided value
}

// Member function to get the player's HP
int Player::getHp() {
    return pHp; // Return the player's current HP
}

// Member function to simulate the player taking damage
void Player::takeDamage(int amount) {
    pHp -= amount; // Subtract the given amount from the player's HP

    if (pHp < 0) {
        pHp = 0; // Ensure that the player's HP doesn't go below zero
    }
}
