#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <stack>
#include "Disk.h"

class Game {
    private:
    std::vector<Disk> disks;

public:
    std::vector<Disk> spawnDisks(int numDisks);
    bool isGameWon() const;


};

#endif // GAME_HPP