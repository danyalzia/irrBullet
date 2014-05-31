// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

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
