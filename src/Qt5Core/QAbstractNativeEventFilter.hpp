#ifndef LUACXX_QABSTRACTNATIVEEVENTFILTER_INCLUDED
#define LUACXX_QABSTRACTNATIVEEVENTFILTER_INCLUDED

#include "../stack.hpp"

class QAbstractNativeEventFilter;

namespace lua {

void QAbstractNativeEventFilter_metatable(const lua::index& mt);

template <>
struct Metatable<QAbstractNativeEventFilter>
{
    static constexpr const char* name = "QAbstractNativeEventFilter";

    static bool metatable(const lua::index& mt, QAbstractNativeEventFilter* const)
    {
        lua::QAbstractNativeEventFilter_metatable(mt);
        return true;
    }
};

}; // namespace lua

extern "C" int luaopen_Qt5Core_QAbstractNativeEventFilter(lua_State* const);

#endif // LUACXX_QABSTRACTNATIVEEVENTFILTER_INCLUDED
