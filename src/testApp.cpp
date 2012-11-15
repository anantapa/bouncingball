#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetCircleResolution(100);
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    
    ofSetVerticalSync(true);
    
    xPos = 100;
    yPos = 100;
    xSpeed = 2;
    ySpeed = 1;
    
   

}

//--------------------------------------------------------------
void testApp::update(){
    
    xPos +=xSpeed;
    yPos +=ySpeed;
    
    if (xPos>=ofGetWidth() || xPos<=0) {
        xSpeed = xSpeed*-1;
    }
    if (yPos>=ofGetHeight() || yPos <=0) {
        ySpeed = ySpeed*-1;
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(50,100,150);
    ofCircle(xPos, yPos, 30);
    
    
    
 

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}