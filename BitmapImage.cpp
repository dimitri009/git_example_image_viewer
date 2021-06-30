#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), depth(8) {
    buffer = new char[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg" || fileExt == "png") {
        // load image file
        // decompress into buffer
        // more code to handle pixel depth and channels
        // more code to handle the PNG type
        return true;
    }
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}

void BitmapImage::resize(int width, int heigth) {
    if (width>0)
        this->width= width;
    if (heigth>0)
        this->height=heigth;
    // resize the bitmap

}

