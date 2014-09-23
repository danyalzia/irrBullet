// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "ITriangleMeshShape.h"

/// The BVH triangle mesh shape is useful for static triangle mesh shapes, such as game levels.
class IBvhTriangleMeshShape : public ITriangleMeshShape {
	public:
        virtual ~IBvhTriangleMeshShape();

    protected:
        virtual void createShape(irr::scene::IMesh* const mesh) = 0;
};
