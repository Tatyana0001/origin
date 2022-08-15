#pragma once

class Figure {
protected:
    int num = 0;
    Figure(int num, const std::string& name);
public:
    Figure();
    virtual std::string name();
    virtual std::string side();
    virtual std::string angle();
    virtual void print();
};