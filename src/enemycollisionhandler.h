#ifndef ENEMYCOLLISIONHANDLER_H
#define ENEMYCOLLISIONHANDLER_H
#include <irrlicht.h>
#include <iostream>

/**
 * @brief The EnemyCollisionHandler class
 */

class EnemyCollisionHandler : public irr::scene::ICollisionCallback
{


private:
    irr::core::vector3df previous_resulting_position;

public:
    /**
     * @brief onCollision
     * @param animator
     * @return
     */
    bool onCollision(const irr::scene::ISceneNodeAnimatorCollisionResponse &animator);

};

#endif // ENEMYCOLLISIONHANDLER_H
