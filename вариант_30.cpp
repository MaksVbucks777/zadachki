#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "Brownian Motion");
    window.setFramerateLimit(60);
    
    sf::CircleShape pixel(2.0f);
    pixel.setFillColor(sf::Color::Red);
    pixel.setPosition(400, 300);
    
    float x = 400.0f, y = 300.0f;
    
    while (window.isOpen()) {
        sf::Event event;
       
