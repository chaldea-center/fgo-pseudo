void ServantCostumeEventBalloon___ctor(ServantCostumeEventBalloon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantCostumeEventBalloon__Set(ServantCostumeEventBalloon_o *this, int32_t itemId, const MethodInfo *method)
{
  UISprite_o *itemSprite; // x20

  if ( (byte_4C3BB54 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C3BB54 = 1;
  }
  itemSprite = this->fields.itemSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemSprite, itemId, 0);
}