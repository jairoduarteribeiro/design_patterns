#ifndef IPHONE11_H
#define IPHONE11_H

#include "iphone.h"

class IPhone11 : public IPhone
{
public:
    void getHardware() const override;
};

#endif // !IPHONE11_H
