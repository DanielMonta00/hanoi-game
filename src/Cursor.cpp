#include "Cursor.h"
#include <iostream>

Cursor::Cursor(float x, float y, float pegDistance)
    : pegDistance(pegDistance), currentPeg(0), pickedDisk(nullptr), xPosition(x), yPosition(y) {
    setPointCount(3);
    setPoint(0, sf::Vector2f(0, 10));    // Bottom
    setPoint(1, sf::Vector2f(-10, -10)); // Top left
    setPoint(2, sf::Vector2f(10, -10));  // Top right
    setFillColor(sf::Color::Yellow);
    setPosition(x, y);
}

void Cursor::moveLeft() {
    if (currentPeg > 0) {
        currentPeg--;
        xPosition -= pegDistance;
        setPosition(xPosition, yPosition);
    }
    else {
        // If the cursor is at the leftmost peg, For example, you could wrap around to the rightmost peg
        if (currentPeg == 0) {
            currentPeg = 2;  // Wrap around to the last peg
            xPosition = 650.0f+10.0f;  // Reset x position to the last peg's position
            setPosition(xPosition, yPosition);  // Update the cursor's graphical position
        }
        }
}

void Cursor::moveRight() {
    if (currentPeg < 2) {
        currentPeg++;
        xPosition += pegDistance;
        setPosition(xPosition, yPosition);
    }
    else {
        // If the cursor is at the rightmost peg, For example, you could wrap around to the rightmost peg
        if (currentPeg == 2) {
            currentPeg = 0;  // Wrap around to the last peg
            xPosition = 150.0f+10.0f;  // Reset x position to the last peg's position
            setPosition(xPosition, yPosition);  // Update the cursor's graphical position
        }
        }
}

void Cursor::pickUpDisk(Peg& peg) {
    if (!pickedDisk && peg.hasDisks()) {
        pickedDisk = peg.removeDisk();
        std::cout << "Picked up a disk.\n";
    }
}

void Cursor::placeDisk(Peg& peg) {
    if (pickedDisk) {
        if (!peg.hasDisks() || pickedDisk->getSize() < peg.getDisks().back()->getSize()) {
            peg.addDisk(pickedDisk);
            pickedDisk = nullptr;
            std::cout << "Placed a disk.\n";
        } else {
            std::cout << "Can't place here (disk too large).\n";
        }
    }

    
}

// Note: The pegDistance variable is used to determine the distance between pegs.
// int Cursor::getCurrentPeg() const {
//     return currentPeg;
// }
// void Cursor::setCurrentPeg(int peg) {
//     currentPeg = peg;
// }

