/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** input
*/

#ifndef INPUT_H_
    #define INPUT_H_

    #include "rpg.h"

    typedef struct key_value_s {
        sfKeyCode code;
        int press;
    } kv_t;

    typedef struct input_s {
        kv_t left;
        kv_t right;
        kv_t bot;
        kv_t top;
        kv_t space;
    } input_t;

    void init_input(rpg_t *rpg);

    void check_input(win_t *win, input_t *input);

#endif /* !INPUT_H_ */