void __fastcall AssetStorageLoadWrapper___ctor(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  AssetLoadWrapper_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  AssetLoadWrapperBase_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5A284 & 1) == 0 )
  {
    sub_1B885B0(&AssetLoadWrapper_TypeInfo);
    sub_1B885B0(&SoundLoadWrapper_TypeInfo);
    byte_4A5A284 = 1;
  }
  v3 = (AssetLoadWrapper_o *)sub_1B887FC(AssetLoadWrapper_TypeInfo);
  AssetLoadWrapper___ctor(v3, 0LL);
  this->fields.assetManagerWrapper = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (AssetLoadWrapperBase_o *)sub_1B887FC(SoundLoadWrapper_TypeInfo);
  AssetLoadWrapperBase___ctor(v6, 0LL);
  this->fields.soundManagerWrapper = (struct SoundLoadWrapper_o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.soundManagerWrapper, (int32_t)v6, v7, v8);
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
    sub_1B8880C(0LL, path);
  return AssetLoadWrapper__LoadAssetStorage(assetManagerWrapper, path, callbackFunc, maxParallelLoad, 0LL);
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
    sub_1B8880C(0LL, path);
  SoundLoadWrapper__LoadAudioAssetStorage(soundManagerWrapper, path, callbackFunc, cueType, method);
}


void __fastcall AssetStorageLoadWrapper__ReleaseAll(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  AssetLoadWrapperBase_o *assetManagerWrapper; // x0

  assetManagerWrapper = (AssetLoadWrapperBase_o *)this->fields.assetManagerWrapper;
  if ( !assetManagerWrapper
    || (AssetLoadWrapperBase__ReleaseAll(assetManagerWrapper, 0LL),
        (assetManagerWrapper = (AssetLoadWrapperBase_o *)this->fields.soundManagerWrapper) == 0LL) )
  {
    sub_1B8880C(assetManagerWrapper, method);
  }
  AssetLoadWrapperBase__ReleaseAll(assetManagerWrapper, 0LL);
}


void __fastcall AssetStorageLoadWrapper__ReleaseAssetStorage(
        AssetStorageLoadWrapper_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetLoadWrapper_o *assetManagerWrapper; // x0

  assetManagerWrapper = this->fields.assetManagerWrapper;
  if ( !assetManagerWrapper )
    sub_1B8880C(0LL, path);
  AssetLoadWrapper__ReleaseAssetStorage(assetManagerWrapper, path, 0LL);
}


void __fastcall AssetStorageLoadWrapper__ReleaseAudioAssetStorage(
        AssetStorageLoadWrapper_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetLoadWrapperBase_o *soundManagerWrapper; // x20

  soundManagerWrapper = (AssetLoadWrapperBase_o *)this->fields.soundManagerWrapper;
  if ( !soundManagerWrapper )
    sub_1B8880C(this, path);
  ((void (__fastcall *)(struct SoundLoadWrapper_o *, System_String_o *, const char *))soundManagerWrapper->klass[1]._1.gc_desc)(
    this->fields.soundManagerWrapper,
    path,
    soundManagerWrapper->klass[1]._1.name);
  AssetLoadWrapperBase__SubLoadCount(soundManagerWrapper, path, 0LL);
}