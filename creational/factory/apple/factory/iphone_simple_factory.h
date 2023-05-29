#ifndef IPHONE_SIMPLE_FACTORY_H
#define IPHONE_SIMPLE_FACTORY_H

#include "iphone.h"

#include <memory>
#include <optional>
#include <string>

using IPhonePtr = std::shared_ptr<IPhone>;

class IPhoneSimpleFactory
{
public:
    static std::optional<IPhonePtr> orderIPhone(const std::string& generation, const std::string& level);
};

#endif // !IPHONE_SIMPLE_FACTORY_H
