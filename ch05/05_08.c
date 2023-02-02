#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137; //1公里的英里数

int main()
{
    double distk, distm;//距离 km ml
    double rate;//速度 英里/小时
    int min, sec;
    int time;
    double mtime;
    int mmin, msec;

    printf("Convert your time for a metric race\n");
    printf("to a time for running a mile and to your average ");
    printf("speed in miles per hour.\n");
    printf("Please enter in kilometers, the distance run.\n");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin enter the minutes\n");
    scanf("%d", &min);
    printf("next enter the seconds.\n");   
    scanf("%d", &sec);

    time = S_PER_M * min +sec;      //时间转化成秒
    distm = M_PER_K * distk;        //公里转化成英里
    rate = distm / time * S_PER_H;  //英里/小时
    mtime = (double) time / distm;  //跑一英里需要的时间
    mmin = (int) mtime / S_PER_M; 
    msec = (int) mtime % S_PER_M;

    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n ", distk, distm, min, sec);
    printf("The pace corresponds to running a mile in %d min,%d sec.\n", mmin, msec);
    printf("Your average speed was %1.2f mph.\n", rate);

    return 0;
}