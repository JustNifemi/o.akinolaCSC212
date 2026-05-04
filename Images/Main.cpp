#include <SDL3/SDL.h> // SDL core: window, renderer, events 
//#include <SDL3/SDL_main.h> // Fixes 'main'entry point for all p
#include <SDL3_image/SDL_image.h>
#include <iostream>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("Images", 800, 600, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);

    SDL_Surface* surface = IMG_Load("C:/Users/USER/Pictures/Wallpaper/Free Christian Wallpaper Downloads.jpg");
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_DestroySurface(surface);

    SDL_FRect imgrect = {300, 0, 200, 200};
    SDL_RenderTexture(renderer, texture, NULL, &imgrect);


    SDL_Surface* surface1 = IMG_Load("C:/Users/USER/Pictures/Wallpaper/Free Christian Wallpaper Downloads.jpg");
    SDL_Texture* texture1 = SDL_CreateTextureFromSurface(renderer, surface1);
    SDL_DestroySurface(surface1);

    SDL_FRect imgrect1 = {300, 400, 200, 200};
    SDL_RenderTexture(renderer, texture, NULL, &imgrect1);


    SDL_Surface* surface2 = IMG_Load("C:/Users/USER/Pictures/Wallpaper/Free Christian Wallpaper Downloads.jpg");
    SDL_Texture* texture2 = SDL_CreateTextureFromSurface(renderer, surface2);
    SDL_DestroySurface(surface2);

    SDL_FRect imgrect2 = {100, 200, 200, 200};
    SDL_RenderTexture(renderer, texture, NULL, &imgrect2);


    SDL_Surface* surface3 = IMG_Load("C:/Users/USER/Pictures/Wallpaper/Free Christian Wallpaper Downloads.jpg");
    SDL_Texture* texture3 = SDL_CreateTextureFromSurface(renderer, surface3);
    SDL_DestroySurface(surface3);

    SDL_FRect imgrect3 = {500, 200, 200, 200};
    SDL_RenderTexture(renderer, texture, NULL, &imgrect3);
    
    SDL_RenderPresent(renderer);


    SDL_Event event;
    bool running = true;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT)
                running = false;
            if (event.type == SDL_EVENT_KEY_DOWN && event.key.key == SDLK_ESCAPE)
                running = false;
        }
       
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
