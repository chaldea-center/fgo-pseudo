void UIScriptEquip___ctor(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D32A87 & 1) == 0 )
  {
    sub_1C93AD4(&UIEquipGraphM___TypeInfo);
    sub_1C93AD4(&UIScriptChara_TypeInfo);
    byte_4D32A87 = 1;
  }
  v3 = (struct UIEquipGraphM_array *)sub_1C93B7C(UIEquipGraphM___TypeInfo, 2);
  this->fields.equipGraphList = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipGraphList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
  this->fields.backIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIScriptEquip__ChangeCharacter(
        UIScriptEquip_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x0
  __int64 v14; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v19; // x22
  UIEquipGraphRender_o *v20; // x23
  System_Action_o *v21; // x23

  if ( (byte_4D32A82 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UIScriptEquip_UpdateChange__);
    byte_4D32A82 = 1;
  }
  UIScriptChara__ChangeCharacter_45607704((UIScriptChara_o *)this, kind, speed, imageName, faceType, callback, method);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C93D34(v13);
  }
  v19 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
  v20 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex];
  this->fields.isDisp = 0;
  if ( !v19
    || (UIEquipGraphRender__SetActive(v19, 1, 0),
        UIEquipGraphRender__SetAlpha(v19, 0.0, 0),
        UIEquipGraphRender__SetDepth(v19, 0.1, 0),
        !v20) )
  {
LABEL_9:
    sub_1C93D2C(v13, v14);
  }
  UIEquipGraphRender__SetDepth(v20, 0.0, 0);
  UIEquipGraphRender__SetShadow(v19, this->fields.isShadow, 0);
  v21 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_UIScriptEquip_UpdateChange__, 0);
  UIEquipGraphM__SetCharacter((UIEquipGraphM_o *)v19, imageName, faceType, v21, 0);
}


void UIScriptEquip__ContinueChangeFade(UIScriptEquip_o *this, const MethodInfo *method)
{
  if ( (byte_4D32A84 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15284/*"UpdateChange"*/);
    byte_4D32A84 = 1;
  }
  UIScriptEquip__SetOverlap(this, 1.0, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15284/*"UpdateChange"*/,
    this->fields.changeStep,
    0);
}


void UIScriptEquip__EndChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  UIScriptEquip_o *v5; // x19
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  GrandQuestFolderBoardItem_o *p_changeCallback; // x19
  struct System_Action_o *v15; // x20
  struct System_Action_o *changeCallback; // t1

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  v5 = this;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C93D34(this);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, 1.0, 0),
        !v7) )
  {
LABEL_9:
    sub_1C93D2C(this, method);
  }
  UIEquipGraphRender__SetAlpha(v7, 0.0, 0);
  UIEquipGraphM__ReleaseCharacter((UIEquipGraphM_o *)v7, 0);
  changeCallback = v5->fields.changeCallback;
  p_changeCallback = (GrandQuestFolderBoardItem_o *)&v5->fields.changeCallback;
  v15 = changeCallback;
  LODWORD(p_changeCallback[-1].fields._Name_k__BackingField) = 0;
  if ( changeCallback )
  {
    p_changeCallback->klass = 0;
    sub_1C93A78(p_changeCallback, 0, v8, v9, v10, v11, v12, v13);
    ((void (__fastcall *)(intptr_t, intptr_t))v15->fields.invoke_impl)(v15->fields.method_code, v15->fields.method);
  }
}


