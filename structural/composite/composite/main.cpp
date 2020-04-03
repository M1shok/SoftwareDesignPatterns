#include <iostream>
#include "jsonarray.h"
#include "jsonobject.h"
#include "jsonvalue.h"

int main()
{
    JsonObject wrapper;

    JsonArray array;
    for (int i = 0; i < 5; ++i)
    {
        JsonEntity * val = new JsonValue(std::to_string(i));
        array.push_back(val);
    }

    JsonObject object;
    JsonEntity * val1 = new JsonValue("value1");
    JsonEntity * val2 = new JsonValue("value2");
    object.insert("key1", val1);
    object.insert("key2", val2);

    wrapper.insert("object", &object);
    wrapper.insert("array", &array);

    std::cout << wrapper.toString() << std::endl;

    return 0;
}
