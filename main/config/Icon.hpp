#pragma once

#include <string>
#include <utility>

namespace gfx
{
namespace util
{

  static const std::string firstValueIcon = "temperature";
  static const std::string secondValueIcon = "humidity";
  static const std::string vocIcon = "voc";

  static const int SmallIconSize = 25; // 25x25px
  static const int SmallIconInsetToCenter = 8; // Left + right inset to icon in square

  inline static std::pair<std::string, std::string> GetIconFileNames(const std::string iconName)
  {
    const auto activeIcon = "/" + iconName + "_active.jpg";
    const auto inActiveIcon = "/" + iconName + "_inactive.jpg";

    return std::make_pair(activeIcon, inActiveIcon);
  }

  inline static const std::string GetIconFilePath(const std::string name)
  {
    const auto fullPath = "/" + name + ".jpg";
    return fullPath;
  }

} // namespace util
} // namespace gfx
