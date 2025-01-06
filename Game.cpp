//
// Created by loco on 1/6/25.
//

#include "Game.h"

void Game::initVariables() {
    window = nullptr;
}

void Game::initWindow() {
    videoMode.width = 1920;
    videoMode.height = 1080;
    window = new sf::RenderWindow(videoMode, "ProjectAstar", sf::Style::Titlebar | sf::Style::Close);
    window->setPosition(sf::Vector2i(1920, 0));
}

// Constructors & Destructors
Game::Game() {
    initVariables();
    initWindow();
}

Game::~Game() {
    delete window;
}

// Utils
bool Game::isRunning() const {
    return window->isOpen();
}

// Functions
void Game::pollEvents() {
    // Event polling
    while (window->pollEvent(event)) {
        switch (event.type) {
            case sf::Event::Closed:
                window->close();
            break;
            default: ;
        }
    }
}

void Game::update() {
    pollEvents();
}

void Game::render() const {
    window->clear();
    // Draw
    window->display();
}
