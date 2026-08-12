void TitleInfoEventTowerBase___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596F115 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventTowerBase_TypeInfo);
    sub_2213A60(&StringLiteral_25440/*"tower_img_base{0:00}"*/);
    byte_596F115 = 1;
  }
  v7 = StringLiteral_25440/*"tower_img_base{0:00}"*/;
  TitleInfoEventTowerBase_TypeInfo->static_fields->SPRITE_NAME_TOWER_BASE = (struct System_String_o *)StringLiteral_25440/*"tower_img_base{0:00}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventTowerBase_TypeInfo->static_fields,
    v7,
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
  __int64 v11; // x1
  __int64 v12; // x2
  TitleInfoEventTowerBase_c *v13; // x0
  System_String_o **p_SPRITE_NAME_TOWER_BASE; // x8
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x19
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596F114 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&TitleInfoEventTowerBase_TypeInfo);
    byte_596F114 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_2213CDC(gameObject, v8);
  }
  if ( !gameObject )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseDefaultWidth, 0);
  p_towerBaseHeight = &this->fields.towerBaseDefaultHeight;
LABEL_9:
  UIWidget__set_height(v9, *p_towerBaseHeight, 0);
  v13 = TitleInfoEventTowerBase_TypeInfo;
  if ( !*(&TitleInfoEventTowerBase_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerBase_TypeInfo, v11, v12);
    v13 = TitleInfoEventTowerBase_TypeInfo;
  }
  p_SPRITE_NAME_TOWER_BASE = &v13->static_fields->SPRITE_NAME_TOWER_BASE;
  v20 = towerId;
  v15 = *p_SPRITE_NAME_TOWER_BASE;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
  v19 = System_String__Format(v15, v16, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v18);
  AtlasManager__SetEventUI((UISprite_o *)v9, v19, 0);
}