void ReleaseAssetStorageWhenDestroy___ctor(ReleaseAssetStorageWhenDestroy_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ReleaseAssetStorageWhenDestroy__OnDestroy(ReleaseAssetStorageWhenDestroy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *assetName; // x19

  if ( (byte_59326B6 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_59326B6 = 1;
  }
  assetName = this->fields.assetName;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetManager__releaseAssetStorage(assetName, 0);
}


void ReleaseAssetStorageWhenDestroy__Setup(
        ReleaseAssetStorageWhenDestroy_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.assetName = assetName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetName,
    (int32_t)assetName,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}