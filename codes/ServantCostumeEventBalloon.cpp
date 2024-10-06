void __fastcall ServantCostumeEventBalloon___ctor(ServantCostumeEventBalloon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeEventBalloon__Set(
        ServantCostumeEventBalloon_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  UISprite_o *itemSprite; // x20

  if ( (byte_4A73876 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    byte_4A73876 = 1;
  }
  itemSprite = this->fields.itemSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemSprite, itemId, 0LL);
}