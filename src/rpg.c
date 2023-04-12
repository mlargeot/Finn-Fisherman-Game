/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** rpg
*/

#include "rpg.h"

int rpg(void)
{
    int ret = 0;
    rpg_t *rpg = init_rpg();
    init_win(rpg);
    init_loading(rpg);
    init_asset(rpg);
    init_puzzle(rpg);
    init_data(rpg);
    init_player(rpg->asset, rpg);
    init_input(rpg);
    ret = main_loop(rpg->win, rpg);
    return ret;
}
