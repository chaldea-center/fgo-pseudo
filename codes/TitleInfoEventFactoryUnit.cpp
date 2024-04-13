void __fastcall TitleInfoEventFactoryUnit___cctor(const MethodInfo *method)
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

  if ( (byte_42ECBDF & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventFactoryUnit_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18912/*"factory_{0}_{1}"*/, v8, v9, v10);
    byte_42ECBDF = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18912/*"factory_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18912/*"factory_{0}_{1}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall TitleInfoEventFactoryUnit___ctor(TitleInfoEventFactoryUnit_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventFactoryUnit__CreateIcon(
        TitleInfoEventFactoryUnit_o *this,
        int32_t count,
        bool isAnimation,
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
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w25
  int32_t *p_lv; // x22
  UnityEngine_Component_o *iconSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_Object_o *v23; // x23
  srcLineSprite_o *Component_srcLineSprite; // x24
  UILabel_o *lvLabel; // x23
  UnityEngine_GameObject_o *v26; // x0
  float v27; // s0
  intptr_t v28; // s1
  int v29; // s2
  struct UIGrid_o *grid; // x8
  struct UIGrid_o **p_grid; // x22
  float cellHeight; // s12
  float v33; // s8
  intptr_t v34; // s9
  int v35; // s10
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *v37; // x21
  int v38; // s0
  int v39; // s1
  int v40; // s2
  float v41; // s0
  intptr_t v42; // s1
  int v43; // s2
  float v44; // s12
  float v45; // s8
  intptr_t v46; // s9
  int v47; // s10
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_Component_o *lvLeftLabel; // x8
  UnityEngine_Component_o *v50; // x19
  int v51; // s0
  int v52; // s1
  int v53; // s2

  if ( (byte_42ECBDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, count, isAnimation, method);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v13, v14, v15);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v16, v17, v18);
    byte_42ECBDE = 1;
  }
  if ( count > 0 )
  {
    v19 = 0;
    p_lv = &this->fields.lv;
    while ( 1 )
    {
      iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_44;
      gameObject = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_44;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v23,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_srcLineSprite,
                                                  0LL,
                                                  0LL);
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_44;
          UIWidget__set_depth(
            (UIWidget_o *)Component_srcLineSprite,
            v19 + *(_DWORD *)&Component_srcLineSprite[1].fields.mtIsUpdate + *p_lv,
            0LL);
        }
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v23,
          (UnityEngine_Component_o *)this->fields.grid,
          0LL);
        if ( isAnimation )
        {
          iconSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                    (UnityEngine_GameObject_o *)v23,
                                                    this->fields.lvUpAnimetionTime,
                                                    (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
          if ( !iconSprite )
            goto LABEL_44;
          iconSprite[5].klass = (UnityEngine_Component_c *)0x3F80000000000000LL;
          LODWORD(iconSprite[1].klass) = 6;
        }
      }
      if ( ++v19 >= count )
        goto LABEL_23;
    }
  }
  LODWORD(p_lv) = (_DWORD)this + 68;
LABEL_23:
  lvLabel = this->fields.lvLabel;
  this->fields.lv += count;
  iconSprite = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)p_lv, 0LL);
  if ( !lvLabel
    || (UILabel__set_text(lvLabel, (System_String_o *)iconSprite, 0LL),
        (iconSprite = (UnityEngine_Component_o *)this->fields.lvBase) == 0LL) )
  {
LABEL_44:
    sub_B5D69C(iconSprite, *(_QWORD *)&count);
  }
  v26 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
  if ( isAnimation )
  {
    GameObjectExtensions__SetParent(v26, (UnityEngine_Component_o *)this, 0LL);
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    p_grid = &this->fields.grid;
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_44;
    cellHeight = grid->fields.cellHeight;
    v33 = v27;
    v34 = v28;
    v35 = v29;
    v36 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                              v36,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_44;
    v37 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLabel,
                                              0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v37 )
      goto LABEL_44;
    LODWORD(v37[5].klass) = v38;
    HIDWORD(v37[5].klass) = v39;
    v37[5].fields.m_CachedPtr = v34;
    *((_DWORD *)&v37[5].fields + 1) = v35;
    LODWORD(v37[5].monitor) = v40;
    *((float *)&v37[5].monitor + 1) = v33 + (float)(cellHeight * (float)count);
    LODWORD(v37[1].klass) = 2;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !*p_grid )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_44;
    v44 = (*p_grid)->fields.cellHeight;
    v45 = v41;
    v46 = v42;
    v47 = v43;
    v48 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                              v48,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
    lvLeftLabel = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !lvLeftLabel )
      goto LABEL_44;
    v50 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(lvLeftLabel, 0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v50 )
      goto LABEL_44;
    LODWORD(v50[5].klass) = v51;
    HIDWORD(v50[5].klass) = v52;
    v50[5].fields.m_CachedPtr = v46;
    *((_DWORD *)&v50[5].fields + 1) = v47;
    LODWORD(v50[5].monitor) = v53;
    *((float *)&v50[5].monitor + 1) = v45 + (float)(v44 * (float)count);
    LODWORD(v50[1].klass) = 2;
  }
  else
  {
    GameObjectExtensions__SetParent(v26, (UnityEngine_Component_o *)this->fields.grid, 0LL);
    p_grid = &this->fields.grid;
  }
  iconSprite = (UnityEngine_Component_o *)*p_grid;
  if ( !*p_grid )
    goto LABEL_44;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))iconSprite->klass[1]._1.castClass)(
    iconSprite,
    iconSprite->klass[1]._1.declaringType);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
        TitleInfoEventFactoryUnit_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  struct UIGrid_o *v7; // x8
  float v8; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid
    || (grid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(grid, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)grid, 0LL),
        (v7 = this->fields.grid) == 0LL) )
  {
    sub_B5D69C(grid, method);
  }
  v8 = v4 + (float)(v7->fields.cellHeight * (float)this->fields.lv);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v8;
  return result;
}


void __fastcall TitleInfoEventFactoryUnit__LvUp(
        TitleInfoEventFactoryUnit_o *this,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.lv >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon(this, count, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventFactoryUnit__Open(
        TitleInfoEventFactoryUnit_o *this,
        int32_t eventId,
        int32_t factoryId,
        int32_t lv,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  TitleInfoEventFactoryUnit_c *v15; // x0
  System_String_o *SPRITE_NAME_ICON; // x23
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UISprite_o *iconSprite; // x22
  System_String_o *v21; // x21
  const MethodInfo *v22; // x3
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42ECBDD & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, factoryId, *(_QWORD *)&lv);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TitleInfoEventFactoryUnit_TypeInfo, v12, v13, v14);
    byte_42ECBDD = 1;
  }
  if ( lv >= 1 && this->fields.lv <= 0 )
  {
    this->fields.lv = 1;
    v15 = TitleInfoEventFactoryUnit_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactoryUnit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactoryUnit_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactoryUnit_TypeInfo);
      v15 = TitleInfoEventFactoryUnit_TypeInfo;
    }
    SPRITE_NAME_ICON = v15->static_fields->SPRITE_NAME_ICON;
    v24 = eventId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = factoryId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v19 = System_String__Format_44573324(SPRITE_NAME_ICON, v17, v18, 0LL);
    iconSprite = this->fields.iconSprite;
    v21 = v19;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(iconSprite, v21, 0LL);
    TitleInfoEventFactoryUnit__CreateIcon(this, lv - this->fields.lv, 0, v22);
  }
}