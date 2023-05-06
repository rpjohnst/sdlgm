#include <SDL.h>
#include <cstdio>

int main(int argc, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Quit();
}
