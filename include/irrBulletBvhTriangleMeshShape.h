// Copyright (C) 2009-2011 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics extension library and wrapper.
// For conditions of distribution and use, see license in irrbullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "irrBulletTriangleMeshShape.h"

/// The BVH triangle mesh shape is useful for static triangle mesh shapes, such as game levels.
class IBvhTriangleMeshShape : public ITriangleMeshShape
{
    public:
        IBvhTriangleMeshShape(irr::scene::ISceneNode *n, irr::scene::IMesh *collMesh, irr::f32 m);

		IBvhTriangleMeshShape(const IBvhTriangleMeshShape& other) = default;

		IBvhTriangleMeshShape& operator=(const IBvhTriangleMeshShape& other) = default;

		// Move constructor
		IBvhTriangleMeshShape(const IBvhTriangleMeshShape&& other)
		{
#ifdef IRRBULLET_DEBUG_MODE
#pragma message("IBvhTriangleMeshShape move constructor called...")
#endif
			*this = std::move(other);
		}

		// Move assignment operator.
		IBvhTriangleMeshShape& operator=(IBvhTriangleMeshShape&& other)
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

        virtual ~IBvhTriangleMeshShape();


    protected:
        void createShape(irr::scene::IMesh* const mesh);
};
