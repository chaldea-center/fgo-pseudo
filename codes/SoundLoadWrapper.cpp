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
  if ( (byte_40F9C9F & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, path);
    byte_40F9C9F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(path, callbackFunc, cueType, *(const MethodInfo **)&cueType);
  AssetLoadWrapperBase__AddLoadCount((AssetLoadWrapperBase_o *)this, path, 0LL);
}


void __fastcall SoundLoadWrapper__Release(SoundLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_40F9CA0 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, path);
    byte_40F9CA0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__releaseAudioAssetStorage(path, (const MethodInfo *)path);
}