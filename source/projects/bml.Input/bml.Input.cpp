
#include "c74_min.h"  // Must include to access min devkit
#include <sstream>  // String stream

namespace mindev = c74::min;  

class BMLInput : public mindev::object<BMLInput> {
public:

    BMLInput() {}
    MIN_DESCRIPTION	{ "" };  // Description of the object
    MIN_TAGS		{ "" };  // Any tags to include
    MIN_AUTHOR		{ "" };  // Author of the objectcmake 
    MIN_RELATED		{ "" };  // Related Max Objects

private:
    mindev::string m_name;
};


MIN_EXTERNAL(BMLInput);  // Wrap the class name in the MIN_EXTERNAL macro
