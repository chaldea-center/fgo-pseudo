void __fastcall AssetStorageLoadWrapper___ctor(AssetStorageLoadWrapper_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetLoadWrapper_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  AssetLoadWrapperBase_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4AB4E54 & 1) == 0 )
  {
    sub_1BAB41C(&AssetLoadWrapper_TypeInfo, method);
    sub_1BAB41C(&SoundLoadWrapper_TypeInfo, v3);
    byte_4AB4E54 = 1;
  }
  v4 = (AssetLoadWrapper_o *)sub_1BAB668(AssetLoadWrapper_TypeInfo);
  AssetLoadWrapper___ctor(v4, 0LL);
  this->fields.assetManagerWrapper = v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (AssetLoadWrapperBase_o *)sub_1BAB668(SoundLoadWrapper_TypeInfo);
  AssetLoadWrapperBase___ctor(v7, 0LL);
  this->fields.soundManagerWrapper = (struct SoundLoadWrapper_o *)v7;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.soundManagerWrapper, (int32_t)v7, v8, v9);
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
    sub_1BAB678(0LL, path);
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
    sub_1BAB678(0LL, path);
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
    sub_1BAB678(assetManagerWrapper, method);
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
    sub_1BAB678(0LL, path);
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
    sub_1BAB678(this, path);
  ((void (__fastcall *)(struct SoundLoadWrapper_o *, System_String_o *, const char *))soundManagerWrapper->klass[1]._1.gc_desc)(
    this->fields.soundManagerWrapper,
    path,
    soundManagerWrapper->klass[1]._1.name);
  AssetLoadWrapperBase__SubLoadCount(soundManagerWrapper, path, 0LL);
}