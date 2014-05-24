// This example is part of irrBullet by Josiah Hartzell (fighterstw@hotmail.com or josiah.hartzell@gmail.com)

#pragma once

#include "../framework/exampleframework.h"
#include <irrString.h>
#include <irrTypes.h>


class CCollisionExample : public CExampleFramework
{
    public:
        CCollisionExample();
        ~CCollisionExample();

        virtual void runExample();

        virtual bool OnEvent(const irr::SEvent& event);

        void handleCollisions();

        void createGround();

    private:
};
