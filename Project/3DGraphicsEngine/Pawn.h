#pragma once

#include <queue>
#include "Job.h"
#include <sfml/System/Vector2.hpp>

class Pawn
{
public:
	Pawn();
	~Pawn();

	std::queue<Job> jobQueue;
	std::queue<sf::Vector2i> currentPath;

	sf::Vector2i position;

	void setPath(sf::Vector2i path);
	void clearPath();
};