void UIScriptEquip__EndSet(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v4; // x19
  Il2CppClass **v5; // x8
  UIEquipGraphRender_o *v6; // x20
  UnityEngine_Vector2_o CenterOffset; // kr40_8
  float v8; // s10
  float v9; // s10
  float v10; // s10
  float v11; // s10
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  GrandQuestFolderBoardItem_o *p_setCallback; // x19
  struct System_Action_o *v19; // x20
  struct System_Action_o *setCallback; // t1
  float z; // s2
  float v22; // s2
  float v23; // s2
  float v24; // s2
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_23;
  mainIndex = this->fields.mainIndex;
  v4 = this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C93D34(this);
  v5 = &equipGraphList->obj.klass + mainIndex;
  v6 = (UIEquipGraphRender_o *)v5[4];
  if ( !v6 )
    goto LABEL_23;
  UIEquipGraphM__SetDispOffset((UIEquipGraphM_o *)v5[4], 0);
  CenterOffset = UIEquipGraphRender__GetCenterOffset(v6, 0);
  this = (UIScriptEquip_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z;
  this = (UIScriptEquip_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  v8 = z;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v25.fields.x = CenterOffset.fields.x;
  v25.fields.y = CenterOffset.fields.y;
  v25.fields.z = v8;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0);
  this = (UIScriptEquip_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z;
  this = (UIScriptEquip_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  v9 = v22;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v26.fields.x = CenterOffset.fields.x;
  v26.fields.y = CenterOffset.fields.y;
  v26.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0);
  this = (UIScriptEquip_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z;
  this = (UIScriptEquip_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  v10 = v23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v27.fields.x = CenterOffset.fields.x;
  v27.fields.y = CenterOffset.fields.y;
  v27.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v27, 0);
  this = (UIScriptEquip_o *)v4->fields.baseShadowEffect;
  if ( !this
    || (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0
    || (v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z,
        (this = (UIScriptEquip_o *)v4->fields.baseShadowEffect) == 0)
    || (v11 = v24,
        (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0) )
  {
LABEL_23:
    sub_1C93D2C(this, method);
  }
  v28.fields.x = CenterOffset.fields.x;
  v28.fields.y = CenterOffset.fields.y;
  v28.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v28, 0);
  setCallback = v4->fields.setCallback;
  p_setCallback = (GrandQuestFolderBoardItem_o *)&v4->fields.setCallback;
  v19 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0;
    sub_1C93A78(p_setCallback, 0, v12, v13, v14, v15, v16, v17);
    ((void (__fastcall *)(intptr_t, intptr_t))v19->fields.invoke_impl)(v19->fields.method_code, v19->fields.method);
  }
}


bool UIScriptEquip__IsBusyMoveAlpha(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIEquipGraphM_o *v4; // x8

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C93D34(this);
  v4 = equipGraphList->m_Items[mainIndex];
  if ( !v4 )
LABEL_5:
    sub_1C93D2C(this, method);
  return v4->fields.isBusyMoveAlpha;
}


void UIScriptEquip__MoveAlpha(UIScriptEquip_o *this, float duration, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19
  const MethodInfo *v7; // x2

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C93D34(this);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1C93D2C(this, method);
  UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, duration, a, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v6, 0, v7);
}


void UIScriptEquip__MoveAlphaSpeed(UIScriptEquip_o *this, float speed, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19
  const MethodInfo *v7; // x2

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C93D34(this);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1C93D2C(this, method);
  UIEquipGraphRender__MoveAlphaSpeed((UIEquipGraphRender_o *)this, speed, a, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v6, 0, v7);
}


void UIScriptEquip__SetAlpha(UIScriptEquip_o *this, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v5; // x19
  const MethodInfo *v6; // x2

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v5 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C93D34(this);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1C93D2C(this, method);
  UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0);
  UIScriptChara__RecoverShadowEffect(v5, 0, v6);
}


void UIScriptEquip__SetCharacter(
        UIScriptEquip_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  Il2CppClass **v16; // x8
  UIEquipGraphM_o *v17; // x22
  System_Action_o *v18; // x23

  if ( (byte_4D32A85 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D32A85 = 1;
  }
  this->fields.setCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.setCallback,
    (int32_t)callback,
    faceType,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C93D34(v12);
  v16 = &equipGraphList->obj.klass + mainIndex;
  v17 = (UIEquipGraphM_o *)v16[4];
  if ( !v17 )
LABEL_7:
    sub_1C93D2C(v12, v13);
  UIEquipGraphRender__SetFilter((UIEquipGraphRender_o *)v16[4], this->fields.filterName, this->fields.filterColor, 0);
  v18 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, (intptr_t)this->klass->vtable._12_EndSet.method, 0);
  UIEquipGraphM__SetCharacter(v17, imageName, faceType, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptEquip__SetDepth(UIScriptEquip_o *this, int32_t d, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v5; // x21
  UIEquipGraphRender_o *v6; // x19
  UnityEngine_Vector3_o v9; // 0:kr14_12.12
  unsigned __int64 localPosition; // 0:s0.4,4:s1.4

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C93D34(this);
  this = (UIScriptEquip_o *)this->fields.baseDepth;
  if ( !this
    || (v6 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex],
        localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptEquip_o *)v5->fields.baseDepth) == 0)
    || (*(_QWORD *)&v9.fields.x = localPosition,
        v9.fields.z = (float)-d * 10.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0),
        !v6) )
  {
LABEL_7:
    sub_1C93D2C(this, *(_QWORD *)&d);
  }
  UIEquipGraphRender__SetDepth(v6, 0.1, 0);
}


