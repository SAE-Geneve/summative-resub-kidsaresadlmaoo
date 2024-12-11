#include <iostream>
#include "battleship.h"
#include "Game.h"
#include <array>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

	sf::Texture battleship;
    battleship.loadFromFile("Assets\\Ships\\ship(2).png");

    std::array<sf::Texture, 3> animation;
    animation[0].loadFromFile("Assets\\Effects\\explosion3.png");
    animation[1].loadFromFile("Assets\\Effects\\explosion2.png");
    animation[2].loadFromFile("Assets\\Effects\\explosion1.png");

    for (int idx_sprite = 0; idx_sprite < animation.size(); idx_sprite++)
    {
        animation[idx_sprite].loadFromFile("Assets\\Effects\\explosion (" + std::to_string(idx_sprite + 1) + ").png");
    }

    sf::Sprite mario;
    mario.setTexture(animation[0]);

    sf::Clock clock;
    float dt = 0;
    float interval = 1 / 30.f;
    int idx_animation = 0;

    do
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (dt > interval)
        {
            mario.setTexture(animation[idx_animation++]);
            if (idx_animation >= animation.size())
            {
                idx_animation = 0;
            }
            dt = 0;
        }

        window.clear();
        window.draw(mario);
        window.display();

        dt += clock.restart().asSeconds();
    } while (window.isOpen());

    return EXIT_SUCCESS;
}

    //while (window.isOpen())
    //{
	//*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	//	battleship.Move({ 0, -1 }, dt);
    //            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    //                battleship.Move({ 0, 1 }, dt);
    //            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    //                battleship.Move({ -1 , 0 }, dt);
    //            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    //               battleship.Move({ 1, 0 }, dt);*/
    //    sf::Event event;
    //    while (window.pollEvent(event))
    //    {
    //        if (event.type == sf::Event::Closed)
    //            window.close();
    //    }
    //    window.clear(sf::Color::Black);
    //    //window.draw(battleship);
    //    window.display();
    //}
    //
    //return 0;