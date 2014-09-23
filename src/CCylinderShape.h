// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "ICylinderShape.h"
#include "CCollisionShape.h"

class CCylinderShape : public ICylinderShape, CCollisionShape
{
public:
	CCylinderShape(irr::scene::ISceneNode* const n, irr::f32 m, bool overrideMargin = false);

	CCylinderShape(const CCylinderShape& other) = default;

	CCylinderShape& operator=(const CCylinderShape& other) = default;

	// move constructor
	CCylinderShape(const CCylinderShape&& other)
	{
		*this = std::move(other);
	}

	// Move assignment operator
	CCylinderShape& operator=(CCylinderShape&& other)
	{
		if (this != &other)
		{
			delete node;

			node = other.node;
			mass = other.mass;

			other.node = nullptr;
			other.mass = 0;
		}
		return *this;
	}

	virtual ~CCylinderShape();

protected:
	void createShape(bool overrideMargin);
};
