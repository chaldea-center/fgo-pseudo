void UIScriptEquip___ctor(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C29362 & 1) == 0 )
  {
    sub_1C2D490(&UIEquipGraphM___TypeInfo);
    sub_1C2D490(&UIScriptChara_TypeInfo);
    byte_4C29362 = 1;
  }
  v3 = (struct UIEquipGraphM_array *)sub_1C2D538(UIEquipGraphM___TypeInfo, 2);
  this->fields.equipGraphList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGraphList, (int32_t)v3, v4, v5);
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
  __int64 v15; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v20; // x22
  UIEquipGraphRender_o *v21; // x23
  System_Action_o *v22; // x23

  if ( (byte_4C2935D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UIScriptEquip_UpdateChange__);
    byte_4C2935D = 1;
  }
  UIScriptChara__ChangeCharacter_44667436((UIScriptChara_o *)this, kind, speed, imageName, faceType, callback, method);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C2D6F4(v13, v14, v15);
  }
  v20 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
  v21 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex];
  this->fields.isDisp = 0;
  if ( !v20
    || (UIEquipGraphRender__SetActive(v20, 1, 0),
        UIEquipGraphRender__SetAlpha(v20, 0.0, 0),
        UIEquipGraphRender__SetDepth(v20, 0.1, 0),
        !v21) )
  {
LABEL_9:
    sub_1C2D6EC(v13, v14);
  }
  UIEquipGraphRender__SetDepth(v21, 0.0, 0);
  UIEquipGraphRender__SetShadow(v20, this->fields.isShadow, 0);
  v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_UIScriptEquip_UpdateChange__, 0);
  UIEquipGraphM__SetCharacter((UIEquipGraphM_o *)v20, imageName, faceType, v22, 0);
}


void UIScriptEquip__ContinueChangeFade(UIScriptEquip_o *this, const MethodInfo *method)
{
  if ( (byte_4C2935F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15181/*"UpdateChange"*/);
    byte_4C2935F = 1;
  }
  UIScriptEquip__SetOverlap(this, 1.0, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15181/*"UpdateChange"*/,
    this->fields.changeStep,
    0);
}


void UIScriptEquip__EndChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  UIScriptEquip_o *v6; // x19
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CGThumbnailListItem_o *p_changeCallback; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *changeCallback; // t1

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  v6 = this;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C2D6F4(this, method, v2);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v8 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, 1.0, 0),
        !v8) )
  {
LABEL_9:
    sub_1C2D6EC(this, method);
  }
  UIEquipGraphRender__SetAlpha(v8, 0.0, 0);
  UIEquipGraphM__ReleaseCharacter((UIEquipGraphM_o *)v8, 0);
  changeCallback = v6->fields.changeCallback;
  p_changeCallback = (CGThumbnailListItem_o *)&v6->fields.changeCallback;
  v12 = changeCallback;
  LODWORD(p_changeCallback[-1].fields.viewObject) = 0;
  if ( changeCallback )
  {
    p_changeCallback->klass = 0;
    sub_1C2D434(p_changeCallback, 0, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void UIScriptEquip__EndSet(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v5; // x19
  Il2CppClass **v6; // x8
  UIEquipGraphRender_o *v7; // x20
  UnityEngine_Vector2_o CenterOffset; // kr00_8
  float z; // s10
  float v10; // s10
  float v11; // s10
  float v12; // s10
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CGThumbnailListItem_o *p_setCallback; // x19
  struct System_Action_o *v16; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_23;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C2D6F4(this, method, v2);
  v6 = &equipGraphList->obj.klass + mainIndex;
  v7 = (UIEquipGraphRender_o *)v6[4];
  if ( !v7 )
    goto LABEL_23;
  UIEquipGraphM__SetDispOffset((UIEquipGraphM_o *)v6[4], 0);
  CenterOffset = UIEquipGraphRender__GetCenterOffset(v7, 0);
  this = (UIScriptEquip_o *)v5->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptEquip_o *)v5->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  z = localPosition.fields.z;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v19.fields.x = CenterOffset.fields.x;
  v19.fields.y = CenterOffset.fields.y;
  v19.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v19, 0);
  this = (UIScriptEquip_o *)v5->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptEquip_o *)v5->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  v10 = v20.fields.z;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v21.fields.x = CenterOffset.fields.x;
  v21.fields.y = CenterOffset.fields.y;
  v21.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v21, 0);
  this = (UIScriptEquip_o *)v5->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptEquip_o *)v5->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  v11 = v22.fields.z;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v23.fields.x = CenterOffset.fields.x;
  v23.fields.y = CenterOffset.fields.y;
  v23.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v23, 0);
  this = (UIScriptEquip_o *)v5->fields.baseShadowEffect;
  if ( !this
    || (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0
    || (v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptEquip_o *)v5->fields.baseShadowEffect) == 0)
    || (v12 = v24.fields.z,
        (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0) )
  {
LABEL_23:
    sub_1C2D6EC(this, method);
  }
  v25.fields.x = CenterOffset.fields.x;
  v25.fields.y = CenterOffset.fields.y;
  v25.fields.z = v12;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0);
  setCallback = v5->fields.setCallback;
  p_setCallback = (CGThumbnailListItem_o *)&v5->fields.setCallback;
  v16 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0;
    sub_1C2D434(p_setCallback, 0, v13, v14);
    ((void (__fastcall *)(intptr_t, intptr_t))v16->fields.invoke_impl)(v16->fields.method_code, v16->fields.method);
  }
}


