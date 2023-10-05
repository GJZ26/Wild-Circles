#include <model/Entity.h>
#include <iostream>
#include <SFML/Graphics.hpp>

Entity::Entity()
{
    this->background_color = sf::Color::Red;
    this->border_color = sf::Color::Black;
    this->dimension = EntityDimensions();
    this->position = EntityPosition();
    this->shape = Shape::Circle;
}

Entity::Entity(float x, float y, int width, int height)
{
    this->position = EntityPosition(x, y);
    this->dimension = EntityDimensions(width, height);
    this->background_color = sf::Color::Red;
    this->shape = Shape::Circle;
}

Entity::Entity(EntityPosition position, EntityDimensions dimensions)
{
    this->position.update(position);
    this->dimension.update(dimensions);
}

EntityDimensions Entity::get_dimension()
{
    return this->dimension;
}

EntityPosition Entity::get_position()
{
    return this->position;
}