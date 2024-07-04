void __fastcall SoundLoadWrapper__LoadAudioAssetStorage(
        SoundLoadWrapper_o *this,
        System_String_o *path,
        System_Action_o *callbackFunc,
        int32_t cueType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  AssetPathLoadCounter_o *pathCounter; // x0

  if ( (byte_48E1986 & 1) == 0 )
  {
    sub_1B00CCC(&SoundManager_TypeInfo, path);
    byte_48E1986 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(path, callbackFunc, cueType, 0LL);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1B00F28(0LL, v9);
  AssetPathLoadCounter__AddCount(pathCounter, path, v10);
}


void __fastcall SoundLoadWrapper__Release(SoundLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_48E1987 & 1) == 0 )
  {
    sub_1B00CCC(&SoundManager_TypeInfo, path);
    byte_48E1987 = 1;
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AssetPathLoadCounter_o *pathCounter; // x0

  ((void (__fastcall *)(SoundLoadWrapper_o *, System_String_o *, void *))this->klass->vtable._4_Release.method)(
    this,
    path,
    this->klass[1]._1.image);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1B00F28(0LL, v5);
  AssetPathLoadCounter__SubCount(pathCounter, path, v6);
}