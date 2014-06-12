#ifndef LUA_CXX_QABSTRACTSOCKET_INCLUDED
#define LUA_CXX_QABSTRACTSOCKET_INCLUDED

#include "../stack.hpp"

class QAbstractSocket;

namespace lua {

void QAbstractSocket_metatable(const lua::index& mt);

template <>
struct Metatable<QAbstractSocket>
{
    static constexpr const char* name = "QAbstractSocket";

    static bool metatable(const lua::index& mt, QAbstractSocket* const)
    {
        lua::QAbstractSocket_metatable(mt);
        return true;
    }
};

}; // namespace lua

extern "C" int luaopen_luacxx_QAbstractSocket(lua::state* const);

#endif // LUA_CXX_QABSTRACTSOCKET_INCLUDED