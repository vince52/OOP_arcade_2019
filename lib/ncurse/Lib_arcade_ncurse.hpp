/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** Lib_arcade_ncurse
*/

#ifndef LIB_ARCADE_NCURSE_HPP_
#define LIB_ARCADE_NCURSE_HPP_

#include<iostream>
#include<algorithm>
#include<vector>
#include<chrono>
#include<ctime>
#include<sstream>
#include<ncurses.h>
#include <thread>
#include <chrono>

#include "../IgraphicLib.hpp"

class Lib_arcade_ncurse : public IgraphicLib {
    public:
        Lib_arcade_ncurse();
        ~Lib_arcade_ncurse();
        virtual void refresh(Games) override;
        virtual void clear() override;

    protected:
        WINDOW *wind;
    private:
};

#endif /* !LIB_ARCADE_NCURSE_HPP_ */
