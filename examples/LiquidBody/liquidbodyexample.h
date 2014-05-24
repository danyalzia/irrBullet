// This example is part of irrBullet by Josiah Hartzell (fighterstw@hotmail.com or josiah.hartzell@gmail.com)

#pragma once

#include "../framework/exampleframework.h"
#include <irrString.h>
#include <irrTypes.h>
#include <irrbulletcommon.h>

class ISoftBody;


class CLiquidbodyExample : public CExampleFramework
{
    public:
        CLiquidbodyExample();
        ~CLiquidbodyExample();

        virtual void runExample();

        virtual bool OnEvent(const irr::SEvent& event);

    private:
        int softVersusSoft;
};
