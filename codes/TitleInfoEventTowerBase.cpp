void TitleInfoEventTowerBase___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2F35E & 1) == 0 )
  {
    sub_1C93AD4(&TitleInfoEventTowerBase_TypeInfo);
    sub_1C93AD4(&StringLiteral_24445/*"tower_img_base{0:00}"*/);
    byte_4D2F35E = 1;
  }
  TitleInfoEventTowerBase_TypeInfo->static_fields->SPRITE_NAME_TOWER_BASE = (struct System_String_o *)StringLiteral_24445/*"tower_img_base{0:00}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventTowerBase_TypeInfo->static_fields,
    StringLiteral_24445/*"tower_img_base{0:00}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  TitleInfoEventTowerBase_c *v11; // x0
  System_String_o *SPRITE_NAME_TOWER_BASE; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x19
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2F35D & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&TitleInfoEventTowerBase_TypeInfo);
    byte_4D2F35D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1C93D2C(gameObject, v8);
  }
  if ( !gameObject )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseDefaultWidth, 0);
  p_towerBaseHeight = &this->fields.towerBaseDefaultHeight;
LABEL_9:
  UIWidget__set_height(v9, *p_towerBaseHeight, 0);
  v11 = TitleInfoEventTowerBase_TypeInfo;
  if ( !TitleInfoEventTowerBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerBase_TypeInfo);
    v11 = TitleInfoEventTowerBase_TypeInfo;
  }
  SPRITE_NAME_TOWER_BASE = v11->static_fields->SPRITE_NAME_TOWER_BASE;
  v15 = towerId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = System_String__Format(SPRITE_NAME_TOWER_BASE, v13, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)v9, v14, 0);
}