#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// Take the reference to change the content
template <typename T>
void swap(T & x, T & y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;
}

// Take parameters by reference instead of copies (also return ref).
// When its for example a big class you wont copy it all the time.
// Make it const because it does not change the content.

// if x is smaller than y (?) return x. otherwise (:), return y.
template <typename MI>
const MI&  min(MI & x, MI & y)
{
    return (x < y ? x : y);
}

template <typename MX>
const MX&  max(MX & x, MX & y)
{
    return (x > y ? x : y);
}

#endif
