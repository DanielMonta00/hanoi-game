#ifndef DISK_H
#define DISK_H

#include <SFML/Graphics.hpp>

class Disk : public sf::RectangleShape {
public:
    Disk(float width, float height, sf::Color color, float x, float y)
        : sf::RectangleShape(sf::Vector2f(width, height)), size(width) {
        setFillColor(color);
        setPosition(x, y);
    }

    float getSize() const {
        return size;
    }

private:
    float size;
};

#endif


