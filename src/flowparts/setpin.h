/***************************************************************************
 *   Copyright (C) 2003-2004 by David Saxton                               *
 *   david@bluehaze.org                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

#ifndef SETPIN_H
#define SETPIN_H

#include "flowpart.h"

/**
@short FlowPart that writes a high/low to a pin
@author David Saxton
*/
class SetPin : public FlowPart
{
public:
    SetPin(ICNDocument *icnDocument, bool newItem, const char *id = nullptr);
    ~SetPin() override;

    static Item *construct(ItemDocument *itemDocument, bool newItem, const char *id);
    static LibraryItem *libraryItem();

    void generateMicrobe(FlowCode *) override;

private:
    void dataChanged() override;
};

#endif
