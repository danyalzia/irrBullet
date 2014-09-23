// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "ICollisionShape.h"

class btVector3;
class btTransform;

namespace irr
{
    namespace scene
    {
        class ISceneNode;
    }
}

class CCollisionShape : public ICollisionShape
{
public:
	~CCollisionShape();
	
	void setLocalScaling(const irr::core::vector3df &scaling, const EScalingPair esp) override;
	
    void setMargin(const irr::f32 margin) override { shape->setMargin(margin); };
	
    void calculateLocalInertia(irr::f32 Mass, const irr::core::vector3df &inertia) override;

    void removeNode() override { node->remove(); };

    const irr::core::vector3df getLocalScaling() const override;
	
	void setName(const irr::core::stringc& name) { this->name = name; }
	
    const irr::core::stringc& getName() { name = shape->getName(); return name; };
	
	void setShapeType(ECollisionShapeType type) { this->type = type; };
	
    ECollisionShapeType getShapeType() const { return type; };

    irr::f32 getMargin() const { return shape->getMargin(); };

    const irr::core::vector3df& getLocalInertia() const { return localInertia; };
	
	void setMass(irr::f32 mass) { this->mass = mass; };
	
    irr::f32 getMass() const {return mass;};
	
	void setPointer(btCollisionShape* shape) { this->shape = shape; };
	
    btCollisionShape* getPointer() const { return shape; };
	
	void setSceneNode(irr::scene::ISceneNode* node)  { this->node = node; };
	
    irr::scene::ISceneNode* getSceneNode() const { return node; };

    bool isPolyhedral() const { return shape->isPolyhedral(); };
    bool isConvex() const { return shape->isConvex(); };
    bool isConcave() const { return shape->isConcave(); };
    bool isCompound() const { return shape->isCompound(); };
    bool isInfinite() const { return shape->isInfinite(); };
protected:
    ECollisionShapeType type;
    irr::scene::ISceneNode* node;
    btCollisionShape* shape;
    irr::core::stringc name;

    irr::f32 mass;
    irr::core::vector3df localInertia;
	
    virtual void createShape();
};
