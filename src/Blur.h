//
//  Blur.h
//  ofxPostEffect
//
//  Created by 木内舜司 on 2019/12/05.
//

#ifndef Blur_h
#define Blur_h

class Blur {
public:
    void allocate(int width, int height);
    void setup();
    void begin();
    void end();
    void draw(int x, int y);
    void draw(int x, int y, int width, int height);
    void setupShaders();
private:
    ofFbo target;
    ofShader blurShader;
    float weight;
}

#endif /* Blur_h */
