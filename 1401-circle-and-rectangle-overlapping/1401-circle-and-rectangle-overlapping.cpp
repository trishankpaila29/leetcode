class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter,
                      int x1, int y1, int x2, int y2) {

        int px = max(x1, min(xCenter, x2));
        int py = max(y1, min(yCenter, y2));

        long long dx = px - xCenter;
        long long dy = py - yCenter;

        return dx * dx + dy * dy <= 1LL * radius * radius;
    }
};