// Copyright (C) 2009-2011 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics extension library and wrapper.
// For conditions of distribution and use, see license in irrbullet.h
// The above copyright notice and its accompanying information must remain here.

#include "irrBulletCollisionCallBackInformation.h"
#include <BulletCollision/CollisionDispatch/btCollisionObject.h>
#include "irrBulletCollisionObject.h"
#include "irrBulletWorld.h"

ICollisionCallbackInformation::ICollisionCallbackInformation(btPersistentManifold* const manifold, irrBulletWorld* world)
{
    contactManifold = manifold;
    dynamicsWorld = world;
}

ICollisionObject* const ICollisionCallbackInformation::getBody0() const
{
    SCollisionObjectIdentification* identification =
		static_cast<SCollisionObjectIdentification*>((contactManifold->getBody1())->getUserPointer());

    return identification->getCollisionObject();

    return 0;
}

ICollisionObject* const ICollisionCallbackInformation::getBody1() const
{
    SCollisionObjectIdentification* identification =
		static_cast<SCollisionObjectIdentification*>((contactManifold->getBody1())->getUserPointer());

    return identification->getCollisionObject();

    return 0;
}


SManifoldPoint& ICollisionCallbackInformation::getContactPoint(irr::u32 index)
{
    btManifoldPoint &point = contactManifold->getContactPoint(index);
    manifoldPoint.setInfo(point);
    return manifoldPoint;
}
