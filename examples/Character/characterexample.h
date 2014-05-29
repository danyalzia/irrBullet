// This example is part of irrBullet by Josiah Hartzell (fighterstw@hotmail.com or josiah.hartzell@gmail.com)

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
