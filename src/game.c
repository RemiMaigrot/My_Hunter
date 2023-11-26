/*
** EPITECH PROJECT, 2021
** GAME BOUCLE
** File description:
** MY HUNTER
*/

#include "../include/my_hunter.h"

void game_0(Menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, menu->sprite_menu, NULL);
    move_rect(menu);
    sfSprite_setPosition(menu->sprite_select, menu->pos_select);
    move_select(menu);
    sfRenderWindow_drawSprite(window, menu->sprite_select, NULL);
    convert_int_to_str(menu->string_best_score, menu->best_score);
    sfText_setString(menu->text_best_score, menu->string_best_score);
    sfText_setPosition(menu->text_best_score, menu->pose_best_score);
    sfRenderWindow_drawText(window, menu->text_best_score, NULL);
    sfWindow_setMouseCursorVisible(window, sfFalse);
}

void game_1(Menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, menu->sprite_bg, NULL);
    sfRenderWindow_drawSprite(window, menu->sprite_divide, NULL);
    sfRenderWindow_drawSprite(window, menu->duck1.sprite, NULL);
    sfRenderWindow_drawText(window, menu->text_score, NULL);
    convert_int_to_str(menu->string_score, menu->score);
    sfText_setString(menu->text_score, menu->string_score);
    sfText_setPosition(menu->text_score, menu->pos_text_score);
    sfRenderWindow_drawText(window, menu->text_str_score, NULL);
    convert_int_to_str(menu->string_life, menu->life);
    sfText_setString(menu->text_life, menu->string_life);
    sfText_setPosition(menu->text_life, menu->pose_life);
    sfRenderWindow_drawText(window, menu->text_life, NULL);
    sfRenderWindow_drawText(window, menu->text_vie, NULL);
    sfSprite_setPosition(menu->duck1.sprite, menu->duck1.pos);
    sfSprite_setTextureRect(menu->duck1.sprite, menu->rect);
    respawn_limit(menu);
    menu->duck1.pos.x += menu->speed;
}

void game_2(Menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, menu->sprite_bg, NULL);
    sfRenderWindow_drawSprite(window, menu->sprite_divide, NULL);
    sfRenderWindow_drawSprite(window, menu->duck1.sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->duck2.sprite, NULL);
    sfSprite_setPosition(menu->duck1.sprite, menu->duck1.pos);
    sfSprite_setPosition(menu->duck2.sprite, menu->duck2.pos);
    sfSprite_setTextureRect(menu->duck1.sprite, menu->rect);
    sfSprite_setTextureRect(menu->duck2.sprite, menu->rect);
    sfRenderWindow_drawText(window, menu->text_score, NULL);
    convert_int_to_str(menu->string_score, menu->score);
    sfText_setString(menu->text_score, menu->string_score);
    sfText_setPosition(menu->text_score, menu->pos_text_score);
    convert_int_to_str(menu->string_life, menu->life);
    sfText_setString(menu->text_life, menu->string_life);
    sfText_setPosition(menu->text_life, menu->pose_life);
    sfRenderWindow_drawText(window, menu->text_life, NULL);
    sfRenderWindow_drawText(window, menu->text_vie, NULL);
    sfRenderWindow_drawText(window, menu->text_str_score, NULL);
    game_2_2(menu, window);
}

void game_3(Menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, menu->sprite_bg, NULL);
    sfRenderWindow_drawSprite(window, menu->sprite_divide, NULL);
    sfRenderWindow_drawSprite(window, menu->duck1.sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->duck2.sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->duck3.sprite, NULL);
    sfRenderWindow_drawText(window, menu->text_score, NULL);
    convert_int_to_str(menu->string_score, menu->score);
    sfText_setString(menu->text_score, menu->string_score);
    sfText_setPosition(menu->text_score, menu->pos_text_score);
    sfRenderWindow_drawText(window, menu->text_str_score, NULL);
    convert_int_to_str(menu->string_life, menu->life);
    sfText_setString(menu->text_life, menu->string_life);
    sfText_setPosition(menu->text_life, menu->pose_life);
    sfRenderWindow_drawText(window, menu->text_life, NULL);
    sfRenderWindow_drawText(window, menu->text_vie, NULL);
    sfSprite_setPosition(menu->duck1.sprite, menu->duck1.pos);
    sfSprite_setPosition(menu->duck2.sprite, menu->duck2.pos);
    sfSprite_setPosition(menu->duck3.sprite, menu->duck3.pos);
    game_3_3(menu, window);
}

void game(Menu_t *menu, sfRenderWindow *window)
{
    menu->speed += 0.00001;
    if (menu->best_score < menu->score)
        menu->best_score = menu->score;
    conditions_run_game(menu, window);
    if (menu->stat == 3) {
        game_3(menu, window);
    }
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfBlack);
    menu->time = sfClock_getElapsedTime(menu->clock);
    menu->seconds = menu->time.microseconds / 1000000.0;
    if (menu->seconds > 0.2) {
        move_rect(menu, 110, 110);
        sfClock_restart(menu->clock);
    }
}
