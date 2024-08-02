#include "dataloader/dataloader.hpp"
#include "viewer/viewer.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    const std::string &scanfile(argv[1]);

    dataset::LaserScanDataset pointcloud_set(scanfile);

    auto source_scan = pointcloud_set[0];
    std::cout << "Total points in the source scan: " << source_scan.size() << std::endl;
    viewCloud(source_scan);

    auto target_scan = pointcloud_set[1];
    std::cout << "Total points in the target scan: " << target_scan.size() << std::endl;
    viewCloud(target_scan);
    
    return 0;
}