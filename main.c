//
//  main.c
//  AT-AT Imperial Walker
//
//  Created by Niccolo Pietro Giovanni Porcari on 6/14/14.
//  Copyright (c) 2014 NickTheInsane. All rights reserved.
//

#include <stdio.h>
//#include microcontroller main library(probably Mbed)

//General Movement
void goForward();
void comeToHalt();
void turnLeft();
void turnRigth();
void goBack();

//Head movement
void moveX();
void moveY();
void moveGuns();

int main()
{
    // get Data from:
    
    // Ultrasonic sensor (embed in main chassis in the front (maybe one in the back as well?))
    // Should use Analog input to determine distance (max is about 26 to 29" depending on the model, but min is almost universally 6")
    
    // motors (get back info from legs to acertain position/complications in motion (i.e. obstacles that aer preventing the object from moving).
    
    // wifi commands (???)
    
    
    // Movement:    /* All walking funtions should be called by the chip on sensor data Details below the function call */
    
        // goForward()
    
        // turnLeft()
    
        // turnRigth()
    
        // goBack()
    
        //comeToHalt()
    
    
    
    // Head control:
    
        // moveX()
    
        // moveY()
    
        // moveGuns() ?????
    
    return 0;
}

void goForward()
{
    /*
     Should correspond to commands to the four motors (servos?) to move w/ proper timing.
     The function should be called continuously depending on other sensor data. It should therefore be implemented within
     the while loop, not as a loop itself.
     */
 
}

void comeToHalt()
{
    /*
     Self explanatory: should be called if the machine encounters some difficulty, or it receives the signal to do so.
     (wireless?)
     */
}

void turnLeft()
{
    /*
     Should correspond to commands to four motors to turn the machine to the left by about 5 deg. Should be implemented only if the sensor data requires movement to the left (i.e. to get around an obstacle).
     */
}

void turnRigth()
{
    /*
     Should correspond to commands to four motors to turn the machine to the right by about 5 deg. Should be implemented only if the sensor data requires movement to the right (i.e. to get around an obstacle).
     */
}

void goBack()
{
    /*
     Should correspond to commands to four motors to go into reverse (backwards). Should be implemented only if the sensor data requires movement backwards (i.e. to get around an obstacle). Should alos be implemented if the "ground" disappears up ahead.
     */
    
}

void moveX()
{
    
}

void moveY()
{
    
}

void moveGuns()
{
    
}
