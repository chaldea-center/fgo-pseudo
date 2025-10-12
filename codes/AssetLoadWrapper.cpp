// local variable allocation has failed, the output may be wrong!
bool AssetLoadWrapper__LoadAssetStorage(
        AssetLoadWrapper_o *this,
        System_String_o *path,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  bool AssetStorage; // w21
  AssetPathLoadCounter_o *pathCounter; // x0

  if ( (byte_4C369DE & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C369DE = 1;
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
      sub_1C32E7C(0);
    AssetPathLoadCounter__AddCount(pathCounter, path, v9);
  }
  return AssetStorage;
}


void AssetLoadWrapper__Release(AssetLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_4C369DF & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C369DF = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, (const MethodInfo *)path);
}


void AssetLoadWrapper__ReleaseAssetStorage(AssetLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  AssetPathLoadCounter_o *pathCounter; // x0

  ((void (__fastcall *)(AssetLoadWrapper_o *, System_String_o *, const MethodInfo *))this->klass->vtable._4_Release.methodPtr)(
    this,
    path,
    this->klass->vtable._4_Release.method);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1C32E7C(0);
  AssetPathLoadCounter__SubCount(pathCounter, path, v5);
}