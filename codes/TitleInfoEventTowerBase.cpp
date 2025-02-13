void __fastcall TitleInfoEventTowerBase___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDAFCA & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventTowerBase_TypeInfo);
    sub_1C21E38(&StringLiteral_24434/*"tower_img_base{0:00}"*/);
    byte_4BDAFCA = 1;
  }
  TitleInfoEventTowerBase_TypeInfo->static_fields->SPRITE_NAME_TOWER_BASE = (struct System_String_o *)StringLiteral_24434/*"tower_img_base{0:00}"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TitleInfoEventTowerBase_TypeInfo->static_fields,
    StringLiteral_24434/*"tower_img_base{0:00}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall TitleInfoEventTowerBase___ctor(TitleInfoEventTowerBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTowerBase__SetBaseSprite(
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

  if ( (byte_4BDAFC9 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&TitleInfoEventTowerBase_TypeInfo);
    byte_4BDAFC9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v9 = (UIWidget_o *)gameObject;
  if ( changeSize )
  {
    if ( gameObject )
    {
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseWidth, 0LL);
      p_towerBaseHeight = &this->fields.towerBaseHeight;
      goto LABEL_9;
    }
LABEL_14:
    sub_1C22094(gameObject, v8);
  }
  if ( !gameObject )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseDefaultWidth, 0LL);
  p_towerBaseHeight = &this->fields.towerBaseDefaultHeight;
LABEL_9:
  UIWidget__set_height(v9, *p_towerBaseHeight, 0LL);
  v14 = TitleInfoEventTowerBase_TypeInfo;
  if ( !TitleInfoEventTowerBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerBase_TypeInfo);
    v14 = TitleInfoEventTowerBase_TypeInfo;
  }
  SPRITE_NAME_TOWER_BASE = v14->static_fields->SPRITE_NAME_TOWER_BASE;
  v18 = towerId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
  v17 = System_String__Format(SPRITE_NAME_TOWER_BASE, v16, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)v9, v17, 0LL);
}