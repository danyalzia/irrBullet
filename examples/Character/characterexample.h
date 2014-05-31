// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "../framework/exampleframework.h"
#include <irrString.h>
#include <irrTypes.h>

class IRigidBody;

class CCharacterExample : public CExampleFramework
{
    public:
        CCharacterExample();
        virtual ~CCharacterExample();

        virtual void runExample();

        virtual bool OnEvent(const irr::SEvent& event);

        void createBoxes();

        void createGround();

        bool IsKeyDown(irr::EKEY_CODE keyCode) const
        {
            return KeyIsDown[keyCode];
        }

    private:
        irr::u32 rows;
        irr::u32 columns;

        bool KeyIsDown[irr::KEY_KEY_CODES_COUNT];

        irr::f32 DirZ;
        irr::f32 DirX;
};
