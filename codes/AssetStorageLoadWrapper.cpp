void __fastcall AssetStorageLoadWrapper___ctor(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  AssetLoadWrapperBase_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  AssetLoadWrapperBase_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FB54A & 1) == 0 )
  {
    sub_1B640C8(&AssetLoadWrapper_TypeInfo, method);
    sub_1B640C8(&SoundLoadWrapper_TypeInfo, v4);
    byte_49FB54A = 1;
  }
  v5 = (AssetLoadWrapperBase_o *)sub_1B64314(AssetLoadWrapper_TypeInfo, method, v2);
  AssetLoadWrapperBase___ctor(v5, v6);
  this->fields.assetManagerWrapper = (struct AssetLoadWrapper_o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v7, v8);
  v11 = (AssetLoadWrapperBase_o *)sub_1B64314(SoundLoadWrapper_TypeInfo, v9, v10);
  AssetLoadWrapperBase___ctor(v11, v12);
  this->fields.soundManagerWrapper = (struct SoundLoadWrapper_o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.soundManagerWrapper, (int32_t)v11, v13, v14);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  SoundLoadWrapper__LoadAudioAssetStorage(soundManagerWrapper, path, callbackFunc, cueType, method);
}


void __fastcall AssetStorageLoadWrapper__ReleaseAll(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  AssetLoadWrapperBase_o *assetManagerWrapper; // x0
  const MethodInfo *v4; // x1

  assetManagerWrapper = (AssetLoadWrapperBase_o *)this->fields.assetManagerWrapper;
  if ( !assetManagerWrapper
    || (AssetLoadWrapperBase__ReleaseAll(assetManagerWrapper, method),
        (assetManagerWrapper = (AssetLoadWrapperBase_o *)this->fields.soundManagerWrapper) == 0LL) )
  {
    sub_1B64324(assetManagerWrapper);
  }
  AssetLoadWrapperBase__ReleaseAll(assetManagerWrapper, v4);
}


void __fastcall AssetStorageLoadWrapper__ReleaseAssetStorage(
        AssetStorageLoadWrapper_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetLoadWrapper_o *assetManagerWrapper; // x0

  assetManagerWrapper = this->fields.assetManagerWrapper;
  if ( !assetManagerWrapper )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  SoundLoadWrapper__ReleaseAudioAssetStorage(soundManagerWrapper, path, method);
}