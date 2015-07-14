#include "Score.h"

Score::Score()
{
	offsetX = 10;
	offsetY = 20;
	count = 0;

	score.setString("Score: " + std::to_string(count));
	score.setCharacterSize(20);
	score.setPosition(sf::Vector2f(offsetX, offsetY));
}

Score::~Score()
{
}

void Score::Update()
{
	score.setString("Score: " + std::to_string(count));
}

void Score::Increment()
{
	count++;
}

void Score::Draw(sf::RenderWindow &window)
{
	window.draw(score);
}