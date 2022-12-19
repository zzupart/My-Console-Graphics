#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <cmath>

class Point{
    public:
        int crd[2];
        Point(int x, int y){
            crd[0] = x;
            crd[1] = y;
        }
};
class Vector2D{
    public:
        int crd[2];
        int mod;
        Vector2D(int crd1[2], int crd2[2]){
            crd[0] = {crd2[0] - crd1[0]};
            crd[1] = {crd2[1] - crd1[1]};
            mod = sqrt(crd[0] * crd[0] + crd[1] * crd[1]);
        }
};
class Square{
    public:
        Point center{0, 0};
        //Point p1{0, 0};
        //Point p2{0, 0};
        //Point p3{0, 0};
        //Point p4{0, 0};
        int angle;
        int side_x;
        int side_y;
        Square(Point p0, int side_x, int side_y){
            Point center(p0.crd[0], p0.crd[1]);
            side_x = side_x;
            side_y = side_y;
        }
        void move(){
        }
        void rotate(){
        }
        void render(const int width, const int height, char **screen, char pixel = '@'){
            for(int i = 0; i < height; i++){
                for(int j; j < width; j++){
                    screen[0][0] = 'q';
                    int x1 = j - (width / 2);
                    int y1 = i - (height / 2);
                    int angle1 = (width / 2) * angle;
                    int x = x1 * cos(angle1) - y1 * sin(angle1) + center.crd[0];
                    int y = x1 * sin(angle1) + y1 * cos(angle1) + center.crd[1]; 
                    if(2 <= 20) screen[i][j] = pixel;
                }
            }
        }
};

#endif
