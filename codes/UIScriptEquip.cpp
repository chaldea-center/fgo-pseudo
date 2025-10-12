void UIScriptEquip___ctor(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C39A6B & 1) == 0 )
  {
    sub_1C32C20(&UIEquipGraphM___TypeInfo);
    sub_1C32C20(&UIScriptChara_TypeInfo);
    byte_4C39A6B = 1;
  }
  v3 = (struct UIEquipGraphM_array *)sub_1C32CC8(UIEquipGraphM___TypeInfo, 2);
  this->fields.equipGraphList = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGraphList, (int32_t)v3, v4, v5);
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
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v18; // x22
  UIEquipGraphRender_o *v19; // x23
  System_Action_o *v20; // x23

  if ( (byte_4C39A66 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UIScriptEquip_UpdateChange__);
    byte_4C39A66 = 1;
  }
  UIScriptChara__ChangeCharacter_44803592((UIScriptChara_o *)this, kind, speed, imageName, faceType, callback, method);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C32E84(v13);
  }
  v18 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
  v19 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex];
  this->fields.isDisp = 0;
  if ( !v18
    || (UIEquipGraphRender__SetActive(v18, 1, 0),
        UIEquipGraphRender__SetAlpha(v18, 0.0, 0),
        UIEquipGraphRender__SetDepth(v18, 0.1, 0),
        !v19) )
  {
LABEL_9:
    sub_1C32E7C(v13);
  }
  UIEquipGraphRender__SetDepth(v19, 0.0, 0);
  UIEquipGraphRender__SetShadow(v18, this->fields.isShadow, 0);
  v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_UIScriptEquip_UpdateChange__, 0);
  UIEquipGraphM__SetCharacter((UIEquipGraphM_o *)v18, imageName, faceType, v20, 0);
}


void UIScriptEquip__ContinueChangeFade(UIScriptEquip_o *this, const MethodInfo *method)
{
  if ( (byte_4C39A68 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15182/*"UpdateChange"*/);
    byte_4C39A68 = 1;
  }
  UIScriptEquip__SetOverlap(this, 1.0, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15182/*"UpdateChange"*/,
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
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_changeCallback; // x19
  struct System_Action_o *v11; // x20
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
    sub_1C32E84(this);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, 1.0, 0),
        !v7) )
  {
LABEL_9:
    sub_1C32E7C(this);
  }
  UIEquipGraphRender__SetAlpha(v7, 0.0, 0);
  UIEquipGraphM__ReleaseCharacter((UIEquipGraphM_o *)v7, 0);
  changeCallback = v5->fields.changeCallback;
  p_changeCallback = (CGThumbnailListItem_o *)&v5->fields.changeCallback;
  v11 = changeCallback;
  LODWORD(p_changeCallback[-1].fields.viewObject) = 0;
  if ( changeCallback )
  {
    p_changeCallback->klass = 0;
    sub_1C32BC4(p_changeCallback, 0, v8, v9);
    ((void (__fastcall *)(intptr_t, intptr_t))v11->fields.invoke_impl)(v11->fields.method_code, v11->fields.method);
  }
}


void UIScriptEquip__EndSet(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v4; // x19
  Il2CppClass **v5; // x8
  UIEquipGraphRender_o *v6; // x20
  UnityEngine_Vector2_o CenterOffset; // kr00_8
  float z; // s10
  float v9; // s10
  float v10; // s10
  float v11; // s10
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_o *p_setCallback; // x19
  struct System_Action_o *v15; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_23;
  mainIndex = this->fields.mainIndex;
  v4 = this;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C32E84(this);
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
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptEquip_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  z = localPosition.fields.z;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v18.fields.x = CenterOffset.fields.x;
  v18.fields.y = CenterOffset.fields.y;
  v18.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0);
  this = (UIScriptEquip_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptEquip_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  v9 = v19.fields.z;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v20.fields.x = CenterOffset.fields.x;
  v20.fields.y = CenterOffset.fields.y;
  v20.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v20, 0);
  this = (UIScriptEquip_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptEquip_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  v10 = v21.fields.z;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v22.fields.x = CenterOffset.fields.x;
  v22.fields.y = CenterOffset.fields.y;
  v22.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0);
  this = (UIScriptEquip_o *)v4->fields.baseShadowEffect;
  if ( !this
    || (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0
    || (v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptEquip_o *)v4->fields.baseShadowEffect) == 0)
    || (v11 = v23.fields.z,
        (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0) )
  {
LABEL_23:
    sub_1C32E7C(this);
  }
  v24.fields.x = CenterOffset.fields.x;
  v24.fields.y = CenterOffset.fields.y;
  v24.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0);
  setCallback = v4->fields.setCallback;
  p_setCallback = (CGThumbnailListItem_o *)&v4->fields.setCallback;
  v15 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0;
    sub_1C32BC4(p_setCallback, 0, v12, v13);
    ((void (__fastcall *)(intptr_t, intptr_t))v15->fields.invoke_impl)(v15->fields.method_code, v15->fields.method);
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
    sub_1C32E84(this);
  v4 = equipGraphList->m_Items[mainIndex];
  if ( !v4 )
