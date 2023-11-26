/*
** EPITECH PROJECT, 2021
** GAME 2
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

void game_2_2(Menu_t *menu, sfRenderWindow *window)
{
    respawn_limit(menu);
    menu->duck1.pos.x += menu->speed;
    menu->duck2.pos.x += menu->speed;
    sfWindow_setMouseCursorVisible(window, sfFalse);
}

void game_3_3(Menu_t *menu, sfRenderWindow *window)
{
    sfSprite_setTextureRect(menu->duck1.sprite, menu->rect);
    sfSprite_setTextureRect(menu->duck2.sprite, menu->rect);
    sfSprite_setTextureRect(menu->duck3.sprite, menu->rect);
    respawn_limit(menu);
    menu->duck1.pos.x += menu->speed;
    menu->duck2.pos.x += menu->speed;
    menu->duck3.pos.x += menu->speed;
    sfWindow_setMouseCursorVisible(window, sfFalse);
}
