#pragma once
#include "IBaseBehaviour.h"

class BehaviourBaseTest : public IBaseBehaviour
{
public: 
	BehaviourBaseTest();
	~BehaviourBaseTest();

	void onAwake() override;
	void onStart() override;
	void onUpdate() override;
	void onRender() override;
};

