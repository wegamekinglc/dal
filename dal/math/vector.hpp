//
// Created by Cheng Li on 2017/12/21.
//

#pragma once

#include <vector>
#include <functional>

template<class E_>
class Vector_ : private std::vector<E_> {
    typedef std::vector<E_> base_t;
public:
    Vector_() : base_t() {}

    explicit Vector_(int size) : base_t(size) {}

    Vector_(int size, const E_ &fill) : base_t(size, fill) {}

    template<class I_>
    Vector_(I_ start, I_ end): base_t(start, end) {}

    Vector_(const std::initializer_list<E_> &args) : base_t(args) {}

    void Swap(Vector_<E_> *other) { base_t::swap(*other); }

    void Fill(const E_ &val) { std::fill(begin(), end(), val); }

    void Resize(int new_size) { base_t::resize(new_size, E_()); }

    template<class T_>
    void operator*=(const T_ &scale) {
        std::transform(begin(), end(), begin(), std::bind(std::multiplies<E_>(), std::placeholders::_1, scale));
    }

    template<class T_>
    void operator+=(const T_ &shift) {
        std::transform(begin(), end(), begin(), std::bind(std::plus<E_>(), std::placeholders::_1, shift));
    }

    template<class T_>
    void operator-=(const T_ &shift) {
        std::transform(begin(), end(), begin(), std::bind(std::minus<E_>(), std::placeholders::_1, shift));
    }

    template<class T_>
    void operator+=(const Vector_<T_> &other) {
        std::transform(begin(), end(), other.begin(), begin(), std::plus<E_>());
    }

    template<class T_>
    void operator-=(const Vector_<T_> &other) {
        std::transform(begin(), end(), other.begin(), begin(), std::minus<E_>());
    }

    template<class I_>
    void Assign(I_ begin, I_ end) { base_t::assign(begin, end); }

    template<class I_>
    void Append(I_ iBegin, I_ iEnd) { base_t::insert(end(), iBegin, iEnd); }

    template<class C_>
    void Append(const C_ &other) { base_t::insert(end(), other.begin(), other.end()); }

    bool operator==(const Vector_<E_> &rhs) const;

    bool operator!=(const Vector_<E_> &rhs) const;

    using typename std::vector<E_>::iterator;
    using typename std::vector<E_>::const_iterator;
    using typename std::vector<E_>::reference;
    using typename std::vector<E_>::const_reference;
    using typename std::vector<E_>::value_type;

    using std::vector<E_>::size;
    using std::vector<E_>::empty;
    using std::vector<E_>::operator[];
    using std::vector<E_>::begin;
    using std::vector<E_>::end;
    using std::vector<E_>::rbegin;
    using std::vector<E_>::rend;
    using std::vector<E_>::front;
    using std::vector<E_>::back;
    using std::vector<E_>::erase;
    using std::vector<E_>::push_back;
    using std::vector<E_>::pop_back;
    using std::vector<E_>::reserve;
    using std::vector<E_>::clear;
};


namespace {
    template<class C1_, class C2_>
    bool EqualElements(const C1_ &lhs, const C2_ &rhs) {
        for (auto pl = lhs.begin(), pr = rhs.begin(); pl != lhs.end(); ++pl, ++pr)
            if (*pl != *pr)
                return false;
        return true;
    }

    template<class E_>
    bool Equal(const Vector_<E_> &lhs, const Vector_<E_> &rhs) {
        return lhs.size() == rhs.size() && EqualElements(lhs, rhs);
    }
}


template<class E_>
bool Vector_<E_>::operator==(const Vector_<E_> &rhs) const { return Equal(*this, rhs); }

template<class E_>
bool Vector_<E_>::operator!=(const Vector_<E_> &rhs) const { return !Equal(*this, rhs); }