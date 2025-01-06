//
// Created by loco on 1/6/25.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <SFML/Graphics/RectangleShape.hpp>


class Player {
    std::string name;
    sf::RectangleShape sprite;

public:
    explicit Player(std::string  name);
    virtual ~Player() = default;

    const std::string& getName() const;
    sf::RectangleShape& getSprite();

    void init();
};



#endif //PLAYER_H