bool UIScriptEquip__IsBusyMoveAlpha(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIEquipGraphM_o *v5; // x8

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C2D6F4(this, method, v2);
  v5 = equipGraphList->m_Items[mainIndex];
  if ( !v5 )
LABEL_5:
    sub_1C2D6EC(this, method);
  return v5->fields.isBusyMoveAlpha;
}


void UIScriptEquip__MoveAlpha(UIScriptEquip_o *this, float duration, float a, const MethodInfo *method)
{
  __int64 v4; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v7; // x19
  const MethodInfo *v8; // x2

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v7 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C2D6F4(this, method, v4);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1C2D6EC(this, method);
  UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, duration, a, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v7, 0, v8);
}


void UIScriptEquip__MoveAlphaSpeed(UIScriptEquip_o *this, float speed, float a, const MethodInfo *method)
{
  __int64 v4; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v7; // x19
  const MethodInfo *v8; // x2

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v7 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C2D6F4(this, method, v4);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1C2D6EC(this, method);
  UIEquipGraphRender__MoveAlphaSpeed((UIEquipGraphRender_o *)this, speed, a, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v7, 0, v8);
}


void UIScriptEquip__SetAlpha(UIScriptEquip_o *this, float a, const MethodInfo *method)
{
  __int64 v3; // x2
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
    sub_1C2D6F4(this, method, v3);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1C2D6EC(this, method);
  UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0);
  UIScriptChara__RecoverShadowEffect(v6, 0, v7);
}


void UIScriptEquip__SetCharacter(
        UIScriptEquip_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  Il2CppClass **v14; // x8
  UIEquipGraphM_o *v15; // x22
  System_Action_o *v16; // x23

  if ( (byte_4C29360 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C29360 = 1;
  }
  this->fields.setCallback = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.setCallback,
    (int32_t)callback,
    faceType,
    (const MethodInfo *)callback);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C2D6F4(v9, v10, v11);
  v14 = &equipGraphList->obj.klass + mainIndex;
  v15 = (UIEquipGraphM_o *)v14[4];
  if ( !v15 )
LABEL_7:
    sub_1C2D6EC(v9, v10);
  UIEquipGraphRender__SetFilter((UIEquipGraphRender_o *)v14[4], this->fields.filterName, this->fields.filterColor, 0);
  v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, (intptr_t)this->klass->vtable._12_EndSet.method, 0);
  UIEquipGraphM__SetCharacter(v15, imageName, faceType, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptEquip__SetDepth(UIScriptEquip_o *this, int32_t d, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v5; // x21
  UIEquipGraphRender_o *v6; // x19
  float v8; // s2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C2D6F4(this, *(_QWORD *)&d, method);
  this = (UIScriptEquip_o *)this->fields.baseDepth;
  if ( !this
    || (v6 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex],
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptEquip_o *)v5->fields.baseDepth) == 0)
    || (v8 = (float)-d * 10.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, localPosition, 0),
        !v6) )
  {
LABEL_7:
    sub_1C2D6EC(this, *(_QWORD *)&d);
  }
  UIEquipGraphRender__SetDepth(v6, 0.1, 0);
}


