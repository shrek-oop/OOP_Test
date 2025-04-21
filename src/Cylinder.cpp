# ifndef CYLINDER_CPP
# define CYLINDER_CPP
# include <iomanip>
# include "Cylinder.h"
# include <bits/stdc++.h>
double Cylinder :: SurfaceArea(){
    double sa ;
    sa = 2*M_PI*radius*radius + 2*M_PI*radius*height ;
    return sa ;
}

double Cylinder :: Volume(){

    double v ;
    v = M_PI*radius*radius*height  ;
    return v ;
}

double Cylinder :: Circumference(){

     double c ;
     c = 2*M_PI*radius ;
     return c;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
        in >> cldr.radius >> cldr.height ;
    return in ;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    
    out << "Circumference: " << fixed << setprecision(3) << cldr.Circumference() << endl ;
    out << "SurfaceArea: " << fixed << setprecision(3) << cldr.SurfaceArea() << endl ;
    out << "Volume: " << fixed << setprecision(3) << cldr.Volume() << endl ;
    return out;
}

# endif
