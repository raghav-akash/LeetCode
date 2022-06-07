class ParkingSystem {
public:
    vector<int> vc;
    ParkingSystem(int big, int medium, int small) 
    {
        vc={big,medium,small};
    }
    
    bool addCar(int carType) {
        if(vc[carType-1])
        {
            vc[carType-1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */