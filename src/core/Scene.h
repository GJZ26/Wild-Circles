#include <model/Entity.h>
#include <vector>

class Scene{
    private:
        std::vector<Entity> entities;
    public:
        Scene();
        void add(Entity entity);
        void remove(Entity entity);
};