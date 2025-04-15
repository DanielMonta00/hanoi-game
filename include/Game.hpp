#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <stack>
#include "Disk.h"
#include "Peg.h"

class Game {
    private:
    // std::vector<Disk> disks; 
    std::vector<Peg> pegs; // Vector to hold the pegs

public:
    Game() = default;
    ~Game() = default;
    std::vector<Disk> spawnDisks(int numDisks);
    bool isGameWon(std::vector<Peg*> pegs, int numDisks);
    void setPegs(const std::vector<Peg>& newPegs) {
        pegs = newPegs;
    }
    std::vector<Peg> getPegs() const {
        return pegs;
    }

};

#endif // GAME_HPP