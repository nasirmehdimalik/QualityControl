///
/// \file   SkeletonCheck.h
/// \author Barthelemy von Haller
///

#ifndef QC_MODULE_SKELETON_SKELETONCHECK_H
#define QC_MODULE_SKELETON_SKELETONCHECK_H

#include "QualityControl/MonitorObject.h"
#include "QualityControl/Quality.h"
#include "QualityControl/CheckInterface.h"

namespace o2 {
namespace quality_control_modules {
namespace skeleton {

/// \brief  Check whether a plot is empty or not.
///
/// \author Barthelemy von Haller
class SkeletonCheck : public o2::quality_control::checker::CheckInterface
{
  public:
    /// Default constructor
    SkeletonCheck();
    /// Destructor
    ~SkeletonCheck() override;

    // Override interface
    void configure(std::string name) override;
    Quality check(const MonitorObject *mo) override;
    void beautify(MonitorObject *mo, Quality checkResult = Quality::Null) override;
    std::string getAcceptedType() override;

  ClassDefOverride(SkeletonCheck, 1);
};

} // namespace skeleton
} // namespace quality_control_modules
} // namespace o2

#endif // QC_MODULE_SKELETON_SKELETONCHECK_H
