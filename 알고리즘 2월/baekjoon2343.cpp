#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> ray(N);
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> ray[i];
        sum += ray[i];
    }

    int left = *max_element(ray.begin(), ray.end());
    int right = sum;
    int mid;

    int ans = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;

        int time = 0;
        int lecture_count = 1;

        for (int i = 0; i < N; i++)
        {
            if (time + ray[i] > mid)
            {
                lecture_count++;
                time = 0;
            }
            time += ray[i];
        }

        if (lecture_count > M)
        {
            left = mid + 1;
        }
        else
        {
            ans = mid;
            right = mid - 1;
        }
    }

    cout << ans;


    return 0;
}