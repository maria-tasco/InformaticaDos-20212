#ifndef POCILLO_H
#define POCILLO_H


class pocillo
{
private:
    unsigned short int tam[3];
    unsigned char color [3]; //valore RGB
    char * material; //puntero a char
public:
    pocillo(unsigned short int tam, unsigned char col, char* mat); //constructor

    void setColor(unsigned char arr[]);
    void setTam(unsigned short int array[3]);

    char *getMaterial() const;
    void setMaterial();
};

#endif // POCILLO_H
