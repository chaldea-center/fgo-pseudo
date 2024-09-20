// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetLoadWrapper__LoadAssetStorage(
        AssetLoadWrapper_o *this,
        System_String_o *path,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  bool AssetStorage; // w21
  AssetPathLoadCounter_o *pathCounter; // x0

  if ( (byte_4A5A27D & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A27D = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__loadAssetStorage(
                   path,
                   callbackFunc,
                   maxParallelLoad,
                   *(const MethodInfo **)&maxParallelLoad);
  if ( AssetStorage )
  {
    pathCounter = this->fields.pathCounter;
    if ( !pathCounter )
      sub_1B8880C(0LL, v9);
    AssetPathLoadCounter__AddCount(pathCounter, path, v10);
  }
  return AssetStorage;
}


void __fastcall AssetLoadWrapper__Release(AssetLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_4A5A27E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A27E = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, (const MethodInfo *)path);
}


void __fastcall AssetLoadWrapper__ReleaseAssetStorage(
        AssetLoadWrapper_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AssetPathLoadCounter_o *pathCounter; // x0

  ((void (__fastcall *)(AssetLoadWrapper_o *, System_String_o *, void *))this->klass->vtable._4_Release.method)(
    this,
    path,
    this->klass[1]._1.image);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1B8880C(0LL, v5);
  AssetPathLoadCounter__SubCount(pathCounter, path, v6);
}