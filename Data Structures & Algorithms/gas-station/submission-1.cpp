class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int totgas = 0;
       int totcost = 0;
       int n = gas.size();
       for(int val :gas){
        totgas +=val;
       } 
       for(int val : cost){
        totcost +=val;
       }

       if(totgas<totcost){
        return -1;
       }

       int start = 0;
       int currgas = 0;
       for(int i = 0; i < n; i++){
            currgas += (gas[i] - cost[i]);
            if(currgas<0){
                start = i+1;
                currgas = 0;
            }
       }
       return start;
    }
};
