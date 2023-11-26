/*
** EPITECH PROJECT, 2021
** ANALYSE EVENTS
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

void change_pos_select(Menu_t *menu, char *direction)
{
    if (direction == "down")
        menu->stat_select += 1;
    if (direction == "up")
        menu->stat_select -= 1;
}

void move_select(Menu_t *menu)
{
    if (menu->stat_select == -2) {
        menu->pos_select.y = 735.0;
        menu->stat_select = 4;
    }
    if (menu->stat_select == 0)
        menu->pos_select.y = 605.0;
    if (menu->stat_select == 2)
        menu->pos_select.y = 670.0;
    if (menu->stat_select == 4)
        menu->pos_select.y = 735.0;
    if (menu->stat_select == 6) {
        menu->pos_select.y = 605.0;
        menu->stat_select = 0;
    }
}

void enter_game(Menu_t *menu)
{
    if (menu->stat_select == 0) {
        menu->stat = 1;
    }
    if (menu->stat_select == 2)
        menu->stat = 2;
    if (menu->stat_select == 4)
        menu->stat = 3;
}

void analyse_event2(sfRenderWindow *window, sfEvent event, Menu_t *menu)
{
    if (menu->stat == 0) {
        if (event.key.code == sfKeyEnter) {
            menu->life = 3;
            menu->score = 0;
            menu->speed = 0.6;
            enter_game(menu);
        }
        if (event.key.code == sfKeyDown) {
            change_pos_select(menu, "down");
        }
        if (event.key.code == sfKeyUp)
            change_pos_select(menu, "up");
    }
}

void analyse_events(sfRenderWindow *window, sfEvent event, Menu_t *menu)
{
    if (event.type == sfEvtClosed || event.key.code == sfKeyEscape) {
        sfMusic_destroy(menu->music);
        close_window(window);
    }
    analyse_event2(window, event, menu);
    if (menu->stat != 0 && event.key.code == sfKeyM) {
        menu->score = 0;
        menu->stat = 0;
    }
    if (event.type == sfEvtMouseMoved)
        manage_mouse_coord(event.mouseMove, menu);
}