void UIScriptEquip__SetFilter(
        UIScriptEquip_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  struct System_String_o **p_filterName; // x19
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIEquipGraphRender_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_String_o *v13; // x8
  __int64 v14; // x9
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.filterName = filterName;
  p_filterName = &this->fields.filterName;
  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
  v13 = p_filterName[26];
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
  if ( !v13 )
    goto LABEL_5;
  v14 = *((int *)p_filterName + 16);
  if ( (unsigned int)v14 >= LODWORD(v13[1].klass) )
    sub_1C2D6F4(v10, v11, v12);
  v10 = (UIEquipGraphRender_o *)*((_QWORD *)&v13[1].monitor + v14);
  if ( !v10 )
LABEL_5:
    sub_1C2D6EC(v10, v11);
  v15.fields.b = b;
  v15.fields.a = a;
  v15.fields.r = r;
  v15.fields.g = g;
  UIEquipGraphRender__SetFilter(v10, *p_filterName, v15, 0);
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
        sub_1C2D6F4(this, *(_QWORD *)&maskInteraction, method);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetMaskInteraction((UIEquipGraphRender_o *)this, maskInteraction, 0);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C2D6EC(this, *(_QWORD *)&maskInteraction);
  }
}


void UIScriptEquip__SetOverlap(UIScriptEquip_o *this, float a, const MethodInfo *method)
{
  __int64 v3; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v8; // x19

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C2D6F4(this, method, v3);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v8 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0),
        !v8) )
  {
LABEL_7:
    sub_1C2D6EC(this, method);
  }
  UIEquipGraphRender__SetAlpha(v8, 1.0 - a, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptEquip__SetShadow(UIScriptEquip_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  UIScriptChara_o *v5; // x19
  __int64 mainIndex; // x9
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
        UIScriptChara__RecoverShadowEffect(v5, isSkip, (const MethodInfo *)isSkip);
        return;
      }
      klass = v5[1].klass;
      if ( !klass )
LABEL_11:
        sub_1C2D6EC(this, isShadow);
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
    sub_1C2D6F4(this, isShadow, isSkip);
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
        sub_1C2D6F4(this, *(_QWORD *)&order, method);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetSortingOrder((UIEquipGraphRender_o *)this, order, 0);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C2D6EC(this, *(_QWORD *)&order);
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
  __int64 v26; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  uint32_t v28; // w0
  __int64 *v29; // x8
  const MethodInfo *v30; // x2
  float colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C29361 & 1) == 0 )
  {
    colora = color.fields.a;
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_24812/*"wipe"*/);
    sub_1C2D490(&StringLiteral_16816/*"appearanceReverse"*/);
    sub_1C2D490(&StringLiteral_18440/*"darkEnemyErasure"*/);
    sub_1C2D490(&StringLiteral_24818/*"wipeTimeRe"*/);
    sub_1C2D490(&StringLiteral_18441/*"darkWipe"*/);
    sub_1C2D490(&StringLiteral_19468/*"flashErasure"*/);
    sub_1C2D490(&StringLiteral_16815/*"appearance"*/);
    sub_1C2D490(&StringLiteral_19054/*"erasure"*/);
    sub_1C2D490(&StringLiteral_19055/*"erasureReverse"*/);
    sub_1C2D490(&StringLiteral_19016/*"enemyErasure"*/);
    sub_1C2D490(&StringLiteral_24817/*"wipeTime"*/);
    color.fields.a = colora;
    byte_4C29361 = 1;
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  v20 = r;
  v21 = g;
  v22 = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v32,
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
      sub_1C2D6EC(v24, v25);
    if ( this->fields.mainIndex >= LODWORD(equipGraphList->max_length) )
      sub_1C2D6F4(v24, v25, v26);
    v28 = PrivateImplementationDetails___ComputeStringHash(n, 0);
    if ( v28 > 0x8D759330 )
    {
      if ( v28 > 0xD4B34506 )
      {
        switch ( v28 )
        {
          case 0xE7555186:
            v29 = &StringLiteral_24812/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v29 = &StringLiteral_18441/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v29 = &StringLiteral_16815/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v28 )
        {
          case 0x8DA714B6:
            v29 = &StringLiteral_24818/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v29 = &StringLiteral_19468/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v29 = &StringLiteral_19055/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v28 > 0x4A1132BE )
    {
      switch ( v28 )
      {
        case 0x8D759330:
          v29 = &StringLiteral_19054/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v29 = &StringLiteral_19016/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v29 = &StringLiteral_16816/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v28 == 242689791 )
    {
      v29 = &StringLiteral_24817/*"wipeTime"*/;
    }
    else
    {
      if ( v28 != 1242641086 )
        return;
      v29 = &StringLiteral_18440/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v29, 0) )
      UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, v30);
  }
}


