/*
** EPITECH PROJECT, 2021
** BOUCLE
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

void boucle2(sfRenderWindow *window, sfEvent event, Menu_t *menu)
{
    if (menu->stat == 1)
        detect_collision(event, &menu->duck1.sprite, &menu->duck1.pos.x,
        &menu->duck1.pos.y, menu);
    if (menu->stat == 2) {
        detect_collision(event, &menu->duck1.sprite, &menu->duck1.pos.x,
        &menu->duck1.pos.y, menu);
        detect_collision(event, &menu->duck2.sprite, &menu->duck2.pos.x,
        &menu->duck2.pos.y, menu);
    }
}

void boucle(sfRenderWindow *window, sfEvent event, Menu_t menu)
{
    float seconds;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            analyse_events(window, event, &menu);
            boucle2(window, event, &menu);
            if (menu.stat == 3) {
                detect_collision(event, menu.duck1.sprite, &menu.duck1.pos.x,
                &menu.duck1.pos.y, &menu);
                detect_collision(event, menu.duck2.sprite, &menu.duck2.pos.x,
                &menu.duck2.pos.y, &menu);
                detect_collision(event, menu.duck3.sprite, &menu.duck3.pos.x,
                &menu.duck3.pos.y, &menu);
            }
        }
        game(&menu, window);
    }
    destroy_all(menu, window);
}
