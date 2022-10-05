#ifndef DATAPREPARATOR_H
#define DATAPREPARATOR_H

#include <vector>

class datapreparator
{
public:
    datapreparator();

    template<typename T>
    std::vector<T> unpack(std::vector<char> d);

    template<typename T>
    std::vector<char> pack(const std::vector<T>& d);

private:

};

template<typename T>
std::vector<T> datapreparator::unpack(std::vector<char> d)
{
    std::vector<T> ret;
    T* new_t_data_it = reinterpret_cast<T*>(d.data());
    T* new_t_data_end = reinterpret_cast<T*>(d.data() + d.size());
    while(new_t_data_it != new_t_data_end) {
        ret.push_back(*new_t_data_it);
        ++new_t_data_it;
    }
    return ret;
}

template<typename T>
std::vector<char> datapreparator::pack(const std::vector<T> &d)
{

}

#endif // DATAPREPARATOR_H
