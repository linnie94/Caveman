#include "Ghost.h"
#include "Util.h"

void Ghost_Draw(int s1, const uint8_t* key, SDL_Rect* from_g, SDL_Rect* to_g)
{
    if(key[SDL_SCANCODE_D])
    {
        if(s1 % 3 == 1)
        {
            from_g->x = 96;
            from_g->y = 96;
        }
        else if(s1 % 3 == 2)
        {
            from_g->x = 112;
            from_g->y = 96;
        }
        else if(s1 % 3 == 3)
        {
            from_g->x = 128;
            from_g->y = 96;
        }
        to_g->x += 1;
        from_g->y = 96;
    }
    else if(from_g->y == 96)
    {
        if(s1 % 3 == 1)
        {
            from_g->x = 96;
            from_g->y = 96;
        }
        else if(s1 % 3 == 2)
        {
            from_g->x = 112;
            from_g->y = 96;
        }
        else if(s1 % 3 == 3)
        {
            from_g->x = 128;
            from_g->y = 96;
        }
    }
    if(key[SDL_SCANCODE_A])
    {
        if(s1 % 3 == 1)
        {
            from_g->x = 96;
            from_g->y = 80;
        }
        else if(s1 % 3 == 2)
        {
            from_g->x = 112;
            from_g->y = 80;
        }
        else if(s1 % 3 == 3)
        {
            from_g->x = 128;
            from_g->y = 80;
        }
        to_g->x -= 1;
        from_g->y = 80;
    }
    else if(from_g->y == 80)
    {
        if(s1 % 3 == 1)
        {
            from_g->x = 96;
            from_g->y = 80;
        }
        else if(s1 % 3 == 2)
        {
            from_g->x = 112;
            from_g->y = 80;
        }
        else if(s1 % 3 == 3)
        {
            from_g->x = 128;
            from_g->y = 80;
        }
    }
    if(key[SDL_SCANCODE_W])
    {
        if(s1 % 3 == 1)
        {
            from_g->x = 96;
            from_g->y = 112;
        }
        else if(s1 % 3 == 2)
        {
            from_g->x = 112;
            from_g->y = 112;
        }
        else if(s1 % 3 == 3)
        {
            from_g->x = 128;
            from_g->y = 112;
        }
        to_g->y -= 1;
        from_g->y = 112;
    }
    else if(from_g->y == 112)
    {
        if(s1 % 3 == 1)
        {
            from_g->x = 96;
            from_g->y = 112;
        }
        else if(s1 % 3 == 2)
        {
            from_g->x = 112;
            from_g->y = 112;
        }
        else if(s1 % 3 == 3)
        {
            from_g->x = 128;
            from_g->y = 112;
        }
    }
    if(key[SDL_SCANCODE_S])
    {
        if(s1 % 3 == 1)
        {
            from_g->x = 96;
            from_g->y = 64;
        }
        else if(s1 % 3 == 2)
        {
            from_g->x = 112;
            from_g->y = 64;
        }
        else if(s1 % 3 == 3)
        {
            from_g->x = 128;
            from_g->y = 64;
        }
        to_g->y += 1;
        from_g->y = 64;
    }
    else if(from_g->y == 64)
    {
        if(s1 % 3 == 1)
        {
            from_g->x = 96;
            from_g->y = 64;
        }
        else if(s1 % 3 == 2)
        {
            from_g->x = 112;
            from_g->y = 64;
        }
        else if(s1 % 3 == 3)
        {
            from_g->x = 128;
            from_g->y = 64;
        }
    }
}

