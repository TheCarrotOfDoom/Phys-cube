#pragma once

#include "shape.h"

class Particle
{
public:
    Particle(glm::vec3 const&, Shape const&);
    ~Particle() = default;

    inline Shape const& getShape() const { return shape; }
    inline glm::vec3 const& getPos() const { return pos; }

private:
    glm::vec3 pos;
    Shape shape;
};
