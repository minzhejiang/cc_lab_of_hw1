#include "ofApp.h"
//apples.load("/Users/wenchihuang/Developer/of_v0.9.8_osx_release 2/homework/hw4/mySketch/apple.png")


ofImage loadImage;
ofImage image;
//--------------------------------------------------------------

bool shouldRemove(Particle&p){
    if(p.pos.x>ofGetWindowWidth())return true;
       else return false;


}
void ofApp::setup(){
    
    ofBackground(255);
    ofSetFrameRate(50);
    ofSetColor(255,0,0);
    ofSetCircleResolution(80);
   image.loadImage("tennis.jpg");
   
  

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(vector<Particle>::iterator it = particles.begin(); it!=particles.end();it++){
        
        (*it).update();

}
    ofRemove(particles, shouldRemove);
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    for (vector<Particle>::iterator it= particles.begin();it!= particles.end();it++){
        (*it).draw();}
    ofSetColor(255, 255, 255);// Why it is needed -see below
    // ÒTransparency

    image.draw(ofGetWindowWidth()/2, ofGetWindowHeight()/2);// Display
    

    }


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    particles.push_back(Particle());
//    trees.push_back(Tree());

    

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
   
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
