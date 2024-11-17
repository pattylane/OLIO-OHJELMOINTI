#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double rectWidth) {
        width = rectWidth;
    }

    void setHeight(double rectHeight) {
        height = rectHeight;
    }

    double getArea() {
        return width * height;
    }

    double getCircum() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle* myRectangle = new Rectangle;

    myRectangle->setWidth(6.0);
    myRectangle->setHeight(8.0);

    std::cout << "Pinta-ala: " << myRectangle->getArea() << std::endl;
    std::cout << "Ymparysmitta: " << myRectangle->getCircum() << std::endl;

    delete myRectangle;

    return 0;
}
