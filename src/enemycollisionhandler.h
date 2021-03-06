#ifndef ENEMYCOLLISIONHANDLER_H
#define ENEMYCOLLISIONHANDLER_H
#include "constantes.h"
#include <iostream>

namespace iv = irr::video;
namespace is = irr::scene;
namespace ic = irr::core;
namespace ig = irr::gui;
/**
 * @brief The EnemyCollisionHandler class
 */

class EnemyCollisionHandler : public irr::scene::ICollisionCallback
{


private:

    ic::vector3df previous_calculated_pos;

public:
    /**
     * @brief onCollision
     * @param animator
     * @return
     */
    bool onCollision(const irr::scene::ISceneNodeAnimatorCollisionResponse &animator);

};

#endif // ENEMYCOLLISIONHANDLER_H
