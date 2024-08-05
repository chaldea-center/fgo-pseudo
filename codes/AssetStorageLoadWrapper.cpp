void __fastcall AssetStorageLoadWrapper___ctor(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetLoadWrapperBase_o *v4; // x20
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  AssetLoadWrapperBase_o *v8; // x20
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FD642 & 1) == 0 )
  {
    sub_1B64870(&AssetLoadWrapper_TypeInfo, method);
    sub_1B64870(&SoundLoadWrapper_TypeInfo, v3);
    byte_49FD642 = 1;
  }
  v4 = (AssetLoadWrapperBase_o *)sub_1B64ABC(AssetLoadWrapper_TypeInfo);
  AssetLoadWrapperBase___ctor(v4, v5);
  this->fields.assetManagerWrapper = (struct AssetLoadWrapper_o *)v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v6, v7);
  v8 = (AssetLoadWrapperBase_o *)sub_1B64ABC(SoundLoadWrapper_TypeInfo);
  AssetLoadWrapperBase___ctor(v8, v9);
  this->fields.soundManagerWrapper = (struct SoundLoadWrapper_o *)v8;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.soundManagerWrapper, (int32_t)v8, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetStorageLoadWrapper__LoadAssetStorage(
        AssetStorageLoadWrapper_o *this,
        System_String_o *path,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  AssetLoadWrapper_o *assetManagerWrapper; // x0

  assetManagerWrapper = this->fields.assetManagerWrapper;
  if ( !assetManagerWrapper )
    sub_1B64ACC(0LL, path);
  return AssetLoadWrapper__LoadAssetStorage(assetManagerWrapper, path, callbackFunc, maxParallelLoad, method);
}


void __fastcall AssetStorageLoadWrapper__LoadAudioAssetStorage(
        AssetStorageLoadWrapper_o *this,
        System_String_o *path,
        System_Action_o *callbackFunc,
        int32_t cueType,
        const MethodInfo *method)
{
  SoundLoadWrapper_o *soundManagerWrapper; // x0

  soundManagerWrapper = this->fields.soundManagerWrapper;
  if ( !soundManagerWrapper )
    sub_1B64ACC(0LL, path);
  SoundLoadWrapper__LoadAudioAssetStorage(soundManagerWrapper, path, callbackFunc, cueType, method);
}


void __fastcall AssetStorageLoadWrapper__ReleaseAll(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  AssetLoadWrapperBase_o *assetManagerWrapper; // x0

  assetManagerWrapper = (AssetLoadWrapperBase_o *)this->fields.assetManagerWrapper;
  if ( !assetManagerWrapper
    || (AssetLoadWrapperBase__ReleaseAll(assetManagerWrapper, method),
        (assetManagerWrapper = (AssetLoadWrapperBase_o *)this->fields.soundManagerWrapper) == 0LL) )
  {
    sub_1B64ACC(assetManagerWrapper, method);
  }
  AssetLoadWrapperBase__ReleaseAll(assetManagerWrapper, method);
}


void __fastcall AssetStorageLoadWrapper__ReleaseAssetStorage(
        AssetStorageLoadWrapper_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetLoadWrapper_o *assetManagerWrapper; // x0

  assetManagerWrapper = this->fields.assetManagerWrapper;
  if ( !assetManagerWrapper )
    sub_1B64ACC(0LL, path);
  AssetLoadWrapper__ReleaseAssetStorage(assetManagerWrapper, path, method);
}


void __fastcall AssetStorageLoadWrapper__ReleaseAudioAssetStorage(
        AssetStorageLoadWrapper_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  SoundLoadWrapper_o *soundManagerWrapper; // x0

  soundManagerWrapper = this->fields.soundManagerWrapper;
  if ( !soundManagerWrapper )
    sub_1B64ACC(0LL, path);
  SoundLoadWrapper__ReleaseAudioAssetStorage(soundManagerWrapper, path, method);
}