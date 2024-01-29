/*
** EPITECH PROJECT, 2023
** CSFML-Menus-Scenes
** File description:
** display
*/

#include "game.h"

void display_button(game_t *game, button_t *button)
{
    /*
    Display du bouton
    */
}

void display_menu(game_t *game, menu_t *menu)
{
    /*
    Display du bouton
    */
}

void display_menus(game_t *game, menus_t *menus)
{
    /*
    Check du menu à display
    */
}

void display_navbar(game_t *game, navbar_t *navbar)
{
    sfRenderWindow_drawRectangleShape(game->window, navbar->background, NULL);
    display_button(game, navbar->button_1);
    display_button(game, navbar->button_2);
    display_button(game, navbar->button_3);
    display_button(game, navbar->button_4);
}

void display(game_t *game)
{
    sfRenderWindow_clear(game->window, sfBlack);
    display_navbar(game, game->navbar);
    display_menus(game, game->menus);
    sfRenderWindow_display(game->window);
}
