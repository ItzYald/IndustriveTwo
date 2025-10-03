#include "Cycle.h"

Cycle::Cycle()
{
	videoMode = sf::VideoMode(1280, 720);
	window = std::make_shared<sf::RenderWindow>(videoMode, "Industrive2");

	window->setFramerateLimit(60);

	Game game = Game();

	while (window->isOpen())
	{
		window->clear();

		game.Next();
		window->draw(game);

		window->display();
	}
}
