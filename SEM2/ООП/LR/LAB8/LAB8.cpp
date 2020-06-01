#include <iostream>

class Sofa {
protected:
    std::string color;
    int length; int width;

public:
    void init(std::string color, int length, int width) {
        this->color = color;
        this->length = length;
        this->width = width;
    }

    void print() {
        std::cout << "Color: " << color << std::endl
        << "Length: " << width << std::endl
        << "Width: " << length << std::endl;
    }

    int get_length() {
        return length;
    }
    int get_width() {
        return width;
    }

    int square() {
        return length*width;
    }

};

class Convertible : Sofa {
protected:
    bool is_laid_out;
    int length_laid; int width_laid;

public:
    void init(std::string color, int length, int width, int length_laid, int width_laid) {
        Sofa::init(color, length, width);
        this->length_laid = length_laid;
        this->width_laid = width_laid;

        is_laid_out = false;
    }

    void print() {
        Sofa::print();
        std::cout << "Length when laid: " << length_laid << std::endl
        << "Width when laid: " << width_laid << std::endl;
        is_laid_out ? std::cout << "Sofa is laid out" : std::cout << "Sofa is not laid out";
        std::cout << std::endl;
    }

    void change_position() {
        is_laid_out ? is_laid_out = 0 : is_laid_out = 1;
    }

    int get_length() {
        if (is_laid_out) {
            return length_laid;
        } else {
            return length;
        }
    }
    int get_width() {
        if (is_laid_out) {
            return width_laid;
        } else {
            return width;
        }
    }

    double squire_ratio() {
        return (double)width_laid*length_laid / Sofa::square();
    }
};


int main() {
    Convertible sofa1;
    sofa1.init("Red", 350, 150, 350, 320);
    sofa1.print();
    std::cout << "Current length ans width: " << sofa1.get_length() << "---" << sofa1.get_width() << std::endl << std::endl;
    sofa1.change_position();
    sofa1.print();
    std::cout << "Current length ans width: " << sofa1.get_length() << "---" << sofa1.get_width() << std::endl;

    std::cout << "Squire ratio: " << sofa1.squire_ratio() << std::endl;

    return 0;
}