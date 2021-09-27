#include <iostream>

using namespace std;

int main()
{
        int n;
        float pos=0;
        float neg=0;
        float zero=0;
        cin>>n;
        int a[n];
        double t=n;
        if(0<=n<=100){
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0)
            pos++;
            else if(a[i]<0)
            neg++;
            else
            zero++;
        }
        }
        double add;
        add = pos/t;
        printf("%.6f\n",add);
        double min;
        min = neg/t;
        printf("%.6f\n",min);
        double z;
        z =zero/t;
        printf("%.6f\n",z);
        return 0;
}