void UIScriptEquip__SetFilter(
        UIScriptEquip_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_String_o **p_filterName; // x19
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIEquipGraphRender_o *v14; // x0
  __int64 v15; // x1
  struct System_String_o *v16; // x8
  __int64 v17; // x9
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.filterName = filterName;
  p_filterName = &this->fields.filterName;
  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  v16 = p_filterName[26];
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
  if ( !v16 )
    goto LABEL_5;
  v17 = *((int *)p_filterName + 16);
  if ( (unsigned int)v17 >= LODWORD(v16[1].klass) )
    sub_1C93D34(v14);
  v14 = (UIEquipGraphRender_o *)*((_QWORD *)&v16[1].monitor + v17);
  if ( !v14 )
LABEL_5:
    sub_1C93D2C(v14, v15);
  v18.fields.b = b;
  v18.fields.a = a;
  v18.fields.r = r;
  v18.fields.g = g;
  UIEquipGraphRender__SetFilter(v14, *p_filterName, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptEquip__SetMaskInteraction(UIScriptEquip_o *this, int32_t maskInteraction, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x20
  int max_length; // w8
  unsigned int v6; // w21

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  max_length = equipGraphList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C93D34(this);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetMaskInteraction((UIEquipGraphRender_o *)this, maskInteraction, 0);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C93D2C(this, *(_QWORD *)&maskInteraction);
  }
}


void UIScriptEquip__SetOverlap(UIScriptEquip_o *this, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v7; // x19

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C93D34(this);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0),
        !v7) )
  {
LABEL_7:
    sub_1C93D2C(this, method);
  }
  UIEquipGraphRender__SetAlpha(v7, 1.0 - a, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptEquip__SetShadow(UIScriptEquip_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  UIScriptChara_o *v5; // x19
  __int64 mainIndex; // x9
  const MethodInfo *v9; // x2
  __int64 backIndex; // x8
  UIScriptChara_c *klass; // x9

  if ( this->fields.isShadow != isShadow )
  {
    equipGraphList = this->fields.equipGraphList;
    v5 = (UIScriptChara_o *)this;
    this->fields.isShadow = isShadow;
    if ( !equipGraphList )
      goto LABEL_11;
    mainIndex = this->fields.mainIndex;
    if ( (unsigned int)mainIndex < LODWORD(equipGraphList->max_length) )
    {
      this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
      if ( !this )
        goto LABEL_11;
      UIEquipGraphRender__SetShadow((UIEquipGraphRender_o *)this, isShadow, 0);
      backIndex = (unsigned int)v5->fields.backIndex;
      if ( (backIndex & 0x80000000) != 0 )
      {
LABEL_10:
        UIScriptChara__RecoverShadowEffect(v5, isSkip, v9);
        return;
      }
      klass = v5[1].klass;
      if ( !klass )
LABEL_11:
        sub_1C93D2C(this, isShadow);
      if ( (unsigned int)backIndex < LODWORD(klass->_1.namespaze) )
      {
        this = (UIScriptEquip_o *)*((_QWORD *)&klass->_1.byval_arg.data + backIndex);
        if ( this )
        {
          UIEquipGraphRender__SetShadow((UIEquipGraphRender_o *)this, isShadow, 0);
          goto LABEL_10;
        }
        goto LABEL_11;
      }
    }
    sub_1C93D34(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptEquip__SetSortingOrder(UIScriptEquip_o *this, int32_t order, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x20
  int max_length; // w8
  unsigned int v6; // w21

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  max_length = equipGraphList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C93D34(this);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetSortingOrder((UIEquipGraphRender_o *)this, order, 0);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C93D2C(this, *(_QWORD *)&order);
  }
}


void UIScriptEquip__SetSpecialEffect(
        UIScriptEquip_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float z; // s13
  float y; // s14
  float x; // s15
  float v20; // s4
  float v21; // s5
  float v22; // s6
  UnityEngine_Object_o *CharaEffect; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  uint32_t v27; // w0
  __int64 *v28; // x8
  const MethodInfo *v29; // x2
  float colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4D32A86 & 1) == 0 )
  {
    colora = color.fields.a;
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_25159/*"wipe"*/);
    sub_1C93AD4(&StringLiteral_16942/*"appearanceReverse"*/);
    sub_1C93AD4(&StringLiteral_18607/*"darkEnemyErasure"*/);
    sub_1C93AD4(&StringLiteral_25165/*"wipeTimeRe"*/);
    sub_1C93AD4(&StringLiteral_18608/*"darkWipe"*/);
    sub_1C93AD4(&StringLiteral_19691/*"flashErasure"*/);
    sub_1C93AD4(&StringLiteral_16941/*"appearance"*/);
    sub_1C93AD4(&StringLiteral_19258/*"erasure"*/);
    sub_1C93AD4(&StringLiteral_19259/*"erasureReverse"*/);
    sub_1C93AD4(&StringLiteral_19219/*"enemyErasure"*/);
    sub_1C93AD4(&StringLiteral_25164/*"wipeTime"*/);
    color.fields.a = colora;
    byte_4D32A86 = 1;
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  v20 = r;
  v21 = g;
  v22 = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v31,
                                          time,
                                          color,
                                          range,
                                          isSkip,
                                          isPause,
                                          0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = UnityEngine_Object__op_Equality(CharaEffect, 0, 0);
  if ( !v24 )
  {
    equipGraphList = this->fields.equipGraphList;
    if ( !equipGraphList )
      sub_1C93D2C(v24, v25);
    if ( this->fields.mainIndex >= LODWORD(equipGraphList->max_length) )
      sub_1C93D34(v24);
    v27 = PrivateImplementationDetails___ComputeStringHash(n, 0);
    if ( v27 > 0x8D759330 )
    {
      if ( v27 > 0xD4B34506 )
      {
        switch ( v27 )
        {
          case 0xE7555186:
            v28 = &StringLiteral_25159/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v28 = &StringLiteral_18608/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v28 = &StringLiteral_16941/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v27 )
        {
          case 0x8DA714B6:
            v28 = &StringLiteral_25165/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v28 = &StringLiteral_19691/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v28 = &StringLiteral_19259/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v27 > 0x4A1132BE )
    {
      switch ( v27 )
      {
        case 0x8D759330:
          v28 = &StringLiteral_19258/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v28 = &StringLiteral_19219/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v28 = &StringLiteral_16942/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v27 == 242689791 )
    {
      v28 = &StringLiteral_25164/*"wipeTime"*/;
    }
    else
    {
      if ( v27 != 1242641086 )
        return;
      v28 = &StringLiteral_18607/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v28, 0) )
      UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, v29);
  }
}


void UIScriptEquip__UpdateChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  UIScriptEquip_o *v2; // x19
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  int32_t changeKind; // w11
  float v8; // s0
  float v9; // s8
  float changeRange; // s0
  UIScriptChara_c *v11; // x0
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s0
  UIEquipGraphRender_o *v16; // x20
  float changeSpeed; // s8
  UIScriptChara_c *v18; // x0
  float changeTotal; // s9
  float v20; // s8
  float UNIT_SPEED; // s0

  v2 = this;
  if ( (byte_4D32A83 & 1) == 0 )
  {
    sub_1C93AD4(&UIScriptChara_TypeInfo);
    sub_1C93AD4(&StringLiteral_6011/*"EndChange"*/);
    this = (UIScriptEquip_o *)sub_1C93AD4(&StringLiteral_4719/*"ContinueChangeFade"*/);
    byte_4D32A83 = 1;
  }
  equipGraphList = v2->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_25;
  mainIndex = v2->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v2->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C93D34(this);
  }
  changeKind = v2->fields.changeKind;
  if ( changeKind != 3 )
  {
    if ( changeKind != 2 )
    {
      if ( changeKind != 1 )
        return;
LABEL_16:
      UIScriptEquip__EndChange(v2, method);
      return;
    }
    this = (UIScriptEquip_o *)equipGraphList->m_Items[backIndex];
    if ( this )
    {
      v16 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
      UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, v2->fields.changeSpeed, 0.0, 0, 0, 0);
      changeSpeed = v2->fields.changeSpeed;
      this = (UIScriptEquip_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
      if ( v16 )
      {
        UIEquipGraphRender__MoveAlpha(
          v16,
          changeSpeed,
          1.0,
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_6011/*"EndChange"*/,
          0);
        return;
      }
    }
LABEL_25:
    sub_1C93D2C(this, method);
  }
  v8 = v2->fields.changeSpeed;
  if ( v8 <= 0.0 )
    goto LABEL_16;
  v9 = v2->fields.changeTotal / v8;
  if ( v9 >= 1.0 )
    goto LABEL_16;
  UIScriptEquip__SetOverlap(v2, 0.0, method);
  changeRange = v2->fields.changeRange;
  if ( v9 <= 0.5 )
  {
    v18 = UIScriptChara_TypeInfo;
    changeTotal = v2->fields.changeTotal;
    v20 = fminf((float)(0.5 - v9) * changeRange, 1.0);
    if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v18 = UIScriptChara_TypeInfo;
    }
    UNIT_SPEED = v18->static_fields->UNIT_SPEED;
    v2->fields.changeTotal = changeTotal + (float)(v20 + (float)(UNIT_SPEED + UNIT_SPEED));
    v2->fields.changeStep = UNIT_SPEED;
    v15 = v20 + UNIT_SPEED;
  }
  else
  {
    v11 = UIScriptChara_TypeInfo;
    v12 = v9 + -1.0;
    v13 = v2->fields.changeTotal;
    v14 = fminf((float)(v12 + 0.5) * changeRange, 1.0);
    if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v11 = UIScriptChara_TypeInfo;
    }
    v15 = v11->static_fields->UNIT_SPEED;
    v2->fields.changeTotal = v13 + (float)(v14 + (float)(v15 + v15));
    v2->fields.changeStep = v14 + v15;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_4719/*"ContinueChangeFade"*/, v15, 0);
}