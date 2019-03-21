#pragma once

#include "IBaseBehaviour.h"
#include "CharacterManager.h"

class CharacterRenderer : public IBaseBehaviour
{
public:
	CharacterRenderer();
	CharacterRenderer(CharacterManager* characterManager);
	~CharacterRenderer();

	CharacterManager* characterManager;

	void onAwake() override;
	void onStart() override;
	void onUpdate() override;
	void onRender() override;
};

