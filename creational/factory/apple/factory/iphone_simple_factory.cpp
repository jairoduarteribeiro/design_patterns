#include "iphone_simple_factory.h"
#include "iphonex.h"
#include "iphonexsmax.h"
#include "iphone11.h"
#include "iphone11pro.h"

std::optional<IPhonePtr> IPhoneSimpleFactory::orderIPhone(const std::string& generation, const std::string& level)
{
    if (generation == "X")
    {
        if (level == "standard") return std::make_shared<IPhoneX>();
        else if (level == "highEnd") return std::make_shared<IPhoneXSMax>();
    }
    else if (generation == "11")
    {
        if (level == "standard") return std::make_shared<IPhone11>();
        else if (level == "highEnd") return std::make_shared<IPhone11Pro>();
    }
    return {};
}
