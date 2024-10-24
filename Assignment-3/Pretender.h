#ifndef PRETENDER_H
#define PRETENDER_H

#include "Transformer.h"

class Pretender : public Transformer {
public:
    Pretender();
    bool scout();
    uint getRange() const;
    void setRange(uint range);
};

#endif // PTETENDER_H