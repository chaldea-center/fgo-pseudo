void SoundLoadWrapper__LoadAudioAssetStorage(
        SoundLoadWrapper_o *this,
        System_String_o *path,
        System_Action_o *callbackFunc,
        int32_t cueType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  AssetPathLoadCounter_o *pathCounter; // x0

  if ( (byte_4CED6A8 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CED6A8 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(path, callbackFunc, cueType, 0);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1C7BD40(0, v9);
  AssetPathLoadCounter__AddCount(pathCounter, path, v10);
}


void SoundLoadWrapper__Release(SoundLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_4CED6A9 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CED6A9 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__releaseAudioAssetStorage(path, 0);
}


void SoundLoadWrapper__ReleaseAudioAssetStorage(
        SoundLoadWrapper_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AssetPathLoadCounter_o *pathCounter; // x0

  ((void (__fastcall *)(SoundLoadWrapper_o *, System_String_o *, const MethodInfo *))this->klass->vtable._4_Release.methodPtr)(
    this,
    path,
    this->klass->vtable._4_Release.method);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1C7BD40(0, v5);
  AssetPathLoadCounter__SubCount(pathCounter, path, v6);
}