#ifndef IPHONE_H
#define IPHONE_H

class IPhone
{
public:
    virtual void getHardware() const = 0;
    void assemble() const;
    void certificates() const;
    void pack() const;
};

#endif // !IPHONE_H
