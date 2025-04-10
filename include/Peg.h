#ifndef PEG_H
#define PEG_H

#include <SFML/Graphics.hpp>

class Peg {
public:
    Peg(float x, float y);  // Constructor to set the position
    // Constructor to set the size and position of the peg
    Peg(float width, float height, float x, float y);  // Uncomment if you want to set size

    void draw(sf::RenderWindow& window);  // Method to draw the peg on the window

private:
    sf::RectangleShape shape;  // Rectangle representing the peg
};

#endif // PEG_H
