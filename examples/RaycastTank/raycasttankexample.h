// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "../framework/exampleframework.h"
#include <irrString.h>


class IRigidBody;
class IRaycastVehicle;

namespace irr
{
    namespace scene
    {
        class IBoneSceneNode;
    }
}

class CRaycastTankExample : public CExampleFramework
{
    public:
        CRaycastTankExample();
        virtual ~CRaycastTankExample();

        void updateTank();

        void createTerrain();

        void createTank(const irr::core::stringw file, const irr::core::stringw collFile,
            const irr::core::vector3df &pos, irr::f32 mass);
        void createMuzzleFlash(irr::scene::IBoneSceneNode *node);

        void runExample();

        bool OnEvent(const irr::SEvent& event);

        bool IsKeyDown(irr::EKEY_CODE keyCode) const
        {
            return KeyIsDown[keyCode];
        }

    private:
        IRigidBody *tank;
        IRaycastVehicle *vehicle;

        bool KeyIsDown[irr::KEY_KEY_CODES_COUNT];

        irr::f32 leftTrackSpeed;
        irr::f32 rightTrackSpeed;

};
