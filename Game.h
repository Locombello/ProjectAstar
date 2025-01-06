//
// Created by loco on 1/6/25.
//

#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game {
    // Variables
    sf::RenderWindow* window{};
    sf::VideoMode videoMode;
    sf::Event event{};

    // Private functions
    void initVariables();
    void initWindow();

public:
    // Constructors & Destructors
    Game();
    virtual ~Game();

    // Utils
    bool isRunning() const;

    // Functions
    void pollEvents();
    void update();
    void render() const;
};



#endif //GAME_H
