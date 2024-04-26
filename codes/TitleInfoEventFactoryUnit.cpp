void __fastcall TitleInfoEventFactoryUnit___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_43560A9 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventFactoryUnit_TypeInfo);
    sub_B70694(&StringLiteral_18962/*"factory_{0}_{1}"*/);
    byte_43560A9 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18962/*"factory_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18962/*"factory_{0}_{1}"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  int v7; // w25
  int32_t *p_lv; // x22
  UnityEngine_Component_o *iconSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_Object_o *v11; // x23
  srcLineSprite_o *Component_srcLineSprite; // x24
  UILabel_o *lvLabel; // x23
  UnityEngine_GameObject_o *v14; // x0
  float v15; // s0
  intptr_t v16; // s1
  int v17; // s2
  struct UIGrid_o *grid; // x8
  struct UIGrid_o **p_grid; // x22
  float cellHeight; // s12
  float v21; // s8
  intptr_t v22; // s9
  int v23; // s10
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Component_o *v25; // x21
  int v26; // s0
  int v27; // s1
  int v28; // s2
  float v29; // s0
  intptr_t v30; // s1
  int v31; // s2
  float v32; // s12
  float v33; // s8
  intptr_t v34; // s9
  int v35; // s10
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *lvLeftLabel; // x8
  UnityEngine_Component_o *v38; // x19
  int v39; // s0
  int v40; // s1
  int v41; // s2

  if ( (byte_43560A8 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UITweener_Begin_TweenAlpha___);
    sub_B70694(&Method_UITweener_Begin_TweenPosition___);
    byte_43560A8 = 1;
  }
  if ( count > 0 )
  {
    v7 = 0;
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
      v11 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                      (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_44;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v11,
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
            v7 + *(_DWORD *)&Component_srcLineSprite[1].fields.mtIsUpdate + *p_lv,
            0LL);
        }
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v11,
          (UnityEngine_Component_o *)this->fields.grid,
          0LL);
        if ( isAnimation )
        {
          iconSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                    (UnityEngine_GameObject_o *)v11,
                                                    this->fields.lvUpAnimetionTime,
                                                    (const MethodInfo_1D645B8 *)Method_UITweener_Begin_TweenAlpha___);
          if ( !iconSprite )
            goto LABEL_44;
          iconSprite[5].klass = (UnityEngine_Component_c *)0x3F80000000000000LL;
          LODWORD(iconSprite[1].klass) = 6;
        }
      }
      if ( ++v7 >= count )
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
    sub_B7076C(iconSprite, *(_QWORD *)&count);
  }
  v14 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
  if ( isAnimation )
  {
    GameObjectExtensions__SetParent(v14, (UnityEngine_Component_o *)this, 0LL);
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localPosition(
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
    v21 = v15;
    v22 = v16;
    v23 = v17;
    v24 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                              v24,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_1D645B8 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_44;
    v25 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLabel,
                                              0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v25 )
      goto LABEL_44;
    LODWORD(v25[5].klass) = v26;
    HIDWORD(v25[5].klass) = v27;
    v25[5].fields.m_CachedPtr = v22;
    *((_DWORD *)&v25[5].fields + 1) = v23;
    LODWORD(v25[5].monitor) = v28;
    *((float *)&v25[5].monitor + 1) = v21 + (float)(cellHeight * (float)count);
    LODWORD(v25[1].klass) = 2;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !*p_grid )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_44;
    v32 = (*p_grid)->fields.cellHeight;
    v33 = v29;
    v34 = v30;
    v35 = v31;
    v36 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                              v36,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_1D645B8 *)Method_UITweener_Begin_TweenPosition___);
    lvLeftLabel = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !lvLeftLabel )
      goto LABEL_44;
    v38 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(lvLeftLabel, 0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v38 )
      goto LABEL_44;
    LODWORD(v38[5].klass) = v39;
    HIDWORD(v38[5].klass) = v40;
    v38[5].fields.m_CachedPtr = v34;
    *((_DWORD *)&v38[5].fields + 1) = v35;
    LODWORD(v38[5].monitor) = v41;
    *((float *)&v38[5].monitor + 1) = v33 + (float)(v32 * (float)count);
    LODWORD(v38[1].klass) = 2;
  }
  else
  {
    GameObjectExtensions__SetParent(v14, (UnityEngine_Component_o *)this->fields.grid, 0LL);
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
    sub_B7076C(grid, method);
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
  TitleInfoEventFactoryUnit_c *v9; // x0
  System_String_o *SPRITE_NAME_ICON; // x23
  Il2CppObject *v11; // x22
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UISprite_o *iconSprite; // x22
  System_String_o *v16; // x21
  const MethodInfo *v17; // x3
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43560A7 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&TitleInfoEventFactoryUnit_TypeInfo);
    byte_43560A7 = 1;
  }
  if ( lv >= 1 && this->fields.lv <= 0 )
  {
    this->fields.lv = 1;
    v9 = TitleInfoEventFactoryUnit_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactoryUnit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactoryUnit_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactoryUnit_TypeInfo);
      v9 = TitleInfoEventFactoryUnit_TypeInfo;
    }
    SPRITE_NAME_ICON = v9->static_fields->SPRITE_NAME_ICON;
    v19 = eventId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, *(_QWORD *)&factoryId);
    v18 = factoryId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12);
    v14 = System_String__Format_44753704(SPRITE_NAME_ICON, v11, v13, 0LL);
    iconSprite = this->fields.iconSprite;
    v16 = v14;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(iconSprite, v16, 0LL);
    TitleInfoEventFactoryUnit__CreateIcon(this, lv - this->fields.lv, 0, v17);
  }
}