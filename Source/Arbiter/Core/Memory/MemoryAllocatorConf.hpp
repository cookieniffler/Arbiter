#ifndef __MEMORYALLOCATORCONF_HPP__
#define __MEMORYALLOCATORCONF_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Memory/AlignedMemory.hpp>
#include <Arbiter/Core/Memory/AlignedMemoryAllocator.hpp>

ARBITER_NAMESPACE_BEGIN

enum class MemoryCategory
{
    MEMORY_GENERAL = 0,
    MEMORY_GEOMETRY = 1,
    MEMORY_ANIMATION = 2,
    MEMORY_SCENE_CONTROL = 3,
    MEMORY_SCENE_OBJECTS = 4,
    MEMORY_RESOURCE = 5,
    MEMORY_RENDERSYSTEM = 6,
    MEMORY_CATEGORYCOUNT = 7
};

class AllocationPolicy {};
template<int Category = MemoryCategory::MEMORY_GENERAL> class AllocatedObject {};

typedef AllocPolicy GeneralAllocPolicy;
typedef AllocPolicy GeometryAllocPolicy;
typedef AllocPolicy AnimationAllocPolicy;
typedef AllocPolicy SceneCtlAllocPolicy;
typedef AllocPolicy SceneObjAllocPolicy;
typedef AllocPolicy ResourceAllocPolicy;
typedef AllocPolicy ScriptingAllocPolicy;
typedef AllocPolicy RenderSysAllocPolicy;

typedef AllocatedObject<> GeneralAllocatedObject;
typedef AllocatedObject<> GeometryAllocatedObject;
typedef AllocatedObject<> AnimationAllocatedObject;
typedef AllocatedObject<> SceneCtlAllocatedObject;
typedef AllocatedObject<> SceneObjAllocatedObject;
typedef AllocatedObject<> ResourceAllocatedObject;
typedef AllocatedObject<> ScriptingAllocatedObject;
typedef AllocatedObject<> RenderSysAllocatedObject;

typedef ScriptingAllocatedObject    AbstractNodeAlloc;
typedef AnimationAllocatedObject    AnimableAlloc;
typedef AnimationAllocatedObject    AnimationAlloc;
typedef GeneralAllocatedObject      ArchiveAlloc;
typedef GeometryAllocatedObject     BatchedGeometryAlloc;
typedef RenderSysAllocatedObject    BufferAlloc;
typedef GeneralAllocatedObject      CodecAlloc;
typedef ResourceAllocatedObject     CompositorInstAlloc;
typedef GeneralAllocatedObject      ConfigAlloc;
typedef GeneralAllocatedObject      ControllerAlloc;
typedef GeometryAllocatedObject     DebugGeomAlloc;
typedef GeneralAllocatedObject      DynLibAlloc;
typedef GeometryAllocatedObject     EdgeDataAlloc;
typedef GeneralAllocatedObject      FactoryAlloc;
typedef SceneObjAllocatedObject     FXAlloc;
typedef GeneralAllocatedObject      ImageAlloc;
typedef GeometryAllocatedObject     IndexDataAlloc;
typedef GeneralAllocatedObject      LogAlloc;
typedef SceneObjAllocatedObject     MovableAlloc;
typedef SceneCtlAllocatedObject     NodeAlloc;
typedef SceneObjAllocatedObject     OverlayAlloc;
typedef RenderSysAllocatedObject    GpuParamsAlloc;
typedef ResourceAllocatedObject     PassAlloc;
typedef GeometryAllocatedObject     PatchAlloc;
typedef GeneralAllocatedObject      PluginAlloc;
typedef GeneralAllocatedObject      ProfilerAlloc;
typedef GeometryAllocatedObject     ProgMeshAlloc;
typedef SceneCtlAllocatedObject     RenderQueueAlloc;
typedef RenderSysAllocatedObject    RenderSysAlloc;
typedef GeneralAllocatedObject      RootAlloc;
typedef ResourceAllocatedObject     ResourceAlloc;
typedef GeneralAllocatedObject      SerializerAlloc;
typedef SceneCtlAllocatedObject     SceneMgtAlloc;
typedef ScriptingAllocatedObject    ScriptCompilerAlloc;
typedef ScriptingAllocatedObject    ScriptTranslatorAlloc;
typedef SceneCtlAllocatedObject     ShadowDataAlloc;
typedef GeneralAllocatedObject      StreamAlloc;
typedef SceneObjAllocatedObject     SubEntityAlloc;
typedef ResourceAllocatedObject     SubMeshAlloc;
typedef ResourceAllocatedObject     TechniqueAlloc;
typedef GeneralAllocatedObject      TimerAlloc;
typedef ResourceAllocatedObject     TextureUnitStateAlloc;
typedef GeneralAllocatedObject      UtilityAlloc;
typedef GeometryAllocatedObject     VertexDataAlloc;
typedef RenderSysAllocatedObject    ViewportAlloc;
typedef SceneCtlAllocatedObject     LodAlloc;
typedef GeneralAllocatedObject      FileSystemLayerAlloc;
typedef GeneralAllocatedObject      StereoDriverAlloc;

ARBITER_NAMESPACE_END

#endif  // __MEMORYALLOCATORCONF_HPP__
