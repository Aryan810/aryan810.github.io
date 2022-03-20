#include <iostream>
#include <cmath>

using namespace std;

double getCircleIntersectionArea(double radiusSmall, double radiusBig, double distanceBtwCenters){
    double& r = radiusSmall;
    double& R = radiusBig;
    double& s = distanceBtwCenters;
    double p = (180*r*R);
        if (s <= (r+R)){
            if (s > R){
                return ((r*r*((s*s*asin(R/s)*180) - p)) + (R*R*((s*s*asin(r/s)*180) - p)))/(180*s*s);
            }else{
                if (s <= r){
                    return 2*acos(0.0)*r*r;
                }else{
                    
                }
            }
        }else{
            return 0.0;
        }
}

class CircleIntersectionArea{
    float r, R, s; 
    double pi = 2*acos(0.0);
    double area;

    double inverseSin(double value){
        return asin(value)*180/pi;
    }

    double getArea(){
        double p = (180*r*R);
        if (s <= (r+R)){
            return ((r*r*((s*s*pi*inverseSin(R/s)) - p)) + (R*R*((s*s*pi*inverseSin(r/s)) - p)))/(180*s*s);
        }else{
            return 0.0;
        }
    }

    public:

        CircleIntersectionArea(){
            r = 1.0;
            R = 1.0;
            s = 1.0;
        };

        CircleIntersectionArea(float radiusSmall, float radiusBig, float distanceBtwCenters){
            r = radiusSmall;
            R = radiusBig;
            s = distanceBtwCenters;
            area = getArea();
        }

        void setParams(float radiusSmall, float radiusBig, float distanceBtwCenters){
            r = radiusSmall;
            R = radiusBig;
            s = distanceBtwCenters;
            area = getArea();
        }

        double getIntersectionArea(){return area;}
};

int main(int argc, char const *argv[]){
    double a = getCircleIntersectionArea(5, 5, 5.01);
    cout << a;
    return 0;
}