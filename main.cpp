#include <iostream>
#include "Game.h"

int main() {
    // Init Game
    Game game;

    // Game loop
    while (game.isRunning()) {
        // Update
        game.update();

        // Render
        game.render();
    }

    return 0;
}
