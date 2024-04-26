#ifndef MARU_MARUMEMMACRO_H
#define MARU_MARUMEMMACRO_H

#include <memory>

namespace MaruMemMacro
{
    template<typename T, typename... Args>
    std::shared_ptr<T> NewObject(Args&&... args) {
        return std::make_shared<T>(std::forward<Args>(args)...);
    }
}

#endif //MARU_MARUMEMMACRO_H
