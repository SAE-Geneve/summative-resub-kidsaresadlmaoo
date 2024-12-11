#include "battleship.h"
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Transformable.hpp>

Battleship::Battleship()
{
	sf::Texture battleship;
	battleship.loadFromFile("Assets\\Ships\\ship(2).png");
}

//void Battleship::draw(sf::RenderTarget& target, sf::RenderStates states) const
//{
//	states.transform *= getTransform();
//	target.draw(sprite_, states);
//}
//
//void Battleship::Move(sf::Vector2f direction, float dt)
//{
//	move(direction * kSpeed * dt);
//}