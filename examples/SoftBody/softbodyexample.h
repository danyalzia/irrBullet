// This example is part of irrBullet by Josiah Hartzell (fighterstw@hotmail.com or josiah.hartzell@gmail.com)

#pragma once

#include "../framework/exampleframework.h"
#include <irrString.h>
#include <irrTypes.h>
#include <irrbulletcommon.h>

class ISoftBody;

class CSoftbodyExample : public CExampleFramework
{
    public:
        CSoftbodyExample();
        ~CSoftbodyExample();

        virtual void runExample();

        virtual bool OnEvent(const irr::SEvent& event);

        ISoftBody* createSoftbodyType(irr::u32 type, const irr::core::vector3df& position);

    private:
        int softVersusSoft;
};
