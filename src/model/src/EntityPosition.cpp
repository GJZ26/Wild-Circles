#include <model/Entity.h>

EntityPosition::EntityPosition(){
    this->x = 0.f;
    this->y=0.f;
}

EntityPosition::EntityPosition(float x, float y)
{
    this->x = x;
    this->y = y;
}

EntityPosition::EntityPosition(EntityPosition &position)
{
    this->x = position.x;
    this->y = position.y;
}

void EntityPosition::update(float x, float y)
{
    this->x = x;
    this->y = y;
}

void EntityPosition::update(EntityPosition position){
    this->x = position.x;
    this->y = position.y;
}