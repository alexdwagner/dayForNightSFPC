
#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include "animatedParameter.h"

class baseScene {
    
public:
    
    virtual void setup(){}
    virtual void update(){}
    virtual void draw(){}
    
    virtual void reset(){}          // this is for scenes that change over time....
    
    baseScene(){};
    ~baseScene(){}
    
    void loadCode( string fileName );
    string getCodeWithParamsReplaced();
    
    ofParameterGroup parameters;    // this is the parameters of your sketch...

    string code;                // this is the code we show
    
    ofRectangle dimensions;     // this is the dimensions of
                                // the surface you are drawing into.
    
    void updateAnimatedParameters();
    vector< animatedParameter* > animatedParameters;
    
};