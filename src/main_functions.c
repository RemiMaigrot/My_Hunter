/*
** EPITECH PROJECT, 2021
** MAIN FUNCTIONS
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

void manage_mouse_coord(sfMouseMoveEvent event_mouse, Menu_t *menu)
{
    int middle_size = 100;
    sfVector2f vector_mouse = {.x = event_mouse.x - middle_size, .y =
    event_mouse.y - middle_size};
    sfSprite_setPosition(menu->sprite_divide, vector_mouse);
}

void move_rect(Menu_t *menu, int offset, int max_value)
{
    if (menu->rect.left > max_value)
        menu->rect.left = 0;
    else
        menu->rect.left += offset;
}

void respawn_limit(Menu_t *menu)
{
    if (menu->duck1.pos.x >= WIDTH) {
        menu->life --;
        menu->duck1.pos.x = -110;
    }
    if (menu->duck2.pos.x >= WIDTH) {
        menu->life --;
        menu->duck2.pos.x = -110;
    }
    if (menu->duck3.pos.x >= WIDTH) {
        menu->life --;
        menu->duck3.pos.x = -110;
    }
}

void conditions_run_game(Menu_t *menu, sfRenderWindow *window)
{
    if (menu->life == 0)
        menu->stat = 0;
    if (menu->stat == 0) {
        game_0(menu, window);
    }
    if (menu->stat == 1) {
        game_1(menu, window);
    }
    if (menu->stat == 2) {
        game_2(menu, window);
    }
}
