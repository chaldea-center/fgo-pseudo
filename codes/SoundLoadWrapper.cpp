void __fastcall SoundLoadWrapper___ctor(SoundLoadWrapper_o *this, const MethodInfo *method)
{
  AssetLoadWrapperBase___ctor((AssetLoadWrapperBase_o *)this, 0LL);
}


void __fastcall SoundLoadWrapper__LoadAudioAssetStorage(
        SoundLoadWrapper_o *this,
        System_String_o *path,
        System_Action_o *callbackFunc,
        int32_t cueType,
        const MethodInfo *method)
{
  if ( (byte_4A5A282 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5A282 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(path, callbackFunc, cueType, 0LL);
  AssetLoadWrapperBase__AddLoadCount((AssetLoadWrapperBase_o *)this, path, 0LL);
}


void __fastcall SoundLoadWrapper__Release(SoundLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_4A5A283 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5A283 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__releaseAudioAssetStorage(path, 0LL);
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