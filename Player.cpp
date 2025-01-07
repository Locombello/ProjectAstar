//
// Created by loco on 1/6/25.
//

#include "Player.h"

#include <utility>

Player::Player(std::string  name) : name(std::move(name)) { }

const std::string& Player::getName() const {
    return name;
}

sf::RectangleShape& Player::getSprite() {
    return sprite;
}

sf::Vector2f Player::getPosition() const {
    return sprite.getPosition();
}

void Player::setPosition(const sf::Vector2f &position) {
    sprite.setPosition(position);
}

void Player::init() {
    sprite.setPosition(sf::Vector2f(10.0f, 10.0f));
    sprite.setSize(sf::Vector2f(100.0f, 100.0f));
    sprite.setScale(sf::Vector2f(0.5f, 0.5f));
    sprite.setFillColor(sf::Color::Blue);
    sprite.setOutlineColor(sf::Color::Cyan);
    sprite.setOutlineThickness(5.0f);
}
