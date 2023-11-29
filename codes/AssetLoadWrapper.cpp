// attributes: thunk
void __fastcall AssetLoadWrapper___ctor(AssetLoadWrapper_o *this, const MethodInfo *method)
{
  AssetLoadWrapperBase___ctor((AssetLoadWrapperBase_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetLoadWrapper__LoadAssetStorage(
        AssetLoadWrapper_o *this,
        System_String_o *path,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  if ( (byte_40FCA06 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, path);
    byte_40FCA06 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(path, callbackFunc, maxParallelLoad, *(const MethodInfo **)&maxParallelLoad) )
    return 0;
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_B170D4();
  AssetPathLoadCounter__AddCount(pathCounter, path, 0LL);
  return 1;
}


void __fastcall AssetLoadWrapper__Release(AssetLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_40FCA07 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, path);
    byte_40FCA07 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, (const MethodInfo *)path);
}


void __fastcall AssetLoadWrapper__ReleaseAssetStorage(
        AssetLoadWrapper_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  ((void (__fastcall *)(AssetLoadWrapper_o *, System_String_o *, void *))this->klass->vtable._4_Release.method)(
    this,
    path,
    this->klass[1]._1.image);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_B170D4();
  AssetPathLoadCounter__SubCount(pathCounter, path, 0LL);
}