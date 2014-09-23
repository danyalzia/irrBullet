// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "ICollisionShape.h"
#include <BulletCollision/CollisionShapes/btSphereShape.h>

class ISphereShape : public ICollisionShape
{
public:
    virtual ~ISphereShape();

    virtual void setUnscaledRadius(irr::f32 newRadius) = 0;

    virtual irr::f32 getRadius() = 0;

protected:
    virtual void createShape(bool overrideMargin) = 0;
};


