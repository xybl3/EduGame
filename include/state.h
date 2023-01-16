#ifndef STATE_H
#define STATE_H

class State
{
public:
    virtual void Update() = 0;
    virtual void Draw() = 0;
};

#endif