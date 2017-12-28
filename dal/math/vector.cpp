//
// Created by Cheng Li on 2017/12/21.
//

#include <dal/platform/platform.hpp>
#include <dal/math/vector.hpp>


namespace vector {
    Vector_<int> UpTo(int n) {
        Vector_<int> ret_val(n);
        for(int i=0; i != n; ++i)
            ret_val[i] = i;
        return ret_val;
    }
}