void UIScriptEquip__UpdateChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIScriptEquip_o *v3; // x19
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  int32_t changeKind; // w11
  float v9; // s0
  float v10; // s8
  float changeRange; // s0
  UIScriptChara_c *v12; // x0
  float v13; // s2
  float v14; // s8
  float v15; // s9
  float v16; // s0
  UIEquipGraphRender_o *v17; // x20
  float changeSpeed; // s8
  UIScriptChara_c *v19; // x0
  float changeTotal; // s9
  float v21; // s8
  float UNIT_SPEED; // s0

  v3 = this;
  if ( (byte_4C2935E & 1) == 0 )
  {
    sub_1C2D490(&UIScriptChara_TypeInfo);
    sub_1C2D490(&StringLiteral_5975/*"EndChange"*/);
    this = (UIScriptEquip_o *)sub_1C2D490(&StringLiteral_4691/*"ContinueChangeFade"*/);
    byte_4C2935E = 1;
  }
  equipGraphList = v3->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_25;
  mainIndex = v3->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v3->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C2D6F4(this, method, v2);
  }
  changeKind = v3->fields.changeKind;
  if ( changeKind != 3 )
  {
    if ( changeKind != 2 )
    {
      if ( changeKind != 1 )
        return;
LABEL_16:
      UIScriptEquip__EndChange(v3, method);
      return;
    }
    this = (UIScriptEquip_o *)equipGraphList->m_Items[backIndex];
    if ( this )
    {
      v17 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
      UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, v3->fields.changeSpeed, 0.0, 0, 0, 0);
      changeSpeed = v3->fields.changeSpeed;
      this = (UIScriptEquip_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
      if ( v17 )
      {
        UIEquipGraphRender__MoveAlpha(
          v17,
          changeSpeed,
          1.0,
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_5975/*"EndChange"*/,
          0);
        return;
      }
    }
LABEL_25:
    sub_1C2D6EC(this, method);
  }
  v9 = v3->fields.changeSpeed;
  if ( v9 <= 0.0 )
    goto LABEL_16;
  v10 = v3->fields.changeTotal / v9;
  if ( v10 >= 1.0 )
    goto LABEL_16;
  UIScriptEquip__SetOverlap(v3, 0.0, method);
  changeRange = v3->fields.changeRange;
  if ( v10 <= 0.5 )
  {
    v19 = UIScriptChara_TypeInfo;
    changeTotal = v3->fields.changeTotal;
    v21 = fminf((float)(0.5 - v10) * changeRange, 1.0);
    if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v19 = UIScriptChara_TypeInfo;
    }
    UNIT_SPEED = v19->static_fields->UNIT_SPEED;
    v3->fields.changeTotal = changeTotal + (float)(v21 + (float)(UNIT_SPEED + UNIT_SPEED));
    v3->fields.changeStep = UNIT_SPEED;
    v16 = v21 + UNIT_SPEED;
  }
  else
  {
    v12 = UIScriptChara_TypeInfo;
    v13 = v10 + -1.0;
    v14 = v3->fields.changeTotal;
    v15 = fminf((float)(v13 + 0.5) * changeRange, 1.0);
    if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v12 = UIScriptChara_TypeInfo;
    }
    v16 = v12->static_fields->UNIT_SPEED;
    v3->fields.changeTotal = v14 + (float)(v15 + (float)(v16 + v16));
    v3->fields.changeStep = v15 + v16;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v3, (System_String_o *)StringLiteral_4691/*"ContinueChangeFade"*/, v16, 0);
}