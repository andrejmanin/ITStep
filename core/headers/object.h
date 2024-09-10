#ifndef TYPE_H
#define TYPE_H
#include <locale>

enum Type {
    NUMBER,
    TEXT,
    BOOL
};

template <typename T>
struct Object {
private:
    int *_id{};
    char *_info{};
    T *_value;
public:
    Object() {
        this->_id = nullptr;
        this->_info = new char[50];
        this->_value = nullptr;
    }

    explicit Object(int id) {
        setID(id);
    }

    void setID(int id) {
        this->_id = (this->_id == nullptr) ? new int(id) : &id;
    }

    void setInfo(const char *buff) {
        this->setInfo = (buff == nullptr) ? "" : buff;
    }

    void setValue(T value) {
        this->_value = &value;
    }

    void getInfo() {
        return this->_info == nullptr ? nullptr : *this->_info;
    }

    int getID() {
        return this->_id == nullptr ? 0 : *this->_id;
    }
};

#endif //TYPE_H
