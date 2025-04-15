#ifndef PEG_H
#define PEG_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Disk.h"

class Peg : public sf::RectangleShape {

private:
    std::vector<Disk*> disks;  
      
public:
    Peg(float width, float height , float x, float y);

    void addDisk(Disk* disk);
    Disk* removeDisk();
    bool hasDisks() const;
    std::vector<Disk*> getDisks() const;

    void drawWithDisks(sf::RenderWindow& window);


};

#endif
