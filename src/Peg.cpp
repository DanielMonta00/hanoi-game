#include "Peg.h"

Peg::Peg(float width, float height, float x, float y)
    : sf::RectangleShape(sf::Vector2f(width, height)) {
    setFillColor(sf::Color::White);
    setPosition(x, y);
}

void Peg::addDisk(Disk* disk) {
    disks.push_back(disk);
}

Disk* Peg::removeDisk() {
    if (disks.empty()) return nullptr;
    Disk* top = disks.back();
    disks.pop_back();
    return top;
}

bool Peg::hasDisks() const {
    return !disks.empty();
}

std::vector<Disk*> Peg::getDisks() const {
    return disks;
}

void Peg::drawWithDisks(sf::RenderWindow& window) {
    window.draw(*this);
    for (auto& disk : disks) {
        window.draw(*disk);
    }
}
