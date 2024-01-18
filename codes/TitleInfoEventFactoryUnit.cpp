void __fastcall TitleInfoEventFactoryUnit___cctor(const MethodInfo *method)
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

  if ( (byte_418B9F2 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventFactoryUnit_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18677/*"factory_{0}_{1}"*/, v8);
    byte_418B9F2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18677/*"factory_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18677/*"factory_{0}_{1}"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int v11; // w25
  int32_t *p_lv; // x22
  UnityEngine_Component_o *iconSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_Object_o *v15; // x23
  srcLineSprite_o *Component_srcLineSprite; // x24
  UILabel_o *lvLabel; // x23
  UnityEngine_GameObject_o *v18; // x0
  float v19; // s0
  intptr_t v20; // s1
  int v21; // s2
  struct UIGrid_o *grid; // x8
  struct UIGrid_o **p_grid; // x22
  float cellHeight; // s12
  float v25; // s8
  intptr_t v26; // s9
  int v27; // s10
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *v29; // x21
  int v30; // s0
  int v31; // s1
  int v32; // s2
  float v33; // s0
  intptr_t v34; // s1
  int v35; // s2
  float v36; // s12
  float v37; // s8
  intptr_t v38; // s9
  int v39; // s10
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o *lvLeftLabel; // x8
  UnityEngine_Component_o *v42; // x19
  int v43; // s0
  int v44; // s1
  int v45; // s2

  if ( (byte_418B9F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, *(_QWORD *)&count);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, v9);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v10);
    byte_418B9F1 = 1;
  }
  if ( count > 0 )
  {
    v11 = 0;
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
      v15 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_44;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v15,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
            v11 + *(_DWORD *)&Component_srcLineSprite[1].fields.mtIsUpdate + *p_lv,
            0LL);
        }
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v15,
          (UnityEngine_Component_o *)this->fields.grid,
          0LL);
        if ( isAnimation )
        {
          iconSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                                    (UnityEngine_GameObject_o *)v15,
                                                    this->fields.lvUpAnimetionTime,
                                                    (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___);
          if ( !iconSprite )
            goto LABEL_44;
          iconSprite[5].klass = (UnityEngine_Component_c *)0x3F80000000000000LL;
          LODWORD(iconSprite[1].klass) = 6;
        }
      }
      if ( ++v11 >= count )
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
    sub_B2C434(iconSprite, *(_QWORD *)&count);
  }
  v18 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
  if ( isAnimation )
  {
    GameObjectExtensions__SetParent(v18, (UnityEngine_Component_o *)this, 0LL);
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
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
    v25 = v19;
    v26 = v20;
    v27 = v21;
    v28 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                              v28,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_44;
    v29 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLabel,
                                              0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v29 )
      goto LABEL_44;
    LODWORD(v29[5].klass) = v30;
    HIDWORD(v29[5].klass) = v31;
    v29[5].fields.m_CachedPtr = v26;
    *((_DWORD *)&v29[5].fields + 1) = v27;
    LODWORD(v29[5].monitor) = v32;
    *((float *)&v29[5].monitor + 1) = v25 + (float)(cellHeight * (float)count);
    LODWORD(v29[1].klass) = 2;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !*p_grid )
      goto LABEL_44;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_44;
    v36 = (*p_grid)->fields.cellHeight;
    v37 = v33;
    v38 = v34;
    v39 = v35;
    v40 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_TweenWidth_(
                                              v40,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
    lvLeftLabel = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !lvLeftLabel )
      goto LABEL_44;
    v42 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(lvLeftLabel, 0LL);
    if ( !iconSprite )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v42 )
      goto LABEL_44;
    LODWORD(v42[5].klass) = v43;
    HIDWORD(v42[5].klass) = v44;
    v42[5].fields.m_CachedPtr = v38;
    *((_DWORD *)&v42[5].fields + 1) = v39;
    LODWORD(v42[5].monitor) = v45;
    *((float *)&v42[5].monitor + 1) = v37 + (float)(v36 * (float)count);
    LODWORD(v42[1].klass) = 2;
  }
  else
  {
    GameObjectExtensions__SetParent(v18, (UnityEngine_Component_o *)this->fields.grid, 0LL);
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
    sub_B2C434(grid, method);
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
  __int64 v9; // x1
  __int64 v10; // x1
  TitleInfoEventFactoryUnit_c *v11; // x0
  System_String_o *SPRITE_NAME_ICON; // x23
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UISprite_o *iconSprite; // x22
  System_String_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418B9F0 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&TitleInfoEventFactoryUnit_TypeInfo, v10);
    byte_418B9F0 = 1;
  }
  if ( lv >= 1 && this->fields.lv <= 0 )
  {
    this->fields.lv = 1;
    v11 = TitleInfoEventFactoryUnit_TypeInfo;
    if ( (BYTE3(TitleInfoEventFactoryUnit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventFactoryUnit_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactoryUnit_TypeInfo);
      v11 = TitleInfoEventFactoryUnit_TypeInfo;
    }
    SPRITE_NAME_ICON = v11->static_fields->SPRITE_NAME_ICON;
    v20 = eventId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v19 = factoryId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v15 = System_String__Format_44301068(SPRITE_NAME_ICON, v13, v14, 0LL);
    iconSprite = this->fields.iconSprite;
    v17 = v15;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(iconSprite, v17, 0LL);
    TitleInfoEventFactoryUnit__CreateIcon(this, lv - this->fields.lv, 0, v18);
  }
}