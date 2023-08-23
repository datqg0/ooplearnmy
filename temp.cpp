#include<bits/stdc++.h>
using namespace std;

template<typename T>struct Point {
    T x;
    T y;
};

template<typename T> T maxi(T a,T b) {
    if(a>=b) {
        return a;
    }
    return b;
}

template<typename T> T mini(T a,T b) {
    if(a<=b) {
        return a;
    }
    return b;
}

template <typename T,typename P> class Rectangle {
    T width;
    T height;
    P a,b,c,d;
    public:
        Rectangle(T width,T height) {
            this->width=width;
            this->height=height;
        }
        Rectangle(P a,P b,P c, P d) {
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
        }
        T sizebyLength() {
            return width*height;
        }
        T perimeterbyLength () {
            return (width + height) * 2;
        }
        friend T maxi<T> (T a,T b);
        friend T mini<T> (T a,T b);
        T sizebyPoint () {
            T x1,x2;
            T y1,y2;
            x1=maxi<T> (a.x,b.x);
            x1=maxi<T> (x1,c.x);
            x2=mini<T> (a.x,b.x);
            x2-mini<T> (x2,c.x);
            y1=maxi<T> (a.y,b.y);
            y1=maxi<T> (y1,c.y);
            y2=mini<T> (a.y,b.y);
            y2-mini<T> (y2,c.y);
            return (x1-x2)*(y1-y2);
        }
        T perimeterbyPoint () {
            T x1,x2;
            T y1,y2;
            x1=maxi<T> (a.x,b.x);
            x1=maxi<T> (x1,c.x);
            x2=mini<T> (a.x,b.x);
            x2-mini<T> (x2,c.x);
            y1=maxi<T> (a.y,b.y);
            y1=maxi<T> (y1,c.x);
            y2=mini<T> (a.y,b.y);
            y2-mini<T> (y2,c.y);
            return ((x1-x2)+(y1-y2))*2;
        }
};

class Circle {

};

class Triangle {

};

int main() {
    Rectangle<int,Point<int> > Test1(10,15);
    cout<<Test1.perimeterbyLength()<<endl;
    cout<<Test1.sizebyLength()<<endl;
    Point<int> a,b,c,d;
    a.x=0;
    a.y=0;
    b.x=0;
    b.y=2;
    c.x=3;
    c.y=0;
    d.x=3;
    d.y=2;
    Rectangle<int,Point<int> > Test2(a,b,c,d);
    cout<<Test2.sizebyPoint()<<endl;
}
