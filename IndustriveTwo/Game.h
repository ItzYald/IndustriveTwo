#pragma once
#include "Window.h"


class Game : public sf::Drawable
{
public:

	Game() = default;

	void Next();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

