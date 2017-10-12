#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Template");
	sf::CircleShape cShape(100.f);
	cShape.setFillColor(sf::Color::Cyan);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		window.draw(cShape);
		window.display();

	}

	return 0;
}