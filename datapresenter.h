#ifndef DATAPRESENTER_H
#define DATAPRESENTER_H
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include "widgetfactory.h"

enum VALUE_DIRRECTION {
    INPUT = 0,
    OUTPUT = 1
};

class datapresenter
{
public:
    datapresenter():
        input_(20),
        output_(10)
    {

    };

    void set_protocol(const std::string&);

    template<typename T>
    void input_data_update(const std::vector<T> & data);



    std::vector<widgetf::FLableEdit> &get_input() ;

    std::vector<widgetf::FLableEdit> &get_output() ;

private:
   std::pair<std::list<std::string>, std::list<std::string>> protocol_;


    void init_widget();
    std::vector<widgetf::FLableEdit> input_;
    std::vector<widgetf::FLableEdit> output_;

};

template<typename T>
void datapresenter::input_data_update(const std::vector<T> & data){

    auto input_it = data.begin();
    for(const auto &type : protocol_.first) {
        if(type == "float"){
            float* data_f;
            std::cout << "old: " << *data_f << std::endl;

            std::memcpy(data_f, (void*)&*input_it, sizeof (float));
            std::advance(input_it, (sizeof (float) / sizeof (T)));
            std::cout << "new: " << *data_f << std::endl;

//QString::fromStdString(std::to_string(*data_f))
//            input_.begin()->edit_->setText("21321");
        }

    }
}



#endif // DATAPRESENTER_H
