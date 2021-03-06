/**
 * WolfIsland environment modeling project.
 *
 * Copyright 2018 by Kateryna Pereverzeva <katya.pereverzeva2109@gmail.com>
 * Copyright 2018 by Oleksandr Orlovskyi <orlovskyi.alex@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 =========================================================================== */

#ifndef CPP_CONSOLEVIEW_H
#define CPP_CONSOLEVIEW_H

#include <iostream>

#include "../model/include/Field.h"
#include "BaseView.h"

// ConsoleView - class for console mode game presentation
class ConsoleView: public BaseView {
public:
    explicit ConsoleView(Field* _pField);
    ~ConsoleView() override;

    // displays all game-window elements
    void displayField() override;

private:
    Field* pField; // field pointer for easier use in game displaying
};
#endif //CPP_CONSOLEVIEW_H
