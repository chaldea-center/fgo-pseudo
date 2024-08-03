void __fastcall SoundLoadWrapper__LoadAudioAssetStorage(
        SoundLoadWrapper_o *this,
        System_String_o *path,
        System_Action_o *callbackFunc,
        int32_t cueType,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  AssetPathLoadCounter_o *pathCounter; // x0

  if ( (byte_49FB548 & 1) == 0 )
  {
    sub_1B640C8(&SoundManager_TypeInfo, path);
    byte_49FB548 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(path, callbackFunc, cueType, 0LL);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1B64324(0LL);
  AssetPathLoadCounter__AddCount(pathCounter, path, v9);
}


void __fastcall SoundLoadWrapper__Release(SoundLoadWrapper_o *this, System_String_o *path, const MethodInfo *method)
{
  if ( (byte_49FB549 & 1) == 0 )
  {
    sub_1B640C8(&SoundManager_TypeInfo, path);
    byte_49FB549 = 1;
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
  const MethodInfo *v5; // x2
  AssetPathLoadCounter_o *pathCounter; // x0

  ((void (__fastcall *)(SoundLoadWrapper_o *, System_String_o *, void *))this->klass->vtable._4_Release.method)(
    this,
    path,
    this->klass[1]._1.image);
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1B64324(0LL);
  AssetPathLoadCounter__SubCount(pathCounter, path, v5);
}