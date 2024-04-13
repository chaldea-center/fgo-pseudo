void __fastcall ServantCostumeEventBalloon___ctor(ServantCostumeEventBalloon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantCostumeEventBalloon__Set(
        ServantCostumeEventBalloon_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UISprite_o *itemSprite; // x20

  if ( (byte_42EB8E4 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, itemId, (_DWORD)method, v3);
    byte_42EB8E4 = 1;
  }
  itemSprite = this->fields.itemSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemSprite, itemId, 0LL);
}