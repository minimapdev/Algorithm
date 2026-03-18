#include <iostream>
#include <vector>
using namespace std;

template <typename T, typename Comp> class PriorityQueue
{
  private:
    vector<T> heap;
    Comp comp;

    int GetParentIdx(int idx)
    {
        return idx / 2;
    }
    int GetLChildIdx(int idx)
    {
        return idx * 2;
    }
    int GetRChildIdx(int idx)
    {
        return idx * 2 + 1;
    }

    int GetHiPriChildIdx(int idx)
    {
        int left = GetLChildIdx(idx);
        if (left >= heap.size())
        {
            return 0;
        }
        int right = GetRChildIdx(idx);
        if (right >= heap.size())
        {
            return left;
        }

        return (comp(heap[left], heap[right]) ? right : left);
    }

  public:
    PriorityQueue()
    {
        heap.push_back(T());
    }
    bool empty()
    {
        return heap.size() == 1;
    }
    int size() const
    {
        return heap.size() - 1;
    }
    void push(const T &data)
    {
        heap.push_back(data);
        int idx = heap.size() - 1;

        while (idx > 1)
        {
            int parent = GetParentIdx(idx);

            if (comp(heap[parent], data))
            {
                heap[idx] = heap[parent];
                idx = parent;
            }
            else
                break;
        }
        heap[idx] = data;
    }
    T pop()
    {
        if (empty())
            return T();

        T retData = heap[1];
        T lastElem = heap.back();
        heap.pop_back();

        if (empty())
        {
            return retData;
        }

        int parentIdx = 1;
        int childIdx;

        while ((childIdx = GetHiPriChildIdx(parentIdx)) != 0)
        {
            if (!comp(lastElem, heap[childIdx]))
                break;
            heap[parentIdx] = heap[childIdx];
            parentIdx = childIdx;
        }
        heap[parentIdx] = lastElem;
        return retData;
    }
};

struct MaxComp
{
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    PriorityQueue<int, MaxComp> pq;

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