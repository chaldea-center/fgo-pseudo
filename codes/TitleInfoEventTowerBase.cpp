void __fastcall TitleInfoEventTowerBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4213088 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventTowerBase_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_22818/*"tower_img_base{0:00}"*/, v8);
    byte_4213088 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerBase_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22818/*"tower_img_base{0:00}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22818/*"tower_img_base{0:00}"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  UIWidget_o *v11; // x20
  int32_t towerBaseDefaultWidth; // w1
  TitleInfoEventTowerBase_c *v13; // x0
  System_String_o *SPRITE_NAME_TOWER_BASE; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x19
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4213087 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&towerId);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&TitleInfoEventTowerBase_TypeInfo, v9);
    byte_4213087 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v11 = (UIWidget_o *)gameObject;
  if ( !changeSize )
  {
    if ( gameObject )
    {
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseDefaultHeight, 0LL);
      towerBaseDefaultWidth = *((_DWORD *)&this->fields + 5);
      goto LABEL_9;
    }
LABEL_16:
    sub_B0D97C(gameObject);
  }
  if ( !gameObject )
    goto LABEL_16;
  UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseHeight, 0LL);
  towerBaseDefaultWidth = this->fields.towerBaseDefaultWidth;
LABEL_9:
  UIWidget__set_height(v11, towerBaseDefaultWidth, 0LL);
  v13 = TitleInfoEventTowerBase_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerBase_TypeInfo);
    v13 = TitleInfoEventTowerBase_TypeInfo;
  }
  SPRITE_NAME_TOWER_BASE = v13->static_fields->SPRITE_NAME_TOWER_BASE;
  v17 = towerId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = System_String__Format(SPRITE_NAME_TOWER_BASE, v15, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)v11, v16, 0LL);
}