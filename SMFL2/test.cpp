//#include <SFML/Graphics.hpp>
//#include <SFML/Window/Mouse.hpp>
//#include <iostream>
//#include <stdlib.h>
//#include "GameObject.h"
//#include "GameManager.h"
//
//
//void rectanglesEtCercleEnMouvement(sf::RenderWindow& window) {
//  /*  std::vector<sf::FloatRect> rectangles;
//    const int numRectangles = 20;
//    const int rectangleSize = 40;
//    const int xSpacing = 60;
//    const int ySpacing = 60;
//    const int initialX = 300;
//    const int initialY = 100;
//
//    for (int i = 0; i < numRectangles; ++i) {
//        sf::RectangleShape rect(sf::Vector2f(rectangleSize, rectangleSize));
//        rect.setPosition(initialX + (xSpacing * i), initialY + (ySpacing * i));
//        rectangles.push_back(rect.getGlobalBounds());
//    }
//
//    GameObject Circle(0, 0, 10, sf::Vector2f(1.f, 1.f),5, sf::Color::Red);
//
//    sf::Clock deltaTime;
//    float speed = 5;
//
//    int _Fw = 1080;
//    int _Fh = 720;
//    GameObject Canon(_Fw / 2, _Fh, 25, 75, sf::Color(155, 50, 155, 255));
//
//    GameManager input;
//
//    while (window.isOpen()) {
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        Canon.rotate(window);
//
//        Circle.updatePosition(deltaTime.getElapsedTime());
//        Circle.checkCWB(window.getSize());
//        Circle.checkCWS(rectangles);
//        Circle.draw(window);
//
//        for (const auto& rect : rectangles) {
//            sf::RectangleShape shape(sf::Vector2f(rect.width, rect.height));
//            shape.setPosition(rect.left, rect.top);
//            window.draw(shape);
//        }
//
//        
//        Canon.draw(window);
//
//        window.display();
//    }*/
//}
//
////tentative colisions entres cercles
//void rectanglesEtDeuxCerclesEnMouvement(sf::RenderWindow& window) {
//    std::vector<sf::FloatRect> rectangles;
//    const int numRectangles = 20;
//    const int rectangleSize = 40;
//    const int xSpacing = 60;
//    const int ySpacing = 60;
//    const int initialX = 300;
//    const int initialY = 100;
//
//    //for (int i = 0; i < numRectangles; ++i) {
//    //    sf::RectangleShape rect(sf::Vector2f(rectangleSize, rectangleSize));
//    //    rect.setPosition(initialX + (xSpacing * i), initialY + (ySpacing * i));
//    //    rectangles.push_back(rect.getGlobalBounds());
//    //}
//
//    std::vector<sf::FloatRect> cerles;
//    GameObject Circle1(0, 0, 20, sf::Vector2f(1.f, 1.f),10, sf::Color::Red);
//    GameObject Circle2(300, 600, 15, sf::Vector2f(-1.f, 1.f),10, sf::Color::Blue);
//    GameObject Circle3(700, 200, 10, sf::Vector2f(-1.f, 1.f),10, sf::Color::Blue);
//
//    
//    const sf::CircleShape& circle1 = Circle1.getCircle();
//    const sf::CircleShape& circle2 = Circle2.getCircle();
//    const sf::CircleShape& circle3 = Circle3.getCircle();
//
//    //cerles.push_back(circle1.getGlobalBounds());
//    cerles.push_back(circle2.getGlobalBounds());
//    cerles.push_back(circle3.getGlobalBounds());
//
//
//    sf::Clock deltaTime;
//    float speed = 5;
//
//    std::vector<sf::FloatRect> circles;
//   // rectangles.push_back(circle1.getGlobalBounds());
//   // rectangles.push_back(circle1.getGlobalBounds());
//
//
//    while (window.isOpen()) {
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//
//       // Circle1.checkCircleCollisions(bounds1, bounds2);
//        //Circle1.checkCircleCollisions(bounds1, bounds3);
//        //Circle2.checkCircleCollisions(bounds1, bounds3);
//
//        Circle1.updatePosition(deltaTime.getElapsedTime());
//        Circle2.updatePosition(deltaTime.getElapsedTime());
//        Circle3.updatePosition(deltaTime.getElapsedTime());
//
//        Circle1.checkCWB(window.getSize());
//        Circle1.checkCWS(rectangles);
//        Circle1.checkCircleCollisions(cerles);
//
//        Circle2.checkCWB(window.getSize());
//       // Circle2.checkCWS(rectangles, cerles);
//
//        Circle3.checkCWB(window.getSize());
//       // Circle3.checkCWS(rectangles, cerles);
//       
//
//     
//
//        Circle1.draw(window);
//        Circle2.draw(window);
//        Circle3.draw(window);
//
//        //for (const auto& rect : rectangles) {
//        //    sf::RectangleShape shape(sf::Vector2f(rect.width, rect.height));
//        //   shape.setPosition(rect.left, rect.top);
//        //    window.draw(shape);
//      // }
//
//        window.display();
//    }
//}
//
//
