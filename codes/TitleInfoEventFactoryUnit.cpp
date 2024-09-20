void __fastcall TitleInfoEventFactoryUnit___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A59073 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventFactoryUnit_TypeInfo);
    sub_1B885B0(&StringLiteral_19363/*"factory_{0}_{1}"*/);
    byte_4A59073 = 1;
  }
  TitleInfoEventFactoryUnit_TypeInfo->static_fields->SPRITE_NAME_ICON = (struct System_String_o *)StringLiteral_19363/*"factory_{0}_{1}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields,
    StringLiteral_19363/*"factory_{0}_{1}"*/,
    v1,
    v2);
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
  int v7; // w24
  UnityEngine_Component_o *iconSprite; // x0
  Il2CppObject *gameObject; // x22
  Il2CppObject *v10; // x22
  Il2CppObject *Component_object; // x23
  UILabel_o *lvLabel; // x22
  UnityEngine_GameObject_o *v13; // x0
  float v14; // s0
  int v15; // s1
  int v16; // s2
  struct UIGrid_o *grid; // x8
  float cellWidth; // s12
  float v19; // s8
  int v20; // s9
  int v21; // s10
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Component_o *v23; // x21
  int v24; // s0
  int v25; // s1
  intptr_t v26; // s2
  float v27; // s11
  float v28; // s0
  int v29; // s1
  int v30; // s2
  struct UIGrid_o *v31; // x8
  float v32; // s12
  float v33; // s8
  int v34; // s9
  int v35; // s10
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *v37; // x20
  int v38; // s0
  int v39; // s1
  intptr_t v40; // s2

  if ( (byte_4A59072 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UITweener_Begin_TweenAlpha___);
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    byte_4A59072 = 1;
  }
  if ( count >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
      if ( !iconSprite )
        break;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(iconSprite, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__Instantiate_object_(
              gameObject,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        if ( !v10 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v10,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !Component_object )
            break;
          UIWidget__set_depth(
            (UIWidget_o *)Component_object,
            v7 + LODWORD(Component_object[11].klass) + this->fields.lv,
            0LL);
        }
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v10,
          (UnityEngine_Component_o *)this->fields.grid,
          0LL);
        if ( isAnimation )
        {
          iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                    (UnityEngine_GameObject_o *)v10,
                                                    this->fields.lvUpAnimetionTime,
                                                    (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenAlpha___);
          if ( !iconSprite )
            break;
          iconSprite[5].monitor = (void *)0x3F80000000000000LL;
          LODWORD(iconSprite[1].monitor) = 6;
        }
      }
      if ( count == ++v7 )
        goto LABEL_19;
    }
LABEL_40:
    sub_1B8880C(iconSprite, *(_QWORD *)&count);
  }
LABEL_19:
  lvLabel = this->fields.lvLabel;
  this->fields.lv += count;
  iconSprite = (UnityEngine_Component_o *)System_Int32__ToString((int)this + 76, 0LL);
  if ( !lvLabel )
    goto LABEL_40;
  UILabel__set_text(lvLabel, (System_String_o *)iconSprite, 0LL);
  iconSprite = (UnityEngine_Component_o *)this->fields.lvBase;
  if ( !iconSprite )
    goto LABEL_40;
  v13 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
  if ( isAnimation )
  {
    GameObjectExtensions__SetParent(v13, (UnityEngine_Component_o *)this, 0LL);
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_40;
    cellWidth = grid->fields.cellWidth;
    v19 = v14;
    v20 = v15;
    v21 = v16;
    v22 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v22,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_40;
    v23 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLabel,
                                              0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v23 )
      goto LABEL_40;
    v27 = (float)count;
    LODWORD(v23[5].monitor) = v24;
    HIDWORD(v23[5].monitor) = v25;
    LODWORD(v23[6].klass) = v20;
    HIDWORD(v23[6].klass) = v21;
    v23[5].fields.m_CachedPtr = v26;
    *((float *)&v23[5].fields + 1) = v19 + (float)(cellWidth * (float)count);
    LODWORD(v23[1].monitor) = 2;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    v31 = this->fields.grid;
    if ( !v31 )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    v32 = v31->fields.cellWidth;
    v33 = v28;
    v34 = v29;
    v35 = v30;
    v36 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v36,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLeftLabel )
      goto LABEL_40;
    v37 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLeftLabel,
                                              0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v37 )
      goto LABEL_40;
    LODWORD(v37[5].monitor) = v38;
    HIDWORD(v37[5].monitor) = v39;
    LODWORD(v37[6].klass) = v34;
    HIDWORD(v37[6].klass) = v35;
    v37[5].fields.m_CachedPtr = v40;
    *((float *)&v37[5].fields + 1) = v33 + (float)(v32 * v27);
    LODWORD(v37[1].monitor) = 2;
  }
  else
  {
    GameObjectExtensions__SetParent(v13, (UnityEngine_Component_o *)this->fields.grid, 0LL);
  }
  iconSprite = (UnityEngine_Component_o *)this->fields.grid;
  if ( !iconSprite )
    goto LABEL_40;
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
    sub_1B8880C(grid, method);
  }
  v8 = v4 + (float)(v7->fields.cellWidth * (float)this->fields.lv);
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
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  UISprite_o *iconSprite; // x22
  System_String_o *v18; // x21
  const MethodInfo *v19; // x3
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A59071 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&TitleInfoEventFactoryUnit_TypeInfo);
    byte_4A59071 = 1;
  }
  if ( lv >= 1 && this->fields.lv <= 0 )
  {
    this->fields.lv = 1;
    v9 = TitleInfoEventFactoryUnit_TypeInfo;
    if ( !TitleInfoEventFactoryUnit_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactoryUnit_TypeInfo);
      v9 = TitleInfoEventFactoryUnit_TypeInfo;
    }
    SPRITE_NAME_ICON = v9->static_fields->SPRITE_NAME_ICON;
    v21 = eventId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, *(_QWORD *)&factoryId, *(_QWORD *)&lv, method);
    v20 = factoryId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v12, v13, v14);
    v16 = System_String__Format_61721404(SPRITE_NAME_ICON, v11, v15, 0LL);
    iconSprite = this->fields.iconSprite;
    v18 = v16;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(iconSprite, v18, 0LL);
    TitleInfoEventFactoryUnit__CreateIcon(this, lv - this->fields.lv, 0, v19);
  }
}