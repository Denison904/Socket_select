// #include "Server.hpp"

// int main(){

//     return 0;
// }

#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    printf("Данные доступны.\n");
    // fd_set rfds;
    // struct timeval tv;
    // int retval;
    // /* Ждем, пока на стандартном вводе (fd 0) что-нибудь
    //    появится. */
    // FD_ZERO(&rfds);
    // FD_SET(0, &rfds);
    // /* Ждем не больше пяти секунд. */
    // tv.tv_sec = 5;
    // tv.tv_usec = 0;
    // retval = select(1, &rfds, NULL, NULL, &tv);
    // /* Не полагаемся на значение tv! */
    // if (retval)
    //     printf("Данные доступны.\n");
    //     /* Теперь FD_ISSET(0, &rfds) вернет истинное значение. */
    // else
    //     printf("Данные не появились в течение пяти секунд.\n");
    return 0;
}
