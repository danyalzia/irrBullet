// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "CCollisionShape.h"
#include "IBoxShape.h"

class CBoxShape : public CCollisionShape
{
public:
	CBoxShape(irr::scene::ISceneNode* const n, irr::f32 m, bool overrideMargin = false);

	CBoxShape(const CBoxShape& other) = default;

	CBoxShape& operator=(const CBoxShape& other) = default;

	virtual ~CBoxShape();

protected:
	void createShape(bool overrideMargin);
};

