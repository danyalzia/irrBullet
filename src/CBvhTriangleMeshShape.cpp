// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#include <btBulletDynamicsCommon.h>
#include <btBulletCollisionCommon.h>
#include "CBvhTriangleMeshShape.h"

using namespace irr;
using namespace core;
using namespace scene;

CBvhTriangleMeshShape::CBvhTriangleMeshShape(ISceneNode *n, IMesh *collMesh, f32 m) {
    setSceneNode(n);
    setMass(m);

	setShapeType(ECollisionShapeType::ECST_BVHTRIMESH);

    createShape(collMesh);
}


void CBvhTriangleMeshShape::createShape(IMesh *mesh) {
    CollisionMesh = createTriangleMesh(mesh);
    setPointer(new btBvhTriangleMeshShape(CollisionMesh, false, true));

    calculateLocalInertia(getMass(), vector3df(0.0f,0.0f,0.0f));
}

CBvhTriangleMeshShape::~CBvhTriangleMeshShape() {
    //dtor
}
