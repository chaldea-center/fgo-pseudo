void TitleInfoEventFactoryUnit___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2F1C6 & 1) == 0 )
  {
    sub_1C93AD4(&TitleInfoEventFactoryUnit_TypeInfo);
    sub_1C93AD4(&StringLiteral_19591/*"factory_{0}_{1}"*/);
    byte_4D2F1C6 = 1;
  }
  TitleInfoEventFactoryUnit_TypeInfo->static_fields->SPRITE_NAME_ICON = (struct System_String_o *)StringLiteral_19591/*"factory_{0}_{1}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields,
    StringLiteral_19591/*"factory_{0}_{1}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void TitleInfoEventFactoryUnit___ctor(TitleInfoEventFactoryUnit_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventFactoryUnit__CreateIcon(
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
  struct UIGrid_o *grid; // x8
  float cellWidth; // s12
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *v17; // x21
  float v18; // s11
  struct UIGrid_o *v19; // x8
  float v20; // s12
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Component_o *v22; // x20
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v24; // 0:kr14_12.12
  UnityEngine_Vector3_o v25; // 0:kr20_12.12
  UnityEngine_Vector3_o v26; // 0:kr34_12.12

  if ( (byte_4D2F1C5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C93AD4(&Method_UITweener_Begin_TweenPosition___);
    byte_4D2F1C5 = 1;
  }
  if ( count >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
      if ( !iconSprite )
        break;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(iconSprite, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__Instantiate_object_(
              gameObject,
              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        if ( !v10 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v10,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !Component_object )
            break;
          UIWidget__set_depth(
            (UIWidget_o *)Component_object,
            v7 + LODWORD(Component_object[11].klass) + this->fields.lv,
            0);
        }
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v10,
          (UnityEngine_Component_o *)this->fields.grid,
          0);
        if ( isAnimation )
        {
          iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                    (UnityEngine_GameObject_o *)v10,
                                                    this->fields.lvUpAnimetionTime,
                                                    (const MethodInfo_327A3AC *)Method_UITweener_Begin_TweenAlpha___);
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
    sub_1C93D2C(iconSprite, *(_QWORD *)&count);
  }
LABEL_19:
  lvLabel = this->fields.lvLabel;
  this->fields.lv += count;
  iconSprite = (UnityEngine_Component_o *)System_Int32__ToString((int)this + 76, 0);
  if ( !lvLabel )
    goto LABEL_40;
  UILabel__set_text(lvLabel, (System_String_o *)iconSprite, 0);
  iconSprite = (UnityEngine_Component_o *)this->fields.lvBase;
  if ( !iconSprite )
    goto LABEL_40;
  v13 = UnityEngine_Component__get_gameObject(iconSprite, 0);
  if ( isAnimation )
  {
    GameObjectExtensions__SetParent(v13, (UnityEngine_Component_o *)this, 0);
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
    if ( !iconSprite )
      goto LABEL_40;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_40;
    cellWidth = grid->fields.cellWidth;
    v16 = UnityEngine_Component__get_gameObject(iconSprite, 0);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v16,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_327A3AC *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_40;
    v17 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLabel,
                                              0);
    if ( !iconSprite )
      goto LABEL_40;
    v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    if ( !v17 )
      goto LABEL_40;
    v18 = (float)count;
    *(float *)&v17[5].monitor = v24.fields.x;
    HIDWORD(v17[5].monitor) = LODWORD(v24.fields.y);
    *(float *)&v17[6].klass = localPosition.fields.y;
    HIDWORD(v17[6].klass) = LODWORD(localPosition.fields.z);
    *(float *)&v17[5].fields.m_CachedPtr = v24.fields.z;
    *((float *)&v17[5].fields.m_CachedPtr + 1) = localPosition.fields.x + (float)(cellWidth * (float)count);
    LODWORD(v17[1].monitor) = 2;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
    if ( !iconSprite )
      goto LABEL_40;
    v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    v19 = this->fields.grid;
    if ( !v19 )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    v20 = v19->fields.cellWidth;
    v21 = UnityEngine_Component__get_gameObject(iconSprite, 0);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v21,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_327A3AC *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLeftLabel )
      goto LABEL_40;
    v22 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLeftLabel,
                                              0);
    if ( !iconSprite )
      goto LABEL_40;
    v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    if ( !v22 )
      goto LABEL_40;
    *(float *)&v22[5].monitor = v26.fields.x;
    HIDWORD(v22[5].monitor) = LODWORD(v26.fields.y);
    *(float *)&v22[6].klass = v25.fields.y;
    HIDWORD(v22[6].klass) = LODWORD(v25.fields.z);
    *(float *)&v22[5].fields.m_CachedPtr = v26.fields.z;
    *((float *)&v22[5].fields.m_CachedPtr + 1) = v25.fields.x + (float)(v20 * v18);
    LODWORD(v22[1].monitor) = 2;
  }
  else
  {
    GameObjectExtensions__SetParent(v13, (UnityEngine_Component_o *)this->fields.grid, 0);
  }
  iconSprite = (UnityEngine_Component_o *)this->fields.grid;
  if ( !iconSprite )
    goto LABEL_40;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))iconSprite->klass[1]._1.element_class)(
    iconSprite,
    iconSprite->klass[1]._1.castClass);
}


UnityEngine_Vector3_o TitleInfoEventFactoryUnit__GetLvUpEffectOffset(
        TitleInfoEventFactoryUnit_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  struct UIGrid_o *v4; // x8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid
    || (grid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(grid, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)grid, 0),
        result.fields.y = localPosition.fields.y,
        result.fields.z = localPosition.fields.z,
        (v4 = this->fields.grid) == 0) )
  {
    sub_1C93D2C(grid, method);
  }
  result.fields.x = localPosition.fields.x + (float)(v4->fields.cellWidth * (float)this->fields.lv);
  return result;
}


void TitleInfoEventFactoryUnit__LvUp(TitleInfoEventFactoryUnit_o *this, int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.lv >= 1 )
    TitleInfoEventFactoryUnit__CreateIcon(this, count, 1, v3);
}


void TitleInfoEventFactoryUnit__Open(
        TitleInfoEventFactoryUnit_o *this,
        int32_t eventId,
        int32_t factoryId,
        int32_t lv,
        const MethodInfo *method)
{
  TitleInfoEventFactoryUnit_c *v9; // x0
  System_String_o *SPRITE_NAME_ICON; // x23
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  UISprite_o *iconSprite; // x22
  System_String_o *v15; // x21
  const MethodInfo *v16; // x3
  int32_t v17; // [xsp+8h] [xbp-38h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2F1C4 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&TitleInfoEventFactoryUnit_TypeInfo);
    byte_4D2F1C4 = 1;
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
    v18 = eventId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v17 = factoryId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v13 = System_String__Format_64467032(SPRITE_NAME_ICON, v11, v12, 0);
    iconSprite = this->fields.iconSprite;
    v15 = v13;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(iconSprite, v15, 0);
    TitleInfoEventFactoryUnit__CreateIcon(this, lv - this->fields.lv, 0, v16);
  }
}