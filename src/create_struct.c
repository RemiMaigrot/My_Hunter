/*
** EPITECH PROJECT, 2021
** CREATE STRUCT
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

void convert_int_to_str(char str[], int nb)
{
    int index, calcul, len_string = 0, n;

    n = nb;
    while (n != 0) {
        n /= 10;
        len_string++;
    }
    for (index = 0; index < len_string; index++) {
        calcul = nb % 10;
        nb = nb / 10;
        str[len_string - (index + 1)] = calcul + '0';
    }
    str[len_string] = '\0';
}

void do_fills(Menu_t *menu)
{
    fill1(menu);
    fill2(menu);
    fill3(menu);
}

Menu_t *menu_create(void)
{
    Menu_t *menu = malloc(sizeof(Menu_t));

    menu->font = sfFont_createFromFile("font/Storytime.ttf");
    menu->font_best_score = sfFont_createFromFile("font/VCR.ttf");
    menu->green = sfColor_fromRGB(51, 185, 84);
    menu->music = sfMusic_createFromFile("music/music.ogg");
    do_fills(menu);
    menu->sprite_menu = create_sprite("images/menu.jpg");
    menu->sprite_bg = create_sprite_with_scale("images/background.png",
    menu->size_bg);
    menu->sprite_select = create_sprite("images/select.png");
    menu->duck1.sprite = create_sprite("images/duck.png");
    menu->duck2.sprite = create_sprite("images/duck.png");
    menu->duck3.sprite = create_sprite("images/duck.png");
    menu->sprite_divide = create_sprite_with_scale("images/divide.png",
    menu->size_divide);
    menu->duck1.pos.y = (rand() % (HEIGHT - 220));
    menu->duck2.pos.y = (rand() % (HEIGHT - 220));
    menu->duck3.pos.y = (rand() % (HEIGHT - 220));
    return (menu);
}
