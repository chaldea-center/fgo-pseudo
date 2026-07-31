bool AssetLoadWrapper__LoadAssetStorage(
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

  if ( (byte_5937667 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5937667 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path, callbackFunc);
  AssetStorage = AssetManager__loadAssetStorage(path, callbackFunc, maxParallelLoad, 0, 0);
  if ( AssetStorage )
  {
    pathCounter = this->fields.pathCounter;
    if ( !pathCounter )
      sub_21FFECC(0, v9);
    AssetPathLoadCounter__AddCount(pathCounter, path, v10);
  }
  return AssetStorage;
}


void AssetLoadWrapper__Release(AssetLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_5937668 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5937668 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path, method);
  AssetManager__releaseAssetStorage(path, 0);
}


void AssetLoadWrapper__ReleaseAssetStorage(AssetLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AssetPathLoadCounter_o *pathCounter; // x0

  ((void (__fastcall *)(AssetLoadWrapper_o *, System_String_o *, const MethodInfo *))this->klass->vtable._4_Release.methodPtr)(
    this,
    path,
    this->klass->vtable._4_Release.method);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_21FFECC(0, v5);
  AssetPathLoadCounter__SubCount(pathCounter, path, v6);
}