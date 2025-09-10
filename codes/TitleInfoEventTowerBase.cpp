void TitleInfoEventTowerBase___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C25C7D & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventTowerBase_TypeInfo);
    sub_1C2D490(&StringLiteral_24118/*"tower_img_base{0:00}"*/);
    byte_4C25C7D = 1;
  }
  TitleInfoEventTowerBase_TypeInfo->static_fields->SPRITE_NAME_TOWER_BASE = (struct System_String_o *)StringLiteral_24118/*"tower_img_base{0:00}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)TitleInfoEventTowerBase_TypeInfo->static_fields, StringLiteral_24118/*"tower_img_base{0:00}"*/, v1, v2);
}


void TitleInfoEventTowerBase___ctor(TitleInfoEventTowerBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventTowerBase__SetBaseSprite(
        TitleInfoEventTowerBase_o *this,
        int32_t towerId,
        bool changeSize,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UIWidget_o *v9; // x20
  int32_t *p_towerBaseHeight; // x8
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  TitleInfoEventTowerBase_c *v14; // x0
  System_String_o *SPRITE_NAME_TOWER_BASE; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x19
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C25C7C & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&TitleInfoEventTowerBase_TypeInfo);
    byte_4C25C7C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v9 = (UIWidget_o *)gameObject;
  if ( changeSize )
  {
    if ( gameObject )
    {
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseWidth, 0);
      p_towerBaseHeight = &this->fields.towerBaseHeight;
      goto LABEL_9;
    }
LABEL_14:
    sub_1C2D6EC(gameObject, v8);
  }
  if ( !gameObject )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseDefaultWidth, 0);
  p_towerBaseHeight = &this->fields.towerBaseDefaultHeight;
LABEL_9:
  UIWidget__set_height(v9, *p_towerBaseHeight, 0);
  v14 = TitleInfoEventTowerBase_TypeInfo;
  if ( !TitleInfoEventTowerBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerBase_TypeInfo);
    v14 = TitleInfoEventTowerBase_TypeInfo;
  }
  SPRITE_NAME_TOWER_BASE = v14->static_fields->SPRITE_NAME_TOWER_BASE;
  v18 = towerId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
  v17 = System_String__Format(SPRITE_NAME_TOWER_BASE, v16, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)v9, v17, 0);
}