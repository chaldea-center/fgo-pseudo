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

  if ( (byte_40FDFB8 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventFactoryUnit_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18607/*"factory_{0}_{1}"*/, v8);
    byte_40FDFB8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18607/*"factory_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18607/*"factory_{0}_{1}"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  UnityEngine_GameObject_o *v15; // x23
  UIWidget_o *Component_srcLineSprite; // x24
  TweenWidth_o *v17; // x0
  UILabel_o *lvLabel; // x23
  System_String_o *v19; // x0
  UnityEngine_Component_o *lvBase; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_Transform_o *transform; // x0
  float v24; // s0
  int v25; // s1
  int v26; // s2
  struct UIGrid_o *grid; // x8
  struct UIGrid_o **p_grid; // x22
  UnityEngine_Component_o *v29; // x0
  float cellHeight; // s12
  float v31; // s8
  int v32; // s9
  int v33; // s10
  UnityEngine_GameObject_o *v34; // x0
  TweenWidth_o *v35; // x0
  TweenWidth_o *v36; // x21
  UnityEngine_Transform_o *v37; // x0
  int32_t v38; // s0
  int32_t v39; // s1
  int v40; // s2
  UnityEngine_Component_o *lvLeftLabel; // x0
  UnityEngine_Transform_o *v42; // x0
  float v43; // s0
  int v44; // s1
  int v45; // s2
  UnityEngine_Component_o *v46; // x0
  float v47; // s12
  float v48; // s8
  int v49; // s9
  int v50; // s10
  UnityEngine_GameObject_o *v51; // x0
  TweenWidth_o *v52; // x0
  UnityEngine_Component_o *v53; // x8
  TweenWidth_o *v54; // x19
  UnityEngine_Transform_o *v55; // x0
  int32_t v56; // s0
  int32_t v57; // s1
  int v58; // s2

  if ( (byte_40FDFB7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, *(_QWORD *)&count);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v9);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v10);
    byte_40FDFB7 = 1;
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
      v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
      {
        if ( !v15 )
          goto LABEL_44;
        Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  v15,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_44;
          UIWidget__set_depth(Component_srcLineSprite, v11 + Component_srcLineSprite->fields.mDepth + *p_lv, 0LL);
        }
        GameObjectExtensions__SafeSetParent(v15, (UnityEngine_Component_o *)this->fields.grid, 0LL);
        if ( isAnimation )
        {
          v17 = UITweener__Begin_TweenWidth_(
                  v15,
                  this->fields.lvUpAnimetionTime,
                  (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
          if ( !v17 )
            goto LABEL_44;
          *(_QWORD *)&v17->fields.from = 0x3F80000000000000LL;
          v17->fields.style = 6;
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
  v19 = System_Int32__ToString((int32_t)p_lv, 0LL);
  if ( !lvLabel
    || (UILabel__set_text(lvLabel, v19, 0LL), (lvBase = (UnityEngine_Component_o *)this->fields.lvBase) == 0LL) )
  {
LABEL_44:
    sub_B170D4();
  }
  v21 = UnityEngine_Component__get_gameObject(lvBase, 0LL);
  if ( isAnimation )
  {
    GameObjectExtensions__SetParent(v21, (UnityEngine_Component_o *)this, 0LL);
    v22 = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !v22 )
      goto LABEL_44;
    transform = UnityEngine_Component__get_transform(v22, 0LL);
    if ( !transform )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    p_grid = &this->fields.grid;
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_44;
    v29 = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !v29 )
      goto LABEL_44;
    cellHeight = grid->fields.cellHeight;
    v31 = v24;
    v32 = v25;
    v33 = v26;
    v34 = UnityEngine_Component__get_gameObject(v29, 0LL);
    v35 = UITweener__Begin_TweenWidth_(
            v34,
            this->fields.lvUpAnimetionTime,
            (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_44;
    v36 = v35;
    v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.lvLabel, 0LL);
    if ( !v37 )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(v37, 0LL);
    if ( !v36 )
      goto LABEL_44;
    v36->fields.from = v38;
    v36->fields.to = v39;
    LODWORD(v36->fields.mWidget) = v32;
    HIDWORD(v36->fields.mWidget) = v33;
    *(_DWORD *)&v36->fields.updateTable = v40;
    *((float *)&v36->fields.updateTable + 1) = v31 + (float)(cellHeight * (float)count);
    v36->fields.style = 2;
    lvLeftLabel = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !lvLeftLabel )
      goto LABEL_44;
    v42 = UnityEngine_Component__get_transform(lvLeftLabel, 0LL);
    if ( !v42 )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition(v42, 0LL);
    if ( !*p_grid )
      goto LABEL_44;
    v46 = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !v46 )
      goto LABEL_44;
    v47 = (*p_grid)->fields.cellHeight;
    v48 = v43;
    v49 = v44;
    v50 = v45;
    v51 = UnityEngine_Component__get_gameObject(v46, 0LL);
    v52 = UITweener__Begin_TweenWidth_(
            v51,
            this->fields.lvUpAnimetionTime,
            (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
    v53 = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !v53 )
      goto LABEL_44;
    v54 = v52;
    v55 = UnityEngine_Component__get_transform(v53, 0LL);
    if ( !v55 )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Transform__get_localPosition(v55, 0LL);
    if ( !v54 )
      goto LABEL_44;
    v54->fields.from = v56;
    v54->fields.to = v57;
    LODWORD(v54->fields.mWidget) = v49;
    HIDWORD(v54->fields.mWidget) = v50;
    *(_DWORD *)&v54->fields.updateTable = v58;
    *((float *)&v54->fields.updateTable + 1) = v48 + (float)(v47 * (float)count);
    v54->fields.style = 2;
  }
  else
  {
    GameObjectExtensions__SetParent(v21, (UnityEngine_Component_o *)this->fields.grid, 0LL);
    p_grid = &this->fields.grid;
  }
  if ( !*p_grid )
    goto LABEL_44;
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))(*p_grid)->klass->vtable._8_Reposition.method)(
    *p_grid,
    (*p_grid)->klass->vtable._9_ResetPosition.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
        TitleInfoEventFactoryUnit_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  UnityEngine_Transform_o *transform; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  struct UIGrid_o *v8; // x8
  float v9; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid
    || (transform = UnityEngine_Component__get_transform(grid, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v8 = this->fields.grid) == 0LL) )
  {
    sub_B170D4();
  }
  v9 = v5 + (float)(v8->fields.cellHeight * (float)this->fields.lv);
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v9;
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

  if ( (byte_40FDFB6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&TitleInfoEventFactoryUnit_TypeInfo, v10);
    byte_40FDFB6 = 1;
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
    v15 = System_String__Format_43739268(SPRITE_NAME_ICON, v13, v14, 0LL);
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