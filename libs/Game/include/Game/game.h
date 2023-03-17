//
// Created by Даниил Куличков on 18.03.2023.
//

#ifndef GAME_ENGINE_GAME_H
#define GAME_ENGINE_GAME_H


#include <SDL2/SDL.h>

namespace Engine {

    class Game {
    public:
        Game();

        void Input();

        void Update();

        void Render();

        void OpenWindow();

    private:
        bool _isRunning;
    };

} // Engine

#endif //GAME_ENGINE_GAME_H
