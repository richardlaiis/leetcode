// 1845. Seat Reservation Manager
class SeatManager {
    priority_queue<int, vector<int>, greater<int>> seats;
    int marker;
public:
    SeatManager(int n) {
        marker = 1;
    }
    
    int reserve() {
        if (!seats.empty()) {
            int res = seats.top();
            seats.pop();
            return res;
        }
        return marker++;
    }
    
    void unreserve(int seatNumber) {
        seats.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
