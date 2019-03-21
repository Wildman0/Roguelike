#pragma once

#include <vector>

#include "IBaseBehaviour.h"

class BehaviourHandler
{
public:
	BehaviourHandler();
	~BehaviourHandler();

	void addBehaviour(IBaseBehaviour* b);
	void destroyBehaviour(IBaseBehaviour* b);

	std::vector<IBaseBehaviour*> getBehaviours() { return behaviours; }

private:
	std::vector<IBaseBehaviour*> behaviours;
};