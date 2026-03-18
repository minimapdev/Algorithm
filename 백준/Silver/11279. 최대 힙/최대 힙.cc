#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue
{
  private:
    vector<int> heap;
    int GetParentIndex(int idx)
    {
        return idx / 2;
    }
    int GetLChildIndex(int idx)
    {
        return idx * 2;
    }
    int GetRChildIndex(int idx)
    {
        return idx * 2 + 1;
    }
    int GetHiPriChildIndex(int idx)
    {
        int left = GetLChildIndex(idx);
        if (left >= heap.size())
        {
            return 0;
        }

        int right = GetRChildIndex(idx);
        if (right >= heap.size())
        {
            return left;
        }

        if (heap[left] > heap[right])
            return left;
        else
            return right;
    }

  public:
    PriorityQueue()
    {
        heap.push_back(0);
    }
    bool empty() const
    {
        return heap.size() == 1;
    }
    void push(int n)
    {
        heap.push_back(n);
        int idx = heap.size() - 1;

        while (idx > 1)
        {
            int parent = GetParentIndex(idx);

            if (heap[parent] < n)
            {
                heap[idx] = heap[parent];
                idx = parent;
            }
            else
                break;
        }
        heap[idx] = n;
    }
    int pop()
    {
        if (empty())
            return 0;
        int retData = heap[1];
        int lastElem = heap.back();
        heap.pop_back();

        if (empty())
        {
            return retData;
        }
        int parentIdx = 1;
        int childIdx;

        while ((childIdx = GetHiPriChildIndex(parentIdx)) != 0)
        {
            if (lastElem >= heap[childIdx])
                break;

            heap[parentIdx] = heap[childIdx];
            parentIdx = childIdx;
        }
        heap[parentIdx] = lastElem;
        return retData;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    PriorityQueue pq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            cout << pq.pop() << '\n';
        }
        else
        {
            pq.push(x);
        }
    }

    return 0;
}