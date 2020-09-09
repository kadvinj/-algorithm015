/*方法一：最小堆排O(Nlogk)
1.优先队列 priority_queue
2.最小堆（升序队列）:priority_queue <int,vector<int>,greater<int> > q//本方法用最小堆
3.最大堆（降序队列）:priority_queue <int,vector<int>,less<int> >q
4.优先队列和普通队列的区别：在优先队列中，元素被赋予优先级。当访问元素时，具有最高优先级的元素最先删除，队头用q.top()而不是q.front()
5.本题采用最小堆，若当前出现的元素次数大于优先队列中某个元素的次数，则替换
方法二/方法三：sort时间复杂度O(NlogN)，不符合题意需优于O(NlogN)
1.hashmap nums
2.将map中的key和value保存至vetcor.second和vector.first
3.sort自动比较根据vector.first从小到大排序
4.将k个元素插入nums中
5.取出后k个元素

作者：OrangeMan
链接：https://leetcode-cn.com/problems/top-k-frequent-elements/solution/cjian-ji-dai-ma-by-orangeman-5/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。*/

#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;    

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      vector<int> output;
      unordered_map<int, int> um;
      for (auto &c: nums) um[c]++;
      priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;//greater是最小顶堆
      for (auto &it: um){
        if (pq.size() == k){
            if (it.second > pq.top().first){
                pq.pop();
                pq.push(pair<int,int>(it.second, it.first));
            }
        }
        else{
        //因为是优先队列的比较级先是pair的第一个元素，多以把次数放在前，元素放在后。
            pq.push(pair<int,int>(it.second, it.first));
        }
      }
      while (pq.size()){
            output.push_back(pq.top().second);
            pq.pop();
        }
      reverse(output.begin(), output.end());//因为是最小顶堆，是从小到大的排列，需要反转
      return output;
    }
};



