//
// Created by Даниил Куличков on 18.03.2023.
//

#include <Game/game.h>

namespace Engine {
    Game::Game() {
        _isRunning = true;
    }

    void Game::Input() {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_KEYDOWN:
                    if (event.key.keysym.sym == SDLK_SPACE) {
                    }
                    break;
                case SDL_QUIT:
                    _isRunning = false;
                    break;
            }
        }
    }

    void Game::Update() {

    }

    void Game::Render() {

    }

    void Game::OpenWindow() {
        SDL_Init(SDL_INIT_VIDEO);
        SDL_Window *window = SDL_CreateWindow("My Window", 0, 0, 800, 600, 0);
        SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

        while (_isRunning) {
            Input();
            Update();
            Render();
        }

        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
    }
} // Engine