#include <model/Entity.h>

void EntityDimensions::update(int width, int heigh)
{
    this->width = width;
    this->height = heigh;
}

void EntityDimensions::update(EntityDimensions dimensions)
{
    this->width = dimensions.width;
    this->height = dimensions.height;
}

EntityDimensions::EntityDimensions(){
    this->height = 20;
    this->width = 20;
}

EntityDimensions::EntityDimensions(int width, int height)
{
    this->width = width;
    this->height = height;
}

EntityDimensions::EntityDimensions(EntityDimensions &dimensions)
{
    this->height = dimensions.height;
    this->width = dimensions.width;
}