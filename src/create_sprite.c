/*
** EPITECH PROJECT, 2021
** CREATE SPRITE
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

sfSprite *create_sprite_with_scale(char *link, sfVector2f size)
{
    sfTexture *texture = sfTexture_createFromFile(link, NULL);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_scale(sprite, size);
    return sprite;
}

sfSprite *create_sprite(char *link)
{
    sfTexture *texture = sfTexture_createFromFile(link, NULL);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    return sprite;
}
