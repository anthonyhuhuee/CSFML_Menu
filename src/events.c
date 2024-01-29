/*
** EPITECH PROJECT, 2023
** CSFML-Menus-Scenes
** File description:
** events
*/

#include "game.h"

void handle_click_navbar(game_t *game)
{
    // sfVector2i mouse = ??
    // sfVector2f coords = ??
    // sfFloatRect menu_1 = ??
    // sfFloatRect menu_2 = ??
    // sfFloatRect menu_3 = ??
    // sfFloatRect menu_4 = ??

    /*
    Detection du clique de la souris sur les menus
    */
}

void handle_mouse_pressed_events(game_t *game)
{
    switch(game->event->mouseButton.button) {
        case sfMouseLeft:
            handle_click_navbar(game);
            break;
        default:
            break;
    }
}

void handle_events(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window, game->event)) {
        switch (game->event->type) {
            case sfEvtClosed:
                sfRenderWindow_close(game->window);
                break;
            case sfEvtMouseButtonPressed:
                handle_mouse_pressed_events(game);
                break;
            default:
                break;
        }
    }
}
