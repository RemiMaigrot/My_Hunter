/*
** EPITECH PROJECT, 2021
** MAIN CSFML
** File description:
** Project of CSFML
*/

#include "../include/my_hunter.h"

Menu_t *menu_create(void);
void game(Menu_t *menu, sfRenderWindow *window);
void destroy_all(Menu_t menu, sfRenderWindow *window);
void boucle(sfRenderWindow *window, sfEvent event, Menu_t menu);
sfSprite *create_sprite_with_scale(char *link, sfVector2f size);
sfSprite *create_sprite(char *link);
void detect_collision(sfEvent event, sfSprite *sprite_duck, float *x,
float *y, Menu_t *menu);
void close_window(sfRenderWindow *window);
void manage_mouse_coord(sfMouseMoveEvent event_mouse, Menu_t *menu);
void move_rect(Menu_t *menu, int offset, int max_value);
void respawn_limit(Menu_t *menu);
void analyse_events(sfRenderWindow *window, sfEvent event, Menu_t *menu);
void change_pos_select(Menu_t *menu, char *direction);
void move_select(Menu_t *menu);
void enter_game(Menu_t *menu);

int main(int argc, char **argv)
{
    sfVideoMode mode = {WIDTH, HEIGHT, 32};
    sfRenderWindow *window;
    sfEvent event;
    char const *name = "My Hunter";
    Menu_t *menu = menu_create();
    sfMusic_play(menu->music);
    char *help_string = "\n--------------------------------------\nMy Hunter, "
    "an Epitech Project\nCoded in langage C\nReproduction of the famous Duck "
    "Hunt\nEnjoy my GAME !!!\n--------------------------------------\n\n";

    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        sfMusic_destroy(menu->music);
        my_putstr(help_string);
        return (EXIT_SUCCESS);
    }
    window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
    if (!window)
        return (84);
    boucle(window, event, *menu);
    return EXIT_SUCCESS;
}
