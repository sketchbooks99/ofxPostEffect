//
//  Fold.h
//  ofxPostEffect
//
//  Created by 木内舜司 on 2019/12/06.
//

#ifndef Fold_h
#define Fold_h

class Fold {
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
    int mode;
    ofShader foldShader;
    float weight;
}

#endif /* Fold_h */