LABEL_5:
    sub_1C32E7C(this);
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
    sub_1C32E84(this);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1C32E7C(this);
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
    sub_1C32E84(this);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1C32E7C(this);
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
    sub_1C32E84(this);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1C32E7C(this);
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
  __int64 v9; // x0
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  Il2CppClass **v12; // x8
  UIEquipGraphM_o *v13; // x22
  System_Action_o *v14; // x23

  if ( (byte_4C39A69 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C39A69 = 1;
  }
  this->fields.setCallback = callback;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.setCallback,
    (int32_t)callback,
    faceType,
    (const MethodInfo *)callback);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(equipGraphList->max_length) )
    sub_1C32E84(v9);
  v12 = &equipGraphList->obj.klass + mainIndex;
  v13 = (UIEquipGraphM_o *)v12[4];
  if ( !v13 )
LABEL_7:
    sub_1C32E7C(v9);
  UIEquipGraphRender__SetFilter((UIEquipGraphRender_o *)v12[4], this->fields.filterName, this->fields.filterColor, 0);
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, (intptr_t)this->klass->vtable._12_EndSet.method, 0);
  UIEquipGraphM__SetCharacter(v13, imageName, faceType, v14, 0);
}


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
    sub_1C32E84(this);
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
    sub_1C32E7C(this);
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
  struct System_String_o *v11; // x8
  __int64 v12; // x9
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.filterName = filterName;
  p_filterName = &this->fields.filterName;
  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
  v11 = p_filterName[26];
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
  if ( !v11 )
    goto LABEL_5;
  v12 = *((int *)p_filterName + 16);
  if ( (unsigned int)v12 >= LODWORD(v11[1].klass) )
    sub_1C32E84(v10);
  v10 = (UIEquipGraphRender_o *)*((_QWORD *)&v11[1].monitor + v12);
  if ( !v10 )
LABEL_5:
    sub_1C32E7C(v10);
  v13.fields.b = b;
  v13.fields.a = a;
  v13.fields.r = r;
  v13.fields.g = g;
  UIEquipGraphRender__SetFilter(v10, *p_filterName, v13, 0);
}


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
        sub_1C32E84(this);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetMaskInteraction((UIEquipGraphRender_o *)this, maskInteraction, 0);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C32E7C(this);
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
    sub_1C32E84(this);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0),
        !v7) )
  {
LABEL_7:
    sub_1C32E7C(this);
  }
  UIEquipGraphRender__SetAlpha(v7, 1.0 - a, 0);
}


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
        sub_1C32E7C(this);
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
    sub_1C32E84(this);
  }
}


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
        sub_1C32E84(this);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetSortingOrder((UIEquipGraphRender_o *)this, order, 0);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C32E7C(this);
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
  struct UIEquipGraphM_array *equipGraphList; // x8
  uint32_t v26; // w0
  __int64 *v27; // x8
  const MethodInfo *v28; // x2
  float colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C39A6A & 1) == 0 )
  {
    colora = color.fields.a;
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_24830/*"wipe"*/);
    sub_1C32C20(&StringLiteral_16819/*"appearanceReverse"*/);
    sub_1C32C20(&StringLiteral_18445/*"darkEnemyErasure"*/);
    sub_1C32C20(&StringLiteral_24836/*"wipeTimeRe"*/);
    sub_1C32C20(&StringLiteral_18446/*"darkWipe"*/);
    sub_1C32C20(&StringLiteral_19480/*"flashErasure"*/);
    sub_1C32C20(&StringLiteral_16818/*"appearance"*/);
    sub_1C32C20(&StringLiteral_19064/*"erasure"*/);
    sub_1C32C20(&StringLiteral_19065/*"erasureReverse"*/);
    sub_1C32C20(&StringLiteral_19025/*"enemyErasure"*/);
    sub_1C32C20(&StringLiteral_24835/*"wipeTime"*/);
    color.fields.a = colora;
    byte_4C39A6A = 1;
  }
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  v20 = r;
  v21 = g;
  v22 = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v30,
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
      sub_1C32E7C(v24);
    if ( this->fields.mainIndex >= LODWORD(equipGraphList->max_length) )
      sub_1C32E84(v24);
    v26 = PrivateImplementationDetails___ComputeStringHash(n, 0);
    if ( v26 > 0x8D759330 )
    {
      if ( v26 > 0xD4B34506 )
      {
        switch ( v26 )
        {
          case 0xE7555186:
            v27 = &StringLiteral_24830/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v27 = &StringLiteral_18446/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v27 = &StringLiteral_16818/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v26 )
        {
          case 0x8DA714B6:
            v27 = &StringLiteral_24836/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v27 = &StringLiteral_19480/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v27 = &StringLiteral_19065/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v26 > 0x4A1132BE )
    {
      switch ( v26 )
      {
        case 0x8D759330:
          v27 = &StringLiteral_19064/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v27 = &StringLiteral_19025/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v27 = &StringLiteral_16819/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v26 == 242689791 )
    {
      v27 = &StringLiteral_24835/*"wipeTime"*/;
    }
    else
    {
      if ( v26 != 1242641086 )
        return;
      v27 = &StringLiteral_18445/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v27, 0) )
      UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, v28);
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
  if ( (byte_4C39A67 & 1) == 0 )
  {
    sub_1C32C20(&UIScriptChara_TypeInfo);
    sub_1C32C20(&StringLiteral_5983/*"EndChange"*/);
    this = (UIScriptEquip_o *)sub_1C32C20(&StringLiteral_4699/*"ContinueChangeFade"*/);
    byte_4C39A67 = 1;
  }
  equipGraphList = v2->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_25;
  mainIndex = v2->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v2->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1C32E84(this);
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
          (System_String_o *)StringLiteral_5983/*"EndChange"*/,
          0);
        return;
      }
    }
LABEL_25:
    sub_1C32E7C(this);
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
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_4699/*"ContinueChangeFade"*/, v15, 0);
}