#ifndef IPHONEX_H
#define IPHONEX_H

#include "iphone.h"

class IPhoneX : public IPhone
{
public:
    void getHardware() const override;
};

#endif // !IPHONEX_H
