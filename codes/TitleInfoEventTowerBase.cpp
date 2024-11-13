void __fastcall TitleInfoEventTowerBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B14CA5 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTowerBase_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_24252/*"tower_img_base{0:00}"*/, v8, v9);
    byte_4B14CA5 = 1;
  }
  TitleInfoEventTowerBase_TypeInfo->static_fields->SPRITE_NAME_TOWER_BASE = (struct System_String_o *)StringLiteral_24252/*"tower_img_base{0:00}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventTowerBase_TypeInfo->static_fields,
    StringLiteral_24252/*"tower_img_base{0:00}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TitleInfoEventTowerBase___ctor(TitleInfoEventTowerBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerBase__SetBaseSprite(
        TitleInfoEventTowerBase_o *this,
        int32_t towerId,
        bool changeSize,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UIWidget_o *v15; // x20
  int32_t *p_towerBaseHeight; // x8
  __int64 v17; // x1
  TitleInfoEventTowerBase_c *v18; // x0
  System_String_o *SPRITE_NAME_TOWER_BASE; // x21
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x19
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14CA4 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&towerId, changeSize);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&TitleInfoEventTowerBase_TypeInfo, v11, v12);
    byte_4B14CA4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v15 = (UIWidget_o *)gameObject;
  if ( changeSize )
  {
    if ( gameObject )
    {
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseWidth, 0LL);
      p_towerBaseHeight = &this->fields.towerBaseHeight;
      goto LABEL_9;
    }
LABEL_14:
    sub_1BCAA3C(gameObject, v14);
  }
  if ( !gameObject )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseDefaultWidth, 0LL);
  p_towerBaseHeight = &this->fields.towerBaseDefaultHeight;
LABEL_9:
  UIWidget__set_height(v15, *p_towerBaseHeight, 0LL);
  v18 = TitleInfoEventTowerBase_TypeInfo;
  if ( !TitleInfoEventTowerBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerBase_TypeInfo, v17);
    v18 = TitleInfoEventTowerBase_TypeInfo;
  }
  SPRITE_NAME_TOWER_BASE = v18->static_fields->SPRITE_NAME_TOWER_BASE;
  v23 = towerId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v22 = System_String__Format(SPRITE_NAME_TOWER_BASE, v20, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
  AtlasManager__SetEventUI((UISprite_o *)v15, v22, 0LL);
}