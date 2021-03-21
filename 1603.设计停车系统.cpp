/*
 * @lc app=leetcode.cn id=1603 lang=cpp
 *
 * [1603] 设计停车系统
 */

// @lc code=start
class ParkingSystem {
private:
    int m_big = 0;
    int m_medium = 0;
    int m_small = 0;
public:
    ParkingSystem(int big, int medium, int small) {
        m_big = big;
        m_medium = medium;
        m_small = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            return (--m_big >= 0 ? true : false);
        }
        else if(carType == 2){
            return (--m_medium >= 0 ? true : false);
        }
        else if(carType == 3){
            return (--m_small >= 0 ? true : false);
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
// @lc code=end

