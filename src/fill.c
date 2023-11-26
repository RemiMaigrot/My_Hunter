/*
** EPITECH PROJECT, 2021
** FILL STRUCT
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

void fill1(Menu_t *menu)
{
    menu->speed = 0.6;
    menu->score = 0;
    menu->best_score = 0;
    menu->life = 3;
    convert_int_to_str(menu->string_life, menu->life);
    menu->pose_life.x = 120;
    menu->pose_life.y = 100;
    menu->text_life = sfText_create();
    sfText_setFont(menu->text_life, menu->font);
    sfText_setString(menu->text_life, menu->string_life);
    sfText_setPosition(menu->text_life, menu->pose_life);
    menu->string_vie = "Life   : ";
    menu->pose_vie.x = 48;
    menu->pose_vie.y = 100;
    menu->text_vie = sfText_create();
    sfText_setFont(menu->text_vie, menu->font);
    sfText_setString(menu->text_vie, menu->string_vie);
    sfText_setPosition(menu->text_vie, menu->pose_vie);
}

void fill2(Menu_t *menu)
{
    convert_int_to_str(menu->string_best_score, menu->best_score);
    menu->pose_best_score.x = 1055;
    menu->pose_best_score.y = 836;
    menu->text_best_score = sfText_create();
    sfText_setFont(menu->text_best_score, menu->font_best_score);
    sfText_setString(menu->text_best_score, menu->string_best_score);
    sfText_setPosition(menu->text_best_score, menu->pose_best_score);
    sfText_setColor(menu->text_best_score, menu->green);
    convert_int_to_str(menu->string_score, menu->score);
    menu->pos_text_score.x = 120;
    menu->pos_text_score.y = 50;
    menu->text_score = sfText_create();
    sfText_setFont(menu->text_score, menu->font);
    sfText_setString(menu->text_score, menu->string_score);
    sfText_setPosition(menu->text_score, menu->pos_text_score);
    menu->str_score = "Score : ";
    menu->pos_str_score.x = 50;
    menu->pos_str_score.y = 50;
    menu->duck1.pos.x = 0;
}

void fill3(Menu_t *menu)
{
    menu->text_str_score = sfText_create();
    sfText_setFont(menu->text_str_score, menu->font);
    sfText_setString(menu->text_str_score, menu->str_score);
    sfText_setPosition(menu->text_str_score, menu->pos_str_score);
    menu->stat_select = 0;
    menu->stat = 0;
    menu->size_bg.x = 1.5;
    menu->size_bg.y = 1.5;
    menu->pos_select.x = 630.0;
    menu->pos_select.y = 605.0;
    menu->size_divide.x = 0.1;
    menu->size_divide.y = 0.1;
    menu->duck2.pos.x = 0;
    menu->duck3.pos.x = 0;
    menu->rect.left = 0;
    menu->rect.top = 0;
    menu->rect.height = 110;
    menu->rect.width = 110;
    menu->seconds = 0.0;
    menu->clock = sfClock_create();
}
