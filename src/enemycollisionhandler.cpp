#include "enemycollisionhandler.h"

EnemyCollisionHandler::EnemyCollisionHandler()
{
}

bool EnemyCollisionHandler::onCollision(const irr::scene::ISceneNodeAnimatorCollisionResponse &animator){
 std::cout<<"collision"<<std::endl;
}

