#include "../include/includes.h"

int main(int argc, char* argv[])
{
    if (SDL_Init(SDL_INIT_EVERYTHING)) {
        return -1;
    }

    SDL_Window* window = SDL_CreateWindow(
        "Hello",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        600,
        400,
        SDL_WINDOW_SHOWN
    );

    if (!window) { SDL_Quit(); return -1; }

    SDL_Renderer* renderer = SDL_CreateRenderer(
        window,
        -1,
        0
    );

    if (!renderer) { SDL_DestroyWindow(window); SDL_Quit(); return -1; }

    bool running = true;

    SDL_Event e;

    while (running) {
       while (SDL_PollEvent(&e)) {
        switch (e.type)
        {
        case SDL_QUIT:
            running = false;
        }
       }

        SDL_SetRenderDrawColor(renderer, 120, 180, 255, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);

    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    return 0;
}