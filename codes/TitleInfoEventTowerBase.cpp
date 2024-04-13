void __fastcall TitleInfoEventTowerBase___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E6C2E & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTowerBase_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23047/*"tower_img_base{0:00}"*/, v8, v9, v10);
    byte_42E6C2E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerBase_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_23047/*"tower_img_base{0:00}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23047/*"tower_img_base{0:00}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UIWidget_o *v18; // x20
  int32_t towerBaseDefaultWidth; // w1
  TitleInfoEventTowerBase_c *v20; // x0
  System_String_o *SPRITE_NAME_TOWER_BASE; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x19
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E6C2D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, towerId, changeSize, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7, v8, v9);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&TitleInfoEventTowerBase_TypeInfo, v13, v14, v15);
    byte_42E6C2D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v18 = (UIWidget_o *)gameObject;
  if ( !changeSize )
  {
    if ( gameObject )
    {
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseDefaultHeight, 0LL);
      towerBaseDefaultWidth = *((_DWORD *)&this->fields + 5);
      goto LABEL_9;
    }
LABEL_16:
    sub_B5D69C(gameObject, v17);
  }
  if ( !gameObject )
    goto LABEL_16;
  UIWidget__set_width((UIWidget_o *)gameObject, this->fields.towerBaseHeight, 0LL);
  towerBaseDefaultWidth = this->fields.towerBaseDefaultWidth;
LABEL_9:
  UIWidget__set_height(v18, towerBaseDefaultWidth, 0LL);
  v20 = TitleInfoEventTowerBase_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerBase_TypeInfo);
    v20 = TitleInfoEventTowerBase_TypeInfo;
  }
  SPRITE_NAME_TOWER_BASE = v20->static_fields->SPRITE_NAME_TOWER_BASE;
  v24 = towerId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = System_String__Format(SPRITE_NAME_TOWER_BASE, v22, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)v18, v23, 0LL);
}