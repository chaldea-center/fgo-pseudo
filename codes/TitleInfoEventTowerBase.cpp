void __fastcall TitleInfoEventTowerBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FD64C & 1) == 0 )
  {
    sub_1B64A00(&TitleInfoEventTowerBase_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_23907/*"tower_img_base{0:00}"*/, v4);
    byte_49FD64C = 1;
  }
  TitleInfoEventTowerBase_TypeInfo->static_fields->SPRITE_NAME_TOWER_BASE = (struct System_String_o *)StringLiteral_23907/*"tower_img_base{0:00}"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventTowerBase_TypeInfo->static_fields,
    StringLiteral_23907/*"tower_img_base{0:00}"*/,
    v2,
    v3);
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
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UIWidget_o *v12; // x20
  int32_t *p_towerBaseHeight; // x8
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  TitleInfoEventTowerBase_c *v17; // x0
  System_String_o *SPRITE_NAME_TOWER_BASE; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x19
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FD64B & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, *(_QWORD *)&towerId);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B64A00(&int_TypeInfo, v8);
    sub_1B64A00(&TitleInfoEventTowerBase_TypeInfo, v9);
    byte_49FD64B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v12 = (UIWidget_o *)gameObject;
  if ( changeSize )
  {
    if ( gameObject )
    {
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseWidth, 0LL);
      p_towerBaseHeight = &this->fields.towerBaseHeight;
      goto LABEL_9;
    }
LABEL_14:
    sub_1B64C5C(gameObject, v11);
  }
  if ( !gameObject )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseDefaultWidth, 0LL);
  p_towerBaseHeight = &this->fields.towerBaseDefaultHeight;
LABEL_9:
  UIWidget__set_height(v12, *p_towerBaseHeight, 0LL);
  v17 = TitleInfoEventTowerBase_TypeInfo;
  if ( !TitleInfoEventTowerBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerBase_TypeInfo);
    v17 = TitleInfoEventTowerBase_TypeInfo;
  }
  SPRITE_NAME_TOWER_BASE = v17->static_fields->SPRITE_NAME_TOWER_BASE;
  v21 = towerId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v14, v15, v16);
  v20 = System_String__Format(SPRITE_NAME_TOWER_BASE, v19, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)v12, v20, 0LL);
}