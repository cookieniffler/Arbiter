#ifndef __VULKANSETUP_HPP__
#define __VULKANSETUP_HPP__

namespace Arbiter {

bool VulkanInit(const char* glsl_version = nullptr);
void VulkanShutdown();
void VulkanNewFrame();
void VulkanRenderDrawData(/*ImDrawData* draw_data*/);

} // Arbiter

#endif  // __VULKANSETUP_HPP__
