/***************************************************************************
 *   Copyright (c) 2016 Eivind Kvedalen <eivind@kvedalen.name>             *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#ifndef APP_DEFAULTMATERIALSOURCE_H
#define APP_DEFAULTMATERIALSOURCE_H

#include "MaterialSource.h"

namespace App {

class AppExport DefaultMaterialSource : public MaterialSource
{
public:
    DefaultMaterialSource();

    virtual bool isReadOnly() const;

    bool canUndo() const { return false; }

private:

    void initialize();

    void setDatabase(App::MaterialDatabase * database);

    bool isInitializing;
};

}

#endif // DEFAULTMATERIALSOURCE_H
