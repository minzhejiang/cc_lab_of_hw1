#pragma once

#include "ofMain.h"


class Particle{
public:
    Particle(){
        pos.set(0,0,0);
        vel.set(ofRandom(-5,5),ofRandom(-4,-8),0);
    }
    void update(){
        pos+=vel;
        vel.y+=.1;
    }
    void draw(){
       
        ofSetColor(255,0,0);
        ofDrawCircle(pos.x,pos.y,30);
        ofSetColor(137,54,0);
       ofDrawRectangle(pos.x,pos.y-35,5,20);
        ofSetColor(0,100,0);
        ofDrawEllipse(pos.x+10,pos.y-20, 20, 20, 10);
        ofSetColor(0, 100, 0);
        ofDrawRectangle(ofGetWindowWidth(), ofGetWindowHeight()/3, 100, 20);

        
        
    }
    
    ofPoint pos;
    ofVec3f vel;
    
};




class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    vector<Particle> particles; //declare the vector of particles

		
};

    
    
    
    

