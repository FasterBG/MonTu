#ifndef DEFINES_H
#define DEFINES_H

#include <SDL2/SDL.h>
#include <cmath>

enum OWNER
{
    NONE = 0,
    PLAYER1 = 1,
    PLAYER2 = 2
};

enum MENU_STATE
{
    NOSCENE = 0,
    MENU = 1,
    PICK_BAN = 2,
    GAME = 3,
    STATS = 4
};

struct coordinates
{
    int x;
    int y;

    void operator=(const SDL_Rect& rect)
    {
        x = rect.x;
        y = rect.y;
    }
};
#endif // DEFINES_H