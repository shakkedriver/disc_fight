//
// Created by shakked on 1/12/23.
//

#ifndef UNTITLED11_FIGHTER_H
#define UNTITLED11_FIGHTER_H


class Fighter {
public:



    Fighter(float xPos, float yPos, float radius);

    [[nodiscard]] float getYSpeed() const;



    [[nodiscard]] float getXPos() const;

    [[nodiscard]] float getYPos() const;

    [[nodiscard]] float getXSpeed() const;



    [[nodiscard]] float getRadius() const;


private:

public:
    void setXPos(int xPos);

    void setYPos(int yPos);

    void setXSpeed(int xSpeed);

    void setYSpeed(int ySpeed);

    void setRadius(float radius);

private:
    float xPos;
    float yPos;
    float xSpeed{0};
    float ySpeed{0};
    float radius;



};


#endif //UNTITLED11_FIGHTER_H
