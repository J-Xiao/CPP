#include <iostream>
#include <math.h>
 
struct circle{
       int x;
       int y;
       float radius;
};

float area( circle Mycircle){
    float r = Mycircle.radius;
    return 3.14159*r*r;
}

circle compare_size( circle & circle1, circle & circle2 ){
    if ( circle1.radius > circle2.radius ){
        circle2.radius = 0;
        return circle1;
    }
    else {
        circle1.radius = 0;
        return circle2;
    }
}

float distance_between ( circle circle1, circle circle2 ){
    int x1 = circle1.x;
    int x2 = circle2.x;
    int y1 = circle1.y;
    int y2 = circle2.y;    
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

bool intersection ( circle circle1, circle circle2 ){
    int r1 = circle1.radius;
    int r2 = circle2.radius;
    if ( r1 + r2 > distance_between ( circle1, circle2))
        return true;
    else
        return false;
}

/*
int main(){
    circle c1, c2;
    c1.x = 1;
    c1.y = 3;
    c1.radius = 23;
    c2.x = 5;
    c2.y = 8;
    c2.radius = 4;
    
    
}
*/
