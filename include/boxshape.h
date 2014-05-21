// Copyright (C) 2009-2011 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics extension library and wrapper.
// For conditions of distribution and use, see license in irrbullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "collisionshape.h"

class IBoxShape : public ICollisionShape
{
public:
	IBoxShape(irr::scene::ISceneNode* const n, irr::f32 m, bool overrideMargin = false);

	virtual ~IBoxShape();

protected:
	void createShape(bool overrideMargin);
};

