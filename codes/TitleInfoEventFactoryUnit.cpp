void TitleInfoEventFactoryUnit___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596E7A9 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventFactoryUnit_TypeInfo);
    sub_2213A60(&StringLiteral_20291/*"factory_{0}_{1}"*/);
    byte_596E7A9 = 1;
  }
  v7 = StringLiteral_20291/*"factory_{0}_{1}"*/;
  TitleInfoEventFactoryUnit_TypeInfo->static_fields->SPRITE_NAME_ICON = (struct System_String_o *)StringLiteral_20291/*"factory_{0}_{1}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventFactoryUnit_TypeInfo->static_fields,
    v7,
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *gameObject; // x22
  Il2CppObject *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Component_object; // x23
  UILabel_o *lvLabel; // x22
  UnityEngine_GameObject_o *v17; // x0
  struct UIGrid_o *grid; // x8
  float cellWidth; // s12
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *v21; // x21
  float v22; // s11
  struct UIGrid_o *v23; // x8
  float v24; // s12
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v29; // 0:kr14_12.12
  UnityEngine_Vector3_o v30; // 0:kr20_12.12
  UnityEngine_Vector3_o v31; // 0:kr34_12.12

  if ( (byte_596E7A8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenAlpha___);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596E7A8 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      v12 = UnityEngine_Object__Instantiate_object_(
              gameObject,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      iconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        if ( !v12 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v12,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
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
            v7 + this->fields.lv + LODWORD(Component_object[11].klass),
            0);
        }
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v12,
          (UnityEngine_Component_o *)this->fields.grid,
          0);
        if ( isAnimation )
        {
          iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                                    (UnityEngine_GameObject_o *)v12,
                                                    this->fields.lvUpAnimetionTime,
                                                    (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenAlpha___);
          if ( !iconSprite )
            break;
          iconSprite[5].monitor = (void *)0x3F80000000000000LL;
          LODWORD(iconSprite[1].monitor) = 6;
        }
      }
      if ( count == ++v7 )
        goto LABEL_19;
    }
LABEL_41:
    sub_2213CDC(iconSprite, *(_QWORD *)&count);
  }
LABEL_19:
  lvLabel = this->fields.lvLabel;
  this->fields.lv += count;
  iconSprite = (UnityEngine_Component_o *)System_Int32__ToString((int)this + 76, 0);
  if ( !lvLabel )
    goto LABEL_41;
  UILabel__set_text(lvLabel, (System_String_o *)iconSprite, 0);
  iconSprite = (UnityEngine_Component_o *)this->fields.lvBase;
  if ( isAnimation )
  {
    if ( !iconSprite )
      goto LABEL_41;
    v17 = UnityEngine_Component__get_gameObject(iconSprite, 0);
    GameObjectExtensions__SetParent(v17, (UnityEngine_Component_o *)this, 0);
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_41;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
    if ( !iconSprite )
      goto LABEL_41;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    grid = this->fields.grid;
    if ( !grid )
      goto LABEL_41;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLabel;
    if ( !iconSprite )
      goto LABEL_41;
    cellWidth = grid->fields.cellWidth;
    v20 = UnityEngine_Component__get_gameObject(iconSprite, 0);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v20,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLabel )
      goto LABEL_41;
    v21 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLabel,
                                              0);
    if ( !iconSprite )
      goto LABEL_41;
    v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    if ( !v21 )
      goto LABEL_41;
    v22 = (float)count;
    *(float *)&v21[5].monitor = v29.fields.x;
    HIDWORD(v21[5].monitor) = LODWORD(v29.fields.y);
    *(float *)&v21[6].klass = localPosition.fields.y;
    HIDWORD(v21[6].klass) = LODWORD(localPosition.fields.z);
    LODWORD(v21[1].monitor) = 2;
    *(float *)&v21[5].fields.m_CachedPtr = v29.fields.z;
    *((float *)&v21[5].fields.m_CachedPtr + 1) = localPosition.fields.x + (float)(cellWidth * (float)count);
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_41;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSprite, 0);
    if ( !iconSprite )
      goto LABEL_41;
    v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    v23 = this->fields.grid;
    if ( !v23 )
      goto LABEL_41;
    iconSprite = (UnityEngine_Component_o *)this->fields.lvLeftLabel;
    if ( !iconSprite )
      goto LABEL_41;
    v24 = v23->fields.cellWidth;
    v25 = UnityEngine_Component__get_gameObject(iconSprite, 0);
    iconSprite = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                              v25,
                                              this->fields.lvUpAnimetionTime,
                                              (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
    if ( !this->fields.lvLeftLabel )
      goto LABEL_41;
    v26 = iconSprite;
    iconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.lvLeftLabel,
                                              0);
    if ( !iconSprite )
      goto LABEL_41;
    v31 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0);
    if ( !v26 )
      goto LABEL_41;
    *(float *)&v26[5].monitor = v31.fields.x;
    HIDWORD(v26[5].monitor) = LODWORD(v31.fields.y);
    *(float *)&v26[6].klass = v30.fields.y;
    HIDWORD(v26[6].klass) = LODWORD(v30.fields.z);
    LODWORD(v26[1].monitor) = 2;
    *(float *)&v26[5].fields.m_CachedPtr = v31.fields.z;
    *((float *)&v26[5].fields.m_CachedPtr + 1) = v30.fields.x + (float)(v24 * v22);
  }
  else
  {
    if ( !iconSprite )
      goto LABEL_41;
    v27 = UnityEngine_Component__get_gameObject(iconSprite, 0);
    GameObjectExtensions__SetParent(v27, (UnityEngine_Component_o *)this->fields.grid, 0);
  }
  iconSprite = (UnityEngine_Component_o *)this->fields.grid;
  if ( !iconSprite )
    goto LABEL_41;
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
    sub_2213CDC(grid, method);
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


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventFactoryUnit__Open(
        TitleInfoEventFactoryUnit_o *this,
        int32_t eventId,
        int32_t factoryId,
        int32_t lv,
        const MethodInfo *method)
{
  TitleInfoEventFactoryUnit_c *v9; // x0
  System_String_o **p_SPRITE_NAME_ICON; // x8
  System_String_o *v11; // x23
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x21
  UISprite_o *iconSprite; // x22
  const MethodInfo *v18; // x3
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596E7A7 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&TitleInfoEventFactoryUnit_TypeInfo);
    byte_596E7A7 = 1;
  }
  if ( lv >= 1 && this->fields.lv <= 0 )
  {
    this->fields.lv = 1;
    v9 = TitleInfoEventFactoryUnit_TypeInfo;
    if ( !*(&TitleInfoEventFactoryUnit_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventFactoryUnit_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&factoryId);
      v9 = TitleInfoEventFactoryUnit_TypeInfo;
    }
    p_SPRITE_NAME_ICON = &v9->static_fields->SPRITE_NAME_ICON;
    v20 = eventId;
    v11 = *p_SPRITE_NAME_ICON;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
    v19 = factoryId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
    v16 = System_String__Format_75697880(v11, v12, v13, 0);
    iconSprite = this->fields.iconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v15);
    AtlasManager__SetEventUI(iconSprite, v16, 0);
    TitleInfoEventFactoryUnit__CreateIcon(this, lv - this->fields.lv, 0, v18);
  }
}