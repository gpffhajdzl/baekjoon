// 2023년 09월 18일 월요일

// 브론즈 랜덤 디펜스

#include <bits/stdc++.h>

using namespace std;

int print_time(int time, int change, char *country)
{
    if (time - change < 100)
    {
        printf("%d in %s", (time + 2400 - change) % 1200,country);
    }
    else
    {
        printf("%d in %s", time - change,country);
    }
}

int main()
{
    int time;
    int h, m;

    scanf("%d", &time);

    print_time(time,0, "Ottawa");
    print_time(time,300,"Victoria");
    print_time(time,200, "Edmonton");
    print_time(time,100, "Winnipeg");
    print_time(time,0, "Toronto");
    print_time(time,2300, "Halifax");
    print_time(time,2250, "St. John's");

    return 0;
}

