#ifndef LABS2_OBJECT_H
#define LABS2_OBJECT_H


class Object {
private:
    int serialNumber;
    static int objectCount;

public:
    Object();

    void displaySerialNumber() const;

    static int getObjectCount();

    ~Object();
};


#endif //LABS2_OBJECT_H
