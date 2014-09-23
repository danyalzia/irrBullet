// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include <BulletCollision/CollisionShapes/btCollisionShape.h>
#include <vector3d.h>
#include <irrTypes.h>
#include <irrString.h>
#include <memory> // std::move
#include "Common.h"

class btVector3;
class btTransform;

namespace irr
{
    namespace scene
    {
        class ISceneNode;
    }
}

enum class ECollisionShapeType
{
    ECST_BOX,
    ECST_CONE,
    ECST_SPHERE,
	ECST_CYLINDER,
	ECST_CAPSULE,
    ECST_BVHTRIMESH,
    ECST_CONVEXHULL,
    ECST_GIMPACT
};

enum class EScalingPair
{
    ESP_BOTH,
    ESP_COLLISIONSHAPE,
    ESP_VISUAL
};


/// The collision shape defines the geometry of an object, its mass, and its inertia.
class ICollisionShape
{
public:
    virtual ~ICollisionShape();

    /*!
        Sets the scaling of the collision shape in local space.
        @param scaling How much to scale the shape.
        @param esp Whether to scale only the collision shape, the scene node, or both.
    */
    virtual void setLocalScaling(const irr::core::vector3df &scaling, const EScalingPair esp) = 0;

    /*!
        Sets the margin of the shape. (How much of a "buffer zone" the object has).
        Useful to somewhat avoid tunneling, and catch collisions further from the actual geometry.
        (Note: shapes such as sphere and box actually subtract the margin from the actual geometry,
        while triangle meshes and the like add it to the geometry.)
    */
    virtual void setMargin(const irr::f32 margin) = 0;


    /// Calculates the local inertia of this shape (How much the object resists changes to its current state of motion).
    virtual void calculateLocalInertia(irr::f32 Mass, const irr::core::vector3df &inertia) = 0;

    virtual void removeNode() = 0;
	
	virtual void setName(const irr::core::stringc& name) = 0;
    virtual const irr::core::vector3df getLocalScaling() const = 0;

    virtual const irr::core::stringc& getName() = 0;
	
	virtual void setShapeType(ECollisionShapeType type) = 0;
	
    virtual ECollisionShapeType getShapeType() const = 0;

    virtual irr::f32 getMargin() const  = 0;

    virtual const irr::core::vector3df& getLocalInertia() const = 0;
	
	virtual void setMass(irr::f32 mass) = 0;
    virtual irr::f32 getMass() const = 0;
	
	virtual void setPointer(btCollisionShape* shape) = 0;
	
    virtual btCollisionShape* getPointer() const = 0;
	
	virtual void setSceneNode(irr::scene::ISceneNode* node) = 0;
	
    virtual irr::scene::ISceneNode* getSceneNode() const = 0;

    virtual bool isPolyhedral() = 0;
    virtual bool isConvex() = 0;
    virtual bool isConcave() = 0;
    virtual bool isCompound() = 0;
    virtual bool isInfinite() = 0;
};
