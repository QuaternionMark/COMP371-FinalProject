#ifndef AI_H_INCLUDED
#define AI_H_INCLUDED

#include "../Objects/Car.h"

class Shader;

class AI {
private:
    Car* car;
    
    Car::WalkInput currTaskDirection;
    int stepsUntilNewTask;
    
    bool brainFreeze;

public:
    AI(Shader* shd, Shader* colliderShd, Shader* spriteShd);
    ~AI();
    
    void setCarShader(Shader* shd);
    Car* getCar() const;
    
    Car::WalkInput getCurrentTaskDirection();
    void updateCurrentTaskDirection();
    void toggleBrainFreeze();
    
    void updateFarInput(Car::WalkInput& input);
    void updateNearInput(Car::WalkInput& input);
    void update(float timestep);
    void render() const;
};

#endif // AI_H_INCLUDED
