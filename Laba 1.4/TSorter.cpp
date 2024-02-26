#include "TSorter.h"

void TSorter::sort(Train &train)
{
    Train t1, t2;

    while (!train.isEmpty())
    {
        auto vagon = train.pop();

        switch (vagon)
        {
            case '1':
                t1.push(vagon);
                break;
            case '2':
                t2.push(vagon);
                break;
        }
    }

    std::cout << t1.toString() << std::endl;
    std::cout << t2.toString() << std::endl;
}