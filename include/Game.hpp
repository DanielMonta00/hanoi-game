#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <stack>
#include "Disk.h"
#include "Peg.h"

class Game {
    private:
    std::vector<Disk> disks; 
    std::vector<Peg> pegs; // Vector to hold the pegs

public:
    Game() = default;
    ~Game() = default;
    std::vector<Disk> spawnDisks(int numDisks);
    bool isGameWon() const;


};

#endif // GAME_HPP