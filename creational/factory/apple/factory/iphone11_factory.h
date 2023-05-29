#ifndef IPHONE11_FACTORY_H
#define IPHONE11_FACTORY_H

#include "iphone_factory.h"

class IPhone11Factory : public IPhoneFactory
{
public:
    std::optional<IPhonePtr> orderIPhone(const std::string& level) const override;
};

#endif // !IPHONE11_FACTORY_H
