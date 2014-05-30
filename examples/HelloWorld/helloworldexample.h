// This example is part of irrBullet by Josiah Hartzell (fighterstw@hotmail.com or josiah.hartzell@gmail.com)

#pragma once

#include "../framework/exampleframework.h"
#include <irrString.h>
#include <irrTypes.h>

class IRigidBody;

class CHelloWorldExample : public CExampleFramework
{
    public:
        CHelloWorldExample();
        virtual ~CHelloWorldExample();

        virtual void runExample();

        virtual bool OnEvent(const irr::SEvent& event);

        void createBoxes();

        void createGround();

    private:
        irr::u32 rows;
        irr::u32 columns;
};
