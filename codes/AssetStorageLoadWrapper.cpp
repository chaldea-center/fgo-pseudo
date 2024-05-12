void __fastcall AssetStorageLoadWrapper___ctor(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  AssetLoadWrapperBase_o *v3; // x20
  const MethodInfo *v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  SoundLoadWrapper_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438AA39 & 1) == 0 )
  {
    sub_B775C4(&AssetLoadWrapper_TypeInfo);
    sub_B775C4(&SoundLoadWrapper_TypeInfo);
    byte_438AA39 = 1;
  }
  v3 = (AssetLoadWrapperBase_o *)sub_B77694(AssetLoadWrapper_TypeInfo);
  AssetLoadWrapperBase___ctor(v3, v4);
  this->fields.assetManagerWrapper = (struct AssetLoadWrapper_o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  v11 = (SoundLoadWrapper_o *)sub_B77694(SoundLoadWrapper_TypeInfo);
  SoundLoadWrapper___ctor(v11, 0LL);
  this->fields.soundManagerWrapper = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.soundManagerWrapper,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
    sub_B7769C(0LL, path);
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
    sub_B7769C(0LL, path);
  SoundLoadWrapper__LoadAudioAssetStorage(soundManagerWrapper, path, callbackFunc, cueType, 0LL);
}


void __fastcall AssetStorageLoadWrapper__ReleaseAll(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  AssetLoadWrapperBase_o *assetManagerWrapper; // x0

  assetManagerWrapper = (AssetLoadWrapperBase_o *)this->fields.assetManagerWrapper;
  if ( !assetManagerWrapper
    || (AssetLoadWrapperBase__ReleaseAll(assetManagerWrapper, method),
        (assetManagerWrapper = (AssetLoadWrapperBase_o *)this->fields.soundManagerWrapper) == 0LL) )
  {
    sub_B7769C(assetManagerWrapper, method);
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
    sub_B7769C(0LL, path);
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
    sub_B7769C(0LL, path);
  SoundLoadWrapper__ReleaseAudioAssetStorage(soundManagerWrapper, path, 0LL);
}