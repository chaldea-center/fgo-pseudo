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
  __int64 v9; // x2

  if ( (byte_4B144F8 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventFactoryUnit_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19565/*"factory_{0}_{1}"*/, v8, v9);
    byte_4B144F8 = 1;
  }
  TitleInfoEventFactoryUnit_TypeInfo->static_fields->SPRITE_NAME_ICON = (struct System_String_o *)StringLiteral_19565/*"factory_{0}_{1}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields,
    StringLiteral_19565/*"factory_{0}_{1}"*/,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int v15; // w24
  UnityEngine_Component_o *iconSprite; // x0
  __int64 v17; // x1
  Il2CppObject *gameObject; // x22
  Il2CppObject *v19; // x22
  __int64 v20; // x1
  Il2CppObject *Component_object; // x23
  UILabel_o *lvLabel; // x22
  UnityEngine_GameObject_o *v23; // x0
  float v24; // s0
  int v25; // s1
  int v26; // s2
  struct UIGrid_o *grid; // x8
  float cellWidth; // s12
  float v29; // s8
  int v30; // s9
  int v31; // s10
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Component_o *v33; // x21
  int v34; // s0
  int v35; // s1
  intptr_t v36; // s2
  float v37; // s11
  float v38; // s0
  int v39; // s1
  int v40; // s2
  struct UIGrid_o *v41; // x8
  float v42; // s12
  float v43; // s8
  int v44; // s9
  int v45; // s10
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *v47; // x20
  int v48; // s0
  int v49; // s1
  intptr_t v50; // s2

  if ( (byte_4B144F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, *(_QWORD *)&count, isAnimation);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, v11, v12);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v13, v14);
    byte_4B144F7 = 1;
  }
  if ( count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
      if ( !iconSprite )
        break;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(iconSprite, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      v19 = UnityEngine_Object__Instantiate_object_(
              gameObject,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        if ( !v19 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v19,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
            v15 + LODWORD(Component_object[11].klass) + this->fields.lv,
            0LL);
        }
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v19,
          (UnityEngine_Component_o *)this->fields.grid,
          0LL);
        if ( isAnimation )
        {
          iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                    (UnityEngine_GameObject_o *)v19,
                                                    this->fields.lvUpAnimetionTime,
                                                    (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
          if ( !iconSprite )
            break;
          iconSprite[5].monitor = (void *)0x3F80000000000000LL;
          LODWORD(iconSprite[1].monitor) = 6;
        }
      }
      if ( count == ++v15 )
        goto LABEL_19;
    }
LABEL_40:
    sub_1BCAA3C(iconSprite, *(_QWORD *)&count);
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
  v23 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
  if ( isAnimation )
  {
    GameObjectExtensions__SetParent(v23, (UnityEngine_Component_o *)this, 0LL);
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_40;
    cellWidth = grid->fields.cellWidth;
    v29 = v24;
    v30 = v25;
    v31 = v26;
    v32 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v32,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_40;
    v33 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLabel,
                                              0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v33 )
      goto LABEL_40;
    v37 = (float)count;
    LODWORD(v33[5].monitor) = v34;
    HIDWORD(v33[5].monitor) = v35;
    LODWORD(v33[6].klass) = v30;
    HIDWORD(v33[6].klass) = v31;
    v33[5].fields.m_CachedPtr = v36;
    *((float *)&v33[5].fields + 1) = v29 + (float)(cellWidth * (float)count);
    LODWORD(v33[1].monitor) = 2;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    v41 = this->fields.grid;
    if ( !v41 )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    v42 = v41->fields.cellWidth;
    v43 = v38;
    v44 = v39;
    v45 = v40;
    v46 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v46,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLeftLabel )
      goto LABEL_40;
    v47 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLeftLabel,
                                              0LL);
    if ( !iconSprite )
      goto LABEL_40;
    *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)iconSprite,
                                       0LL);
    if ( !v47 )
      goto LABEL_40;
    LODWORD(v47[5].monitor) = v48;
    HIDWORD(v47[5].monitor) = v49;
    LODWORD(v47[6].klass) = v44;
    HIDWORD(v47[6].klass) = v45;
    v47[5].fields.m_CachedPtr = v50;
    *((float *)&v47[5].fields + 1) = v43 + (float)(v42 * v37);
    LODWORD(v47[1].monitor) = 2;
  }
  else
  {
    GameObjectExtensions__SetParent(v23, (UnityEngine_Component_o *)this->fields.grid, 0LL);
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
    sub_1BCAA3C(grid, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  TitleInfoEventFactoryUnit_c *v13; // x0
  System_String_o *SPRITE_NAME_ICON; // x23
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  UISprite_o *iconSprite; // x22
  System_String_o *v20; // x21
  const MethodInfo *v21; // x3
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B144F6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&factoryId);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&TitleInfoEventFactoryUnit_TypeInfo, v11, v12);
    byte_4B144F6 = 1;
  }
  if ( lv >= 1 && this->fields.lv <= 0 )
  {
    this->fields.lv = 1;
    v13 = TitleInfoEventFactoryUnit_TypeInfo;
    if ( !TitleInfoEventFactoryUnit_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactoryUnit_TypeInfo, *(_QWORD *)&eventId);
      v13 = TitleInfoEventFactoryUnit_TypeInfo;
    }
    SPRITE_NAME_ICON = v13->static_fields->SPRITE_NAME_ICON;
    v23 = eventId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v22 = factoryId;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v17 = System_String__Format_62415592(SPRITE_NAME_ICON, v15, v16, 0LL);
    iconSprite = this->fields.iconSprite;
    v20 = v17;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
    AtlasManager__SetEventUI(iconSprite, v20, 0LL);
    TitleInfoEventFactoryUnit__CreateIcon(this, lv - this->fields.lv, 0, v21);
  }
}