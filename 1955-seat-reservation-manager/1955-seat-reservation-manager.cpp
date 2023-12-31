class SeatManager {
public:
    priority_queue <int, vector<int>, greater<int>> gp;
    SeatManager(int n) {
        while(n) gp.push(n--);
    }
    int reserve() {
        int x=gp.top();
        gp.pop();
        return x;
    }
    
    void unreserve(int seatNumber) {
        gp.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */