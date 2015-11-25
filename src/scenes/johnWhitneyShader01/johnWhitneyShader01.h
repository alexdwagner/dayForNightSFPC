#pragma once

#include "ofMain.h"
#include "baseScene.h"

class johnWhitneyShader01 : public baseScene {
    
public:
    
    void setup();
    void update();
    void draw();
    
    ofShader shader;
    ofFbo fbo;
    
    animatedParameter time, vertScale;
};