#include <cstdio>
#include <iostream>
#include <model/Entity.h>

#define APP_VERSION "0.0.0"
#define APP_NAME "Wild Circles"

int main()
{
    Entity pseudo_player(10,20,10,20);
    pseudo_player.get_dimension();
    static const char *CSI = "\33[";
    printf("%s%s%s%s%s%s", CSI, "1m", CSI, "33m", "Consola de depuracion.", "\n");
    printf("%s%s%s", CSI, "34m", APP_NAME);
    printf("%s%s%s%s%s", CSI, "0m", " | version: ", APP_VERSION, "\n");

    // std::count << pseudo_player << std::endl;
    return 0;
}

// #include <SFML/Graphics.hpp>
// #include <iostream>
// #include <sstream>
// #include <cstdio>

// using namespace sf;
// using namespace std;

// int main()
// {
//     cout << "Welcome to Debug Console for Circle Game" << endl;

//     static const char * CSI = "\33[";
//     printf( "%s%s", CSI, "31m" );   // RED

//     RenderWindow window(VideoMode(800, 600), "Tamo probando", sf::Style::Default, sf::ContextSettings(0, 0, 0));
//     float x = 0.f;
//     float y = 0.f;

//     Image icon;

//     if(icon.loadFromFile("C:\\Users\\adolf\\Downloads\\0f86bcc8-9c91-425a-8b36-b2ec59e6b2f5.png")){
//         window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
//     }else{
//         cerr << "No se ha podido cargar la imagen de la ventana";
//         // return 1;
//     }

//     CircleShape shape(50.f);
//     shape.setFillColor(Color::Blue);

//     View view(FloatRect(0, 0, 800, 600));
//     window.setView(view);

//     Font font;
//     if (!font.loadFromFile("C:/Users/adolf/Downloads/Fonts/JetBrainsMono-2.304/fonts/ttf/JetBrainsMono-Medium.ttf")) // Cambia esto a la ubicación de tu fuente
//     {
//         cerr << "No se pudo cargar la fuente" << endl;
//         return 1;
//     }

//     Text fpsText;
//     fpsText.setFont(font);
//     fpsText.setCharacterSize(16);
//     fpsText.setFillColor(Color::White);
//     fpsText.setPosition(10, window.getSize().y - 30);

//     int frameCount = 0;
//     Time elapsedTime = Time::Zero;
//     Clock clock;

//     while (window.isOpen())
//     {
//         Event event;
//         while (window.pollEvent(event))
//         {
//             if (event.type == Event::Closed)
//                 window.close();

//             if (event.type == Event::Resized)
//             {
//                 view.setSize(event.size.width, event.size.height);
//                 window.setView(view);
//             }

//             if (event.type == Event::MouseButtonPressed)
//             {
//                 if (event.mouseButton.button == Mouse::Left)
//                 {
//                     if (shape.getFillColor() == Color::Blue)
//                         shape.setFillColor(Color::Red);
//                     else
//                         shape.setFillColor(Color::Blue);
//                 }
//             }
//         }

//         Time deltaTime = clock.restart();
//         elapsedTime += deltaTime;
//         frameCount++;

//         if (elapsedTime >= seconds(1.0f))
//         {
//             float fps = static_cast<float>(frameCount) / elapsedTime.asSeconds();
//             stringstream ss;
//             ss << "FPS: " << static_cast<int>(fps);
//             fpsText.setString(ss.str());

//             elapsedTime = Time::Zero;
//             frameCount = 0;
//             cout << fps << endl;
//         }

//         if ((Keyboard::isKeyPressed(Keyboard::Left) || Keyboard::isKeyPressed(Keyboard::A) )&& window.hasFocus())
//         {
//             x -= 0.5;
//         }
//         if ((Keyboard::isKeyPressed(Keyboard::Right) || Keyboard::isKeyPressed(Keyboard::D)) && window.hasFocus())
//         {
//             x += 0.5;
//         }
//         if ((Keyboard::isKeyPressed(Keyboard::Up) || Keyboard::isKeyPressed(Keyboard::W)) && window.hasFocus())
//         {
//             y -= 0.5;
//         }
//         if ((Keyboard::isKeyPressed(Keyboard::Down) || Keyboard::isKeyPressed(Keyboard::S)) && window.hasFocus())
//         {
//             y += 0.5;
//         }
//         shape.setPosition(x, y);

//         window.clear(Color::Black);
//         window.draw(shape);
//         window.draw(fpsText);
//         window.display();
//     }

//     return 0;
// }