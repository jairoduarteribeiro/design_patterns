#include "iphone11_factory.h"
#include "iphone11.h"
#include "iphone11pro.h"

std::optional<IPhonePtr> IPhone11Factory::orderIPhone(const std::string& level) const
{
    if (level == "standard") return std::make_shared<IPhone11>();
    else if (level == "highEnd") return std::make_shared<IPhone11Pro>();
    return {};
}
