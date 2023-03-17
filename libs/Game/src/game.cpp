//
// Created by Даниил Куличков on 18.03.2023.
//

#include <Game/game.h>

namespace Engine {
    Game::Game() {
        _running = true;

        _window = nullptr;
        _renderer = nullptr;
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
                    _running = false;
                    break;
            }
        }
    }

    void Game::Update() {

    }

    void Game::Render() {
        SDL_UpdateWindowSurface(_window);
    }

    void Game::OpenWindow() {
        SDL_Init(SDL_INIT_VIDEO);
        _window = SDL_CreateWindow("My Window", 0, 0, 800, 600, 0);
        _renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

        while (_running) {
            Input();
            Update();
            Render();
        }

        SDL_DestroyRenderer(_renderer);
        SDL_DestroyWindow(_window);
    }
} // Engine