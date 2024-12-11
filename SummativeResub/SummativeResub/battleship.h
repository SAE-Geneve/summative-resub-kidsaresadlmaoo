#ifndef battleship_h
#define battleship_h
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>

class Battleship : public sf::Drawable, private sf::Transformable
{
private:
	sf::Texture texture_;
	sf::Sprite sprite_;
	float kSpeed = 500.f;

public:
	Battleship();
	void Move(sf::Vector2f direction, float dt);

protected:
};

#endif //battleship_h