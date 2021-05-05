#include "package.hpp"

#ifndef OVERNIGHT_H
#define OVERNIGHT_H

class OvernightPackage: public Package { // Class
    private: // access specifier. These attributes can only be accessed within the object itself
        double overnightFee; // attribute double variable, stores the overnightFee

    public: // user can see OvernightPackage infos and can use them
        OvernightPackage(Info &s, Info &r, double o, double cpo, double onf):
            Package(s, r, o, cpo), overnightFee(onf) {}

        void GenInvoice() override; // generates an invoice for user
};
#endif