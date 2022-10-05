#include "datapresenter.h"

void datapresenter::set_protocol(const std::string & str)
{
    std::uint16_t dir = 0;

    switch (dir) {
    case VALUE_DIRRECTION::INPUT:{
        protocol_.first.push_back("float");
        break;

    }
    case VALUE_DIRRECTION::OUTPUT:{
        protocol_.second.push_back("float");
        break;

    }
    }
}

//todo: разобраться как динамически добавить
void datapresenter::init_widget()
{
//    input_.resize(protocol_.first.size());

//    output_.resize(protocol_.second.size());
//    for(auto it: protocol_.first) {
//        input_.emplace_back();
//    }
//    for(auto it: protocol_.second) {
//        output_.emplace_back(std::move(widgetf::FLableEdit{}));
//    }

}

 std::vector<widgetf::FLableEdit> &datapresenter::get_output()
{
    return output_;
}

 std::vector<widgetf::FLableEdit> &datapresenter::get_input()
{
    return input_;
}

