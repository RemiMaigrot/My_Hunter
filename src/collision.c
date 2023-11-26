/*
** EPITECH PROJECT, 2021
** COLLISIONS
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

void detect_collision(sfEvent event, sfSprite *sprite_duck, float *x,
float *y, Menu_t *menu)
{
    int random_y = (rand() % (HEIGHT - 220));

    if (event.type == sfEvtMouseButtonPressed)
        if (event.mouseButton.x >= *x && event.mouseButton.x <= *x + 110
        && event.mouseButton.y >= *y && event.mouseButton.y <= *y + 110) {
            *x = -110;
            *y = random_y;
            menu->score++;
    }
}
