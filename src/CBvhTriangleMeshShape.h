// Copyright (C) 2014- Danyal Zia
// Copyright (C) 2009-2013 Josiah Hartzell (Skyreign Software)
// This file is part of the "irrBullet" Bullet physics wrapper.
// For conditions of distribution and use, see copyright notice in irrBullet.h
// The above copyright notice and its accompanying information must remain here.

#pragma once

#include "CTriangleMeshShape.h"
#include "IBvhTriangleMeshShape.h"

/// The BVH triangle mesh shape is useful for static triangle mesh shapes, such as game levels.
class CBvhTriangleMeshShape : public IBvhTriangleMeshShape
{
    public:
        CBvhTriangleMeshShape(irr::scene::ISceneNode *n, irr::scene::IMesh *collMesh, irr::f32 m);

		CBvhTriangleMeshShape(const CBvhTriangleMeshShape& other) = default;

		CBvhTriangleMeshShape& operator=(const CBvhTriangleMeshShape& other) = default;

        virtual ~CBvhTriangleMeshShape();


    protected:
        void createShape(irr::scene::IMesh* const mesh) override;
};
