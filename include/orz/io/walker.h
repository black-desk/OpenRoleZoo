//
// Created by Lby on 2017/7/31.
//

#ifndef ORZ_IO_WALKER_H
#define ORZ_IO_WALKER_H

#include <string>
#include <vector>

namespace orz
{
  std::vector<std::string> FindFiles(const std::string &path);

  std::vector<std::string> FindFiles(
    const std::string &path, std::vector<std::string> &dirs);

  std::vector<std::string> FindFilesRecursively(
    const std::string &path, int depth = -1);

  std::vector<std::string> FindFlodersRecursively(
    const std::string &path, int depth = -1);
}  // namespace orz

#endif  // ORZ_IO_WALKER_H
