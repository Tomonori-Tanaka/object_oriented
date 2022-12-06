#ifndef ___class_IdNo
#define ___Class_IdNo

class IdNo {
public:
    static int counter;
private:
    int id_no;
public:
    IdNo();
    
    int id() const;
    static int get_max_id();
};

#endif