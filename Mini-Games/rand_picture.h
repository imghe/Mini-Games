#ifndef RAND_PICTURE_H
#define RAND_PICTURE_H

class RAND_PICTURE
{
public:
    RAND_PICTURE();
    char *RandImage();

    char* images[6] = {":/pokerImage/image/poker image/1.png"};
    int index;
};


#endif // RAND_PICTURE_H
