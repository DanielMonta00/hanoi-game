#include <vector>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"

const float PEG_WIDTH = 20.0f;  // Width of the peg
const float PEG_HEIGHT = 200.0f;  // Height of the peg
const float PEG_DISTANCE = 250.0f;  // Distance between pegs

const float DISK_MIN_WIDTH = 80.0f;  // Width of the disks
const float DISK_WIDTH_DIFF = 20.0f;  // Difference in width between disks
const float DISK_HEIGHT = 20.0f;  // Height of the disks

const float PEG1_X = 150.0f;  // X position of peg 1
const float PEG2_X = PEG1_X+PEG_DISTANCE;  // X position of peg 2
const float PEG3_X = PEG1_X+2*PEG_DISTANCE;  // X position of peg 3

const float PEG_Y = 300.0f;  // Y position of peg 1

const float NUM_DISKS = 3;  // Number of disks

std::vector<Disk> Game::spawnDisks(int numDisks) {
    std::vector<Disk> disks;
    for (int i = 0; i < numDisks; ++i) {
        float width = DISK_MIN_WIDTH + i * DISK_WIDTH_DIFF;
        float height = DISK_HEIGHT;
        sf::Color color = sf::Color(255 - i * 50, 0 + i * 50, 0); // Example color gradient
        disks.emplace_back(width, height, color, PEG1_X - width / 2 + PEG_WIDTH / 2, PEG_Y + PEG_HEIGHT - (i + 1) * DISK_HEIGHT);
    }
    return disks;
}

bool Game::isGameWon() const {
    // Check if all disks are on the last peg
    return disks.size() == NUM_DISKS && disks.back().getCurrentPeg() == 2;
}




