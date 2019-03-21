#include "CharacterRenderer.h"
#include "CurrentGame.h"

#include <iostream>

CharacterRenderer::CharacterRenderer() {}

CharacterRenderer::CharacterRenderer(CharacterManager* characterManager)
{
	this->characterManager = characterManager;
}

void CharacterRenderer::onAwake() {}

void CharacterRenderer::onStart() {}

void CharacterRenderer::onUpdate() {}

void CharacterRenderer::onRender()
{
	CurrentGame::game->window.getSize();
}

CharacterRenderer::~CharacterRenderer()
{
}
