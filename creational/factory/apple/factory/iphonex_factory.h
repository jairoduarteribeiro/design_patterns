#ifndef IPHONEX_FACTORY_H
#define IPHONEX_FACTORY_H

#include "iphone_factory.h"

class IPhoneXFactory : public IPhoneFactory
{
public:
    std::optional<IPhonePtr> orderIPhone(const std::string& level) const override;
};

#endif // !IPHONEX_FACTORY_H
