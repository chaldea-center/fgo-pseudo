void TitleInfoEventFactoryUnit___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CECF6C & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventFactoryUnit_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19538/*"factory_{0}_{1}"*/);
    byte_4CECF6C = 1;
  }
  TitleInfoEventFactoryUnit_TypeInfo->static_fields->SPRITE_NAME_ICON = (struct System_String_o *)StringLiteral_19538/*"factory_{0}_{1}"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields,
    StringLiteral_19538/*"factory_{0}_{1}"*/,
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *v20; // x21
  float v21; // s11
  struct UIGrid_o *v22; // x8
  float v23; // s12
  float v24; // s8
  float v25; // s9
  float v26; // s10
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Component_o *v28; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CECF6B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C7BAE8(&Method_UITweener_Begin_TweenPosition___);
    byte_4CECF6B = 1;
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
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        if ( !v10 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v10,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
                                                    (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenAlpha___);
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
    sub_1C7BD40(iconSprite, *(_QWORD *)&count);
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
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    v19 = UnityEngine_Component__get_gameObject(iconSprite, 0);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v19,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_40;
    v20 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLabel,
                                              0);
    if ( !iconSprite )
      goto LABEL_40;
    v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    if ( !v20 )
      goto LABEL_40;
    v21 = (float)count;
    *(float *)&v20[5].monitor = v30.fields.x;
    HIDWORD(v20[5].monitor) = LODWORD(v30.fields.y);
    *(float *)&v20[6].klass = y;
    *((float *)&v20[6].klass + 1) = z;
    *(float *)&v20[5].fields.m_CachedPtr = v30.fields.z;
    *((float *)&v20[5].fields.m_CachedPtr + 1) = x + (float)(cellWidth * (float)count);
    LODWORD(v20[1].monitor) = 2;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
    if ( !iconSprite )
      goto LABEL_40;
    v31 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    v22 = this->fields.grid;
    if ( !v22 )
      goto LABEL_40;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_40;
    v23 = v22->fields.cellWidth;
    v24 = v31.fields.x;
    v25 = v31.fields.y;
    v26 = v31.fields.z;
    v27 = UnityEngine_Component__get_gameObject(iconSprite, 0);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v27,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLeftLabel )
      goto LABEL_40;
    v28 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLeftLabel,
                                              0);
    if ( !iconSprite )
      goto LABEL_40;
    v32 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    if ( !v28 )
      goto LABEL_40;
    *(float *)&v28[5].monitor = v32.fields.x;
    HIDWORD(v28[5].monitor) = LODWORD(v32.fields.y);
    *(float *)&v28[6].klass = v25;
    *((float *)&v28[6].klass + 1) = v26;
    *(float *)&v28[5].fields.m_CachedPtr = v32.fields.z;
    *((float *)&v28[5].fields.m_CachedPtr + 1) = v24 + (float)(v23 * v21);
    LODWORD(v28[1].monitor) = 2;
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
  float v5; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid
    || (grid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(grid, 0)) == 0
    || (result = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)grid, 0),
        (v4 = this->fields.grid) == 0) )
  {
    sub_1C7BD40(grid, method);
  }
  v5 = result.fields.x + (float)(v4->fields.cellWidth * (float)this->fields.lv);
  result.fields.x = v5;
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

  if ( (byte_4CECF6A & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventFactoryUnit_TypeInfo);
    byte_4CECF6A = 1;
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
    v13 = System_String__Format_64218220(SPRITE_NAME_ICON, v11, v12, 0);
    iconSprite = this->fields.iconSprite;
    v15 = v13;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(iconSprite, v15, 0);
    TitleInfoEventFactoryUnit__CreateIcon(this, lv - this->fields.lv, 0, v16);
  }
}