void __fastcall TitleInfoEventFactoryUnit___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4B3548E & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoEventFactoryUnit_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_19595/*"factory_{0}_{1}"*/, v8);
    byte_4B3548E = 1;
  }
  TitleInfoEventFactoryUnit_TypeInfo->static_fields->SPRITE_NAME_ICON = (struct System_String_o *)StringLiteral_19595/*"factory_{0}_{1}"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields,
    StringLiteral_19595/*"factory_{0}_{1}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int v11; // w24
  UnityEngine_Component_o *iconSprite; // x0
  Il2CppObject *gameObject; // x22
  Il2CppObject *v14; // x22
  Il2CppObject *Component_object; // x23
  UILabel_o *lvLabel; // x22
  UnityEngine_GameObject_o *v17; // x0
  float v18; // s0
  int v19; // s1
  int v20; // s2
  struct UIGrid_o *grid; // x8
  float cellWidth; // s12
  float v23; // s8
  int v24; // s9
  int v25; // s10
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *v27; // x21
  int v28; // s0
  int v29; // s1
  intptr_t v30; // s2
  float v31; // s11
  float v32; // s0
  int v33; // s1
  int v34; // s2
  struct UIGrid_o *v35; // x8
  float v36; // s12
  float v37; // s8
  int v38; // s9
  int v39; // s10
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o *v41; // x20
  int v42; // s0
  int v43; // s1
  intptr_t v44; // s2

  if ( (byte_4B3548D & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, *(_QWORD *)&count);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    sub_1BD3458(&Method_UITweener_Begin_TweenAlpha___, v9);
    sub_1BD3458(&Method_UITweener_Begin_TweenPosition___, v10);
    byte_4B3548D = 1;
  }
  if ( count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
      if ( !iconSprite )
        break;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(iconSprite, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__Instantiate_object_(
              gameObject,
              (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        if ( !v14 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v14,
                             (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
            v11 + LODWORD(Component_object[11].klass) + this->fields.lv,
            0LL);
        }
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v14,
          (UnityEngine_Component_o *)this->fields.grid,
          0LL);
        if ( isAnimation )
        {
          iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                    (UnityEngine_GameObject_o *)v14,
                                                    this->fields.lvUpAnimetionTime,
                                                    (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenAlpha___);
          if ( !iconSprite )
            break;
          iconSprite[5].monitor = (void *)0x3F80000000000000LL;
          LODWORD(iconSprite[1].monitor) = 6;
        }
      }
      if ( count == ++v11 )
        goto LABEL_19;
    }
LABEL_40:
    sub_1BD36B4(iconSprite, *(_QWORD *)&count);
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
  v17 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
  if ( isAnimation )
  {
    GameObjectExtensions__SetParent(v17, (UnityEngine_Component_o *)this, 0LL);
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_40;
    cellWidth = grid->fields.cellWidth;
    v23 = v18;
    v24 = v19;
    v25 = v20;
    v26 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v26,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_40;
    v27 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLabel,
                                              0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v27 )
      goto LABEL_40;
    v31 = (float)count;
    LODWORD(v27[5].monitor) = v28;
    HIDWORD(v27[5].monitor) = v29;
    LODWORD(v27[6].klass) = v24;
    HIDWORD(v27[6].klass) = v25;
    v27[5].fields.m_CachedPtr = v30;
    *((float *)&v27[5].fields + 1) = v23 + (float)(cellWidth * (float)count);
    LODWORD(v27[1].monitor) = 2;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    v35 = this->fields.grid;
    if ( !v35 )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    v36 = v35->fields.cellWidth;
    v37 = v32;
    v38 = v33;
    v39 = v34;
    v40 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v40,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_2FE5B60 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLeftLabel )
      goto LABEL_40;
    v41 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLeftLabel,
                                              0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v41 )
      goto LABEL_40;
    LODWORD(v41[5].monitor) = v42;
    HIDWORD(v41[5].monitor) = v43;
    LODWORD(v41[6].klass) = v38;
    HIDWORD(v41[6].klass) = v39;
    v41[5].fields.m_CachedPtr = v44;
    *((float *)&v41[5].fields + 1) = v37 + (float)(v36 * v31);
    LODWORD(v41[1].monitor) = 2;
  }
  else
  {
    GameObjectExtensions__SetParent(v17, (UnityEngine_Component_o *)this->fields.grid, 0LL);
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
    sub_1BD36B4(grid, method);
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
  __int64 v9; // x1
  __int64 v10; // x1
  TitleInfoEventFactoryUnit_c *v11; // x0
  System_String_o *SPRITE_NAME_ICON; // x23
  Il2CppObject *v13; // x22
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  UISprite_o *iconSprite; // x22
  System_String_o *v20; // x21
  const MethodInfo *v21; // x3
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B3548C & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BD3458(&int_TypeInfo, v9);
    sub_1BD3458(&TitleInfoEventFactoryUnit_TypeInfo, v10);
    byte_4B3548C = 1;
  }
  if ( lv >= 1 && this->fields.lv <= 0 )
  {
    this->fields.lv = 1;
    v11 = TitleInfoEventFactoryUnit_TypeInfo;
    if ( !TitleInfoEventFactoryUnit_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactoryUnit_TypeInfo);
      v11 = TitleInfoEventFactoryUnit_TypeInfo;
    }
    SPRITE_NAME_ICON = v11->static_fields->SPRITE_NAME_ICON;
    v23 = eventId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, *(_QWORD *)&factoryId, *(_QWORD *)&lv, method);
    v22 = factoryId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
    v18 = System_String__Format_62539620(SPRITE_NAME_ICON, v13, v17, 0LL);
    iconSprite = this->fields.iconSprite;
    v20 = v18;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(iconSprite, v20, 0LL);
    TitleInfoEventFactoryUnit__CreateIcon(this, lv - this->fields.lv, 0, v21);
  }
}