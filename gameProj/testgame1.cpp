#include <iostream>
#include <c:/mingw_dev_lib/SDL2/include/SDL2/SDL.h>

int main(int argc, char *argv[])
{   
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        std::cout << "sdl didn't work" << std::endl;
    } 
    else 
    {
        std::cout << "finally worked" << std::endl;
    }

    return 0;
}