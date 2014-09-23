// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "ICapsuleShape.h"

class CCapsuleShape : public ICapsuleShape
{
public:
	CCapsuleShape(irr::scene::ISceneNode* const n, irr::f32 m, bool overrideMargin = false);

	CCapsuleShape(const CCapsuleShape& other) = default;

	CCapsuleShape& operator=(const CCapsuleShape& other) = default;

	virtual ~CCapsuleShape();

protected:
	void createShape(bool overrideMargin);
};
