//Followed Tutorial by Ben McChesney

#ifndef _PARTICLE
#define _PARTICLE

#include "ofMain.h"

class Particle
{
    public :
        Particle() ;
        Particle( ofPoint _position , ofColor _color )
        {
            position = _position ;
            color = _color ;
            velocity = ofPoint ( ofRandom ( -5 , 5 ) , ofRandom ( -5 , 5 ) ) ;
            spawnPoint = _position ;
        }

        ofPoint position , velocity ;
        ofPoint acceleration ;
        ofPoint spawnPoint ;
        ofColor color ;
};
#endif
