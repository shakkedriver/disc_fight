//
// Created by shakked on 1/12/23.
//

#include "Fighter.h"
Fighter::Fighter(float xPos,float yPos,float radius) {
    this->radius = radius;
    this->xPos = xPos;
    this->yPos = yPos;
    this->xSpeed = 0;
    this->ySpeed = 0;





}

int Fighter::getYSpeed() const {
    return ySpeed;
}


int Fighter::getXPos() const {
    return xPos;
}

int Fighter::getYPos() const {
    return yPos;
}

int Fighter::getXSpeed() const {
    return xSpeed;
}





float Fighter::getRadius() const {
    return radius;
}

void Fighter::setXPos(int xPos) {
    Fighter::xPos = xPos;
}

void Fighter::setYPos(int yPos) {
    Fighter::yPos = yPos;
}

void Fighter::setXSpeed(int xSpeed) {
    Fighter::xSpeed = xSpeed;
}

void Fighter::setYSpeed(int ySpeed) {
    Fighter::ySpeed = ySpeed;
}

void Fighter::setRadius(float radius) {
    Fighter::radius = radius;
}
