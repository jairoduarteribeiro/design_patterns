#ifndef IPHONE_FACTORY_H
#define IPHONE_FACTORY_H

#include "iphone.h"

#include <memory>
#include <optional>
#include <string>

using IPhonePtr = std::shared_ptr<IPhone>;

class IPhoneFactory
{
public:
    virtual std::optional<IPhonePtr> orderIPhone(const std::string& level) const = 0;
};

#endif // !IPHONE_FACTORY_H
