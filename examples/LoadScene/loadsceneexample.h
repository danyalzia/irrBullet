#pragma once

#include "../framework/exampleframework.h"
#include <irrString.h>
#include <irrTypes.h>


class IRigidBody;

class CLoadSceneExample : public CExampleFramework
{
    public:
        CLoadSceneExample();
        virtual ~CLoadSceneExample();

        virtual void runExample();

        virtual bool OnEvent(const irr::SEvent& event);
};
