void __fastcall SoundLoadWrapper___ctor(SoundLoadWrapper_o *this, const MethodInfo *method)
{
  AssetLoadWrapperBase___ctor((AssetLoadWrapperBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLoadWrapper__LoadAudioAssetStorage(
        SoundLoadWrapper_o *this,
        System_String_o *path,
        System_Action_o *callbackFunc,
        int32_t cueType,
        const MethodInfo *method)
{
  if ( (byte_4350A87 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4350A87 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(path, callbackFunc, cueType, *(const MethodInfo **)&cueType);
  AssetLoadWrapperBase__AddLoadCount((AssetLoadWrapperBase_o *)this, path, 0LL);
}


void __fastcall SoundLoadWrapper__Release(SoundLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_4350A88 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4350A88 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__releaseAudioAssetStorage(path, (const MethodInfo *)path);
}


void __fastcall SoundLoadWrapper__ReleaseAudioAssetStorage(
        SoundLoadWrapper_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  ((void (__fastcall *)(SoundLoadWrapper_o *, System_String_o *, void *))this->klass->vtable._4_Release.method)(
    this,
    path,
    this->klass[1]._1.image);
  AssetLoadWrapperBase__SubLoadCount((AssetLoadWrapperBase_o *)this, path, 0LL);
}