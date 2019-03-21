#include "BehaviourHandler.h"

BehaviourHandler::BehaviourHandler()
{
	
}

void BehaviourHandler::addBehaviour(IBaseBehaviour* b)
{
	behaviours.push_back(b);
	b->onAwake();
	b->onStart();
}

void BehaviourHandler::destroyBehaviour(IBaseBehaviour* b)
{
	//Destroy behaviour
}

BehaviourHandler::~BehaviourHandler()
{
}
