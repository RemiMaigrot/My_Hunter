/*
** EPITECH PROJECT, 2021
** MY HUNTER
** File description:
** EPITECH
*/

#ifndef MY_HUNTER_
    #define MY_HUNTER_
    #define WIDTH 1920
    #define HEIGHT 1080
    #define SPEED 0.8
    #define SIZE_BUFFER 10000

    #include <stdio.h>
    #include <stdlib.h>
    #include <SFML/Audio.h>
    #include <SFML/Audio/Export.h>
    #include <SFML/Audio/SoundStatus.h>
    #include <SFML/Audio/Types.h>
    #include <SFML/System/InputStream.h>
    #include <SFML/System/Time.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window/Keyboard.h>
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/System/Vector2.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <fcntl.h>

    typedef struct Duck_s
    {
        sfSprite *sprite;
        sfVector2f pos;
    } Duck_t;

    typedef struct Menu_s
    {
        float speed;
        sfMusic *music;
        int life;
        sfVector2f pose_life;
        sfText *text_life;
        char string_life[10];
        sfVector2f pose_vie;
        sfText *text_vie;
        char *string_vie;
        sfColor green;
        int best_score;
        sfVector2f pose_best_score;
        sfText *text_best_score;
        char string_best_score[10];
        int stat;
        int score;
        sfClock *clock;
        int stat_select;
        sfSprite *sprite_bg;
        sfSprite *sprite_menu;
        sfVector2f size_bg;
        sfSprite *sprite_divide;
        sfSprite *sprite_select;
        sfVector2f pos_select;
        sfVector2f size_divide;
        Duck_t duck1;
        Duck_t duck2;
        Duck_t duck3;
        sfIntRect rect;
        sfTime time;
        char *str_score;
        sfVector2f pos_str_score;
        sfText *text_str_score;
        char string_score[10];
        sfVector2f pos_text_score;
        sfFont *font;
        sfFont *font_best_score;
        sfText *text_score;
        float seconds;
    } Menu_t;

#endif /* MY_HUNTER */
