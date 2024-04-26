void __fastcall TitleInfoEventTowerBase___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_43502D8 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventTowerBase_TypeInfo);
    sub_B70694(&StringLiteral_23119/*"tower_img_base{0:00}"*/);
    byte_43502D8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerBase_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_23119/*"tower_img_base{0:00}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23119/*"tower_img_base{0:00}"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  int32_t towerBaseDefaultWidth; // w1
  __int64 v11; // x2
  TitleInfoEventTowerBase_c *v12; // x0
  System_String_o *SPRITE_NAME_TOWER_BASE; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x19
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43502D7 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&TitleInfoEventTowerBase_TypeInfo);
    byte_43502D7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v9 = (UIWidget_o *)gameObject;
  if ( !changeSize )
  {
    if ( gameObject )
    {
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseDefaultHeight, 0LL);
      towerBaseDefaultWidth = *((_DWORD *)&this->fields + 5);
      goto LABEL_9;
    }
LABEL_16:
    sub_B7076C(gameObject, v8);
  }
  if ( !gameObject )
    goto LABEL_16;
  UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseHeight, 0LL);
  towerBaseDefaultWidth = this->fields.towerBaseDefaultWidth;
LABEL_9:
  UIWidget__set_height(v9, towerBaseDefaultWidth, 0LL);
  v12 = TitleInfoEventTowerBase_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerBase_TypeInfo);
    v12 = TitleInfoEventTowerBase_TypeInfo;
  }
  SPRITE_NAME_TOWER_BASE = v12->static_fields->SPRITE_NAME_TOWER_BASE;
  v16 = towerId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11);
  v15 = System_String__Format(SPRITE_NAME_TOWER_BASE, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)v9, v15, 0LL);
}