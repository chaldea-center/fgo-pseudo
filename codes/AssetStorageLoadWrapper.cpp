void __fastcall AssetStorageLoadWrapper___ctor(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetLoadWrapperBase_o *v4; // x20
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  AssetLoadWrapperBase_o *v12; // x20
  const MethodInfo *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BC6B8D & 1) == 0 )
  {
    sub_1C1ABD4(&AssetLoadWrapper_TypeInfo, method);
    sub_1C1ABD4(&SoundLoadWrapper_TypeInfo, v3);
    byte_4BC6B8D = 1;
  }
  v4 = (AssetLoadWrapperBase_o *)sub_1C1AE20(AssetLoadWrapper_TypeInfo);
  AssetLoadWrapperBase___ctor(v4, v5);
  this->fields.assetManagerWrapper = (struct AssetLoadWrapper_o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v6, v7, v8, v9, v10, v11);
  v12 = (AssetLoadWrapperBase_o *)sub_1C1AE20(SoundLoadWrapper_TypeInfo);
  AssetLoadWrapperBase___ctor(v12, v13);
  this->fields.soundManagerWrapper = (struct SoundLoadWrapper_o *)v12;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.soundManagerWrapper,
    (int64_t)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
    sub_1C1AE30(0LL, path);
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
    sub_1C1AE30(0LL, path);
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
    sub_1C1AE30(assetManagerWrapper, method);
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
    sub_1C1AE30(0LL, path);
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
    sub_1C1AE30(0LL, path);
  SoundLoadWrapper__ReleaseAudioAssetStorage(soundManagerWrapper, path, method);
}