#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

enum class Shape{
    Circle,
    Squeare
};

enum class Role{
    Player,
    Enemie,
    Object,
};

class EntityPosition{
    public:
        float x;
        float y;
        EntityPosition();
        EntityPosition(float x, float y);
        EntityPosition(EntityPosition &position);
        void update(float x, float y);
        void update(EntityPosition position);
};

class EntityDimensions{
    public:
        int width;
        int height;
        EntityDimensions();
        EntityDimensions(int width, int height);
        EntityDimensions(EntityDimensions &dimensions);
        void update(int widht, int height);
        void update(EntityDimensions dimensions);
};

class Entity{
    private:
        EntityPosition position;
        EntityDimensions dimension;
        Shape shape;
        sf::Color background_color;
        sf::Color border_color;
    public:
        Entity();
        Entity(float x,float y, int width, int height);
        Entity(EntityPosition position, EntityDimensions dimensions);
        EntityPosition get_position();
        EntityDimensions get_dimension();
};


// std::ostream &Entity::operator<<(std::ostream &out, Entity entity)
// {
//     out << "Entity information:" << std::endl
//        << "Position x: " << entity.get_position().x << std::endl
//        << "Position y: " << entity.get_position().y << std::endl
//        << "Width: " << entity.get_dimension().width << std::endl
//        << "Height: " << entity.get_dimension().height << std::endl;
//     return out;
// };