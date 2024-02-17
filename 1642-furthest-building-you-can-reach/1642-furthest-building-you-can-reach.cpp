class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        priority_queue<int> pq;

        int i=0;
        for(;i<n-1;i++){
            if(heights[i+1]>heights[i]){
                if(bricks >= heights[i+1]-heights[i]){
                    bricks -= heights[i+1]-heights[i];
                    pq.push(heights[i+1]-heights[i]);
                }else if(ladders > 0){  //here we are checking if pq.top() is greater than current diff, i.e. we used so much bricks previously instead we can use ladder there and bricks here 
                    if(pq.size()>0 && pq.top()>heights[i+1]-heights[i]){
                        int tmp = pq.top(); 
                        pq.pop();

                        bricks = bricks + tmp - (heights[i+1]-heights[i]);
                        ladders--;
                        pq.push(heights[i+1]-heights[i]);
                    }else{
                        ladders--;
                    }
                }else{
                    return i;
                }
            }
        }
        return i;
    }
};