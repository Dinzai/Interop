#pragma once

#ifdef __cplusplus
extern "C" {
#endif

struct Generic
{
    int id;
};

Generic make_generic(int id);
int  get_generic(Generic g);


#ifdef __cplusplus
}
#endif