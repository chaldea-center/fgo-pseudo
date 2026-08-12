void ServantCostumeEventBalloon___ctor(ServantCostumeEventBalloon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeEventBalloon__Set(ServantCostumeEventBalloon_o *this, int32_t itemId, const MethodInfo *method)
{
  UISprite_o *itemSprite; // x20

  if ( (byte_596A27F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596A27F = 1;
  }
  itemSprite = this->fields.itemSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&itemId, method);
  AtlasManager__SetItem(itemSprite, itemId, 0);
}