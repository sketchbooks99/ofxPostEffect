//
//  Bloom.h
//  ofxPostEffect
//
//  Created by 木内舜司 on 2019/12/05.
//

#ifndef Bloom_h
#define Bloom_h

class Bloom {
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
    ofShader bloomShader;
    float weight;
}

#endif /* Bloom_h */
