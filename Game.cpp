//
// Created by loco on 1/6/25.
//

#include "Game.h"


void Game::initSettings() {
    window = nullptr;
}

void Game::initWindow() {
    videoMode.width = 1920;
    videoMode.height = 1080;
    window = new sf::RenderWindow(videoMode, "ProjectAstar", sf::Style::Titlebar | sf::Style::Close);
    window->setPosition(sf::Vector2i(1920, 0));
    window->setFramerateLimit(144);
}

void Game::initEntities() const {
    player->init();
}

Player* Game::createPlayer() {
    return new Player("Loco");
}

// Constructors & Destructors
Game::Game() : player(createPlayer()) {
    initSettings();
    initWindow();
    initEntities();
}

Game::~Game() {
    delete window;
    delete player;
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
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape) {
                    window->close();
                }
                break;
            default: ;
        }
    }
}

void Game::update() {
    pollEvents();

    sf::Vector2f previousPosition = player->getPosition();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        player->setPosition(previousPosition + sf::Vector2f(0.0f, -1.0f));

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        player->setPosition(previousPosition + sf::Vector2f(-1.0f, 0.0f));

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        player->setPosition(previousPosition + sf::Vector2f(0.0f, 1.0f));

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        player->setPosition(previousPosition + sf::Vector2f(1.0f, 0.0f));
}

void Game::render() const {
    window->clear();
    window->draw(player->getSprite());
    window->display();
}
