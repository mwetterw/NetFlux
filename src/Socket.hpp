#ifndef _SOCKET_HPP_
#define _SOCKET_HPP_

#include "libs.hpp"

namespace NetFlux
{
    class Socket
    {
    public:
        Socket ( );
        Socket ( int socket );
        virtual ~Socket ( );

        inline operator bool ( )
        {
            return ( msocket != INVALID );
        }

        bool close ( );


    protected:
        int msocket;

        static const int INVALID = -1;
    };
}

#endif
