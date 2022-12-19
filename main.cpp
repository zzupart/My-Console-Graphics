#include <cmath>
#include <iostream>
#include "graphics.h"

int main(){
    const int height = 66;
    const int width = 88;
    char screen[height][width];
    float aspect = height / width;
    float pixel_aspect = 675.0 / 370.0;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            int x = j - (width / 2);
            int y = i - (height / 2);
            x /= pixel_aspect;

            Point v(x, y); 

            int angle = (width/2) * 0;
            int x1 = x * cos(angle) - y * sin(angle); 
            int y1 = x * sin(angle) + y * cos(angle);

            char pixel = ' ';
            //int radius = 20;
            //int side_x = 15;
            //int side_y = 20;
            //Point p1(radius, -radius);
            //Point p2(-radius, -radius);
            //Point p3(-radius, radius);
            //Point p4(radius, radius);
            //Point square_points[] = {p1, p2, p3, p4};
            //if(abs(x) <= side_x/2 && abs(y) <= side_y/2) pixel = '@';
            screen[i][j] = pixel;
        }
    Point o(0, 0);
    Square sq1(o, 15, 10);
    sq1.render(height, width, screen);
    }
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            std::cout << screen[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
