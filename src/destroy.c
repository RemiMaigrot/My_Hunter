/*
** EPITECH PROJECT, 2021
** DESTROY
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

void destroy_all(Menu_t menu, sfRenderWindow *window)
{
    sfSprite_destroy(menu.sprite_select);
    sfSprite_destroy(menu.sprite_menu);
    sfSprite_destroy(menu.sprite_divide);
    sfSprite_destroy(menu.duck1.sprite);
    sfSprite_destroy(menu.duck2.sprite);
    sfSprite_destroy(menu.duck3.sprite);
    sfSprite_destroy(menu.sprite_bg);
    sfRenderWindow_destroy(window);
}
