void __fastcall ReleaseAssetStorageWhenDestroy___ctor(ReleaseAssetStorageWhenDestroy_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ReleaseAssetStorageWhenDestroy__OnDestroy(
        ReleaseAssetStorageWhenDestroy_o *this,
        const MethodInfo *method)
{
  System_String_o *assetName; // x19

  if ( (byte_4BD71ED & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD71ED = 1;
  }
  assetName = this->fields.assetName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(assetName, 0LL);
}


void __fastcall ReleaseAssetStorageWhenDestroy__Setup(
        ReleaseAssetStorageWhenDestroy_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  this->fields.assetName = assetName;
  sub_1C21DDC(&this->fields.assetName, assetName);
}