#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Button
{
private:
	sf::RectangleShape rectangle;
	sf::Font font;
	sf::Text text;
	sf::Text text2;
	bool status = false;
public:
	Button(float, float, std::string);
	void setPosition(float, float);
	sf::Text& getText();
	sf::Text& getText2();
	sf::RectangleShape& getButton();
};

