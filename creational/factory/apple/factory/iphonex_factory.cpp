#include "iphonex_factory.h"
#include "iphonex.h"
#include "iphonexsmax.h"

std::optional<IPhonePtr> IPhoneXFactory::orderIPhone(const std::string& level) const
{
    if (level == "standard") return std::make_shared<IPhoneX>();
    else if (level == "highEnd") return std::make_shared<IPhoneXSMax>();
    return {};
}
