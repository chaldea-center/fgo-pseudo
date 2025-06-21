void __fastcall UIScriptEquip___ctor(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIEquipGraphM_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1E54A & 1) == 0 )
  {
    sub_1BCAFF8(&UIEquipGraphM___TypeInfo, method);
    sub_1BCAFF8(&UIScriptChara_TypeInfo, v3);
    byte_4B1E54A = 1;
  }
  v4 = (struct UIEquipGraphM_array *)sub_1BCB0A0(UIEquipGraphM___TypeInfo, 2LL);
  this->fields.equipGraphList = v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.equipGraphList, (int32_t)v4, v5, v6);
  if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
  this->fields.backIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__ChangeCharacter(
        UIScriptEquip_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v21; // x22
  UIEquipGraphRender_o *v22; // x23
  System_Action_o *v23; // x23

  if ( (byte_4B1E545 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_UIScriptEquip_UpdateChange__, v13);
    byte_4B1E545 = 1;
  }
  UIScriptChara__ChangeCharacter_44029164((UIScriptChara_o *)this, kind, speed, imageName, faceType, callback, method);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1BCB25C(v14, v15, v16);
  }
  v21 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
  v22 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex];
  this->fields.isDisp = 0;
  if ( !v21
    || (UIEquipGraphRender__SetActive(v21, 1, 0LL),
        UIEquipGraphRender__SetAlpha(v21, 0.0, 0LL),
        UIEquipGraphRender__SetDepth(v21, 0.1, 0LL),
        !v22) )
  {
LABEL_9:
    sub_1BCB254(v14, v15);
  }
  UIEquipGraphRender__SetDepth(v22, 0.0, 0LL);
  UIEquipGraphRender__SetShadow(v21, this->fields.isShadow, 0LL);
  v23 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_UIScriptEquip_UpdateChange__, 0LL);
  UIEquipGraphM__SetCharacter((UIEquipGraphM_o *)v21, imageName, faceType, v23, 0LL);
}


void __fastcall UIScriptEquip__ContinueChangeFade(UIScriptEquip_o *this, const MethodInfo *method)
{
  if ( (byte_4B1E547 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15063/*"UpdateChange"*/, method);
    byte_4B1E547 = 1;
  }
  UIScriptEquip__SetOverlap(this, 1.0, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15063/*"UpdateChange"*/,
    this->fields.changeStep,
    0LL);
}


void __fastcall UIScriptEquip__EndChange(UIScriptEquip_o *this, const MethodInfo *method)
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
    sub_1BCB25C(this, method, v2);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v8 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, 1.0, 0LL),
        !v8) )
  {
LABEL_9:
    sub_1BCB254(this, method);
  }
  UIEquipGraphRender__SetAlpha(v8, 0.0, 0LL);
  UIEquipGraphM__ReleaseCharacter((UIEquipGraphM_o *)v8, 0LL);
  changeCallback = v6->fields.changeCallback;
  p_changeCallback = (CGThumbnailListItem_o *)&v6->fields.changeCallback;
  v12 = changeCallback;
  LODWORD(p_changeCallback[-1].fields.viewObject) = 0;
  if ( changeCallback )
  {
    p_changeCallback->klass = 0LL;
    sub_1BCAF9C(p_changeCallback, 0, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__EndSet(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v5; // x19
  Il2CppClass **v6; // x8
  UIEquipGraphRender_o *v7; // x20
  UnityEngine_Vector2_o CenterOffset; // kr00_8
  float v9; // s2
  float v10; // s10
  float v11; // s2
  float v12; // s10
  float v13; // s2
  float v14; // s10
  float v15; // s2
  float v16; // s10
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CGThumbnailListItem_o *p_setCallback; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_23;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCB25C(this, method, v2);
  v6 = &equipGraphList->obj.klass + mainIndex;
  v7 = (UIEquipGraphRender_o *)v6[4];
  if ( !v7 )
    goto LABEL_23;
  UIEquipGraphM__SetDispOffset((UIEquipGraphM_o *)v6[4], 0LL);
  CenterOffset = UIEquipGraphRender__GetCenterOffset(v7, 0LL);
  this = (UIScriptEquip_o *)v5->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (UIScriptEquip_o *)v5->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  v10 = v9;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  v22.fields.x = CenterOffset.fields.x;
  v22.fields.y = CenterOffset.fields.y;
  v22.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0LL);
  this = (UIScriptEquip_o *)v5->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  *(UnityEngine_Vector3_o *)(&v11 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (UIScriptEquip_o *)v5->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  v12 = v11;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  v23.fields.x = CenterOffset.fields.x;
  v23.fields.y = CenterOffset.fields.y;
  v23.fields.z = v12;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v23, 0LL);
  this = (UIScriptEquip_o *)v5->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  *(UnityEngine_Vector3_o *)(&v13 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (UIScriptEquip_o *)v5->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  v14 = v13;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  v24.fields.x = CenterOffset.fields.x;
  v24.fields.y = CenterOffset.fields.y;
  v24.fields.z = v14;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0LL);
  this = (UIScriptEquip_o *)v5->fields.baseShadowEffect;
  if ( !this
    || (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v15 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL),
        (this = (UIScriptEquip_o *)v5->fields.baseShadowEffect) == 0LL)
    || (v16 = v15,
        (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1BCB254(this, method);
  }
  v25.fields.x = CenterOffset.fields.x;
  v25.fields.y = CenterOffset.fields.y;
  v25.fields.z = v16;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
  setCallback = v5->fields.setCallback;
  p_setCallback = (CGThumbnailListItem_o *)&v5->fields.setCallback;
  v20 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0LL;
    sub_1BCAF9C(p_setCallback, 0, v17, v18);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
      v20->fields.original_method_info,
      *(_QWORD *)&v20->fields.extra_arg);
  }
}


bool __fastcall UIScriptEquip__IsBusyMoveAlpha(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIEquipGraphM_o *v5; // x8

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCB25C(this, method, v2);
  v5 = equipGraphList->m_Items[mainIndex];
  if ( !v5 )
LABEL_5:
    sub_1BCB254(this, method);
  return v5->fields.isBusyMoveAlpha;
}


void __fastcall UIScriptEquip__MoveAlpha(UIScriptEquip_o *this, float duration, float a, const MethodInfo *method)
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
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCB25C(this, method, v4);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, method);
  UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, duration, a, 0LL, 0LL, 0LL);
  UIScriptChara__RecoverShadowEffect(v7, 0, v8);
}


void __fastcall UIScriptEquip__MoveAlphaSpeed(UIScriptEquip_o *this, float speed, float a, const MethodInfo *method)
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
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCB25C(this, method, v4);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, method);
  UIEquipGraphRender__MoveAlphaSpeed((UIEquipGraphRender_o *)this, speed, a, 0LL, 0LL, 0LL);
  UIScriptChara__RecoverShadowEffect(v7, 0, v8);
}


void __fastcall UIScriptEquip__SetAlpha(UIScriptEquip_o *this, float a, const MethodInfo *method)
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
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCB25C(this, method, v3);
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, method);
  UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0LL);
  UIScriptChara__RecoverShadowEffect(v6, 0, v7);
}


void __fastcall UIScriptEquip__SetCharacter(
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

  if ( (byte_4B1E548 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, imageName);
    byte_4B1E548 = 1;
  }
  this->fields.setCallback = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.setCallback,
    (int32_t)callback,
    faceType,
    (const MethodInfo *)callback);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCB25C(v9, v10, v11);
  v14 = &equipGraphList->obj.klass + mainIndex;
  v15 = (UIEquipGraphM_o *)v14[4];
  if ( !v15 )
LABEL_7:
    sub_1BCB254(v9, v10);
  UIEquipGraphRender__SetFilter((UIEquipGraphRender_o *)v14[4], this->fields.filterName, this->fields.filterColor, 0LL);
  v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, (intptr_t)this->klass->vtable._13_SetFace.methodPtr, 0LL);
  UIEquipGraphM__SetCharacter(v15, imageName, faceType, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetDepth(UIScriptEquip_o *this, int32_t d, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v5; // x21
  UIEquipGraphRender_o *v6; // x19
  int v8; // s0
  float v10; // s2

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
    sub_1BCB25C(this, *(_QWORD *)&d, method);
  this = (UIScriptEquip_o *)this->fields.baseDepth;
  if ( !this
    || (v6 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex],
        *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        (this = (UIScriptEquip_o *)v5->fields.baseDepth) == 0LL)
    || (v10 = (float)-d * 10.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v8, 0LL),
        !v6) )
  {
LABEL_7:
    sub_1BCB254(this, *(_QWORD *)&d);
  }
  UIEquipGraphRender__SetDepth(v6, 0.1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetFilter(
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
  v13 = p_filterName[25];
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
  if ( !v13 )
    goto LABEL_5;
  v14 = *((int *)p_filterName + 16);
  if ( (unsigned int)v14 >= LODWORD(v13[1].klass) )
    sub_1BCB25C(v10, v11, v12);
  v10 = (UIEquipGraphRender_o *)*((_QWORD *)&v13[1].monitor + v14);
  if ( !v10 )
LABEL_5:
    sub_1BCB254(v10, v11);
  v15.fields.b = b;
  v15.fields.a = a;
  v15.fields.r = r;
  v15.fields.g = g;
  UIEquipGraphRender__SetFilter(v10, *p_filterName, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetMaskInteraction(
        UIScriptEquip_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
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
        sub_1BCB25C(this, *(_QWORD *)&maskInteraction, method);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetMaskInteraction((UIEquipGraphRender_o *)this, maskInteraction, 0LL);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCB254(this, *(_QWORD *)&maskInteraction);
  }
}


void __fastcall UIScriptEquip__SetOverlap(UIScriptEquip_o *this, float a, const MethodInfo *method)
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
    sub_1BCB25C(this, method, v3);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v8 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0LL),
        !v8) )
  {
LABEL_7:
    sub_1BCB254(this, method);
  }
  UIEquipGraphRender__SetAlpha(v8, 1.0 - a, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetShadow(UIScriptEquip_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
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
    if ( (unsigned int)mainIndex < equipGraphList->max_length )
    {
      this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
      if ( !this )
        goto LABEL_11;
      UIEquipGraphRender__SetShadow((UIEquipGraphRender_o *)this, isShadow, 0LL);
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
        sub_1BCB254(this, isShadow);
      if ( (unsigned int)backIndex < LODWORD(klass->_1.namespaze) )
      {
        this = (UIScriptEquip_o *)*((_QWORD *)&klass->_1.byval_arg.data + backIndex);
        if ( this )
        {
          UIEquipGraphRender__SetShadow((UIEquipGraphRender_o *)this, isShadow, 0LL);
          goto LABEL_10;
        }
        goto LABEL_11;
      }
    }
    sub_1BCB25C(this, isShadow, isSkip);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetSortingOrder(UIScriptEquip_o *this, int32_t order, const MethodInfo *method)
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
        sub_1BCB25C(this, *(_QWORD *)&order, method);
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetSortingOrder((UIEquipGraphRender_o *)this, order, 0LL);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCB254(this, *(_QWORD *)&order);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetSpecialEffect(
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
  int v20; // s7
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  int v32; // s7
  UnityEngine_Object_o *CharaEffect; // x22
  _BOOL8 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  struct UIEquipGraphM_array *equipGraphList; // x8
  uint32_t v38; // w0
  __int64 *v39; // x8
  const MethodInfo *v40; // x2
  int colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v43; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B1E549 & 1) == 0 )
  {
    colora = v20;
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, n);
    sub_1BCAFF8(&StringLiteral_24616/*"wipe"*/, v21);
    sub_1BCAFF8(&StringLiteral_16683/*"appearanceReverse"*/, v22);
    sub_1BCAFF8(&StringLiteral_18292/*"darkEnemyErasure"*/, v23);
    sub_1BCAFF8(&StringLiteral_24622/*"wipeTimeRe"*/, v24);
    sub_1BCAFF8(&StringLiteral_18293/*"darkWipe"*/, v25);
    sub_1BCAFF8(&StringLiteral_19310/*"flashErasure"*/, v26);
    sub_1BCAFF8(&StringLiteral_16682/*"appearance"*/, v27);
    sub_1BCAFF8(&StringLiteral_18898/*"erasure"*/, v28);
    sub_1BCAFF8(&StringLiteral_18899/*"erasureReverse"*/, v29);
    sub_1BCAFF8(&StringLiteral_18861/*"enemyErasure"*/, v30);
    sub_1BCAFF8(&StringLiteral_24621/*"wipeTime"*/, v31);
    v32 = colora;
    byte_4B1E549 = 1;
  }
  v42.fields.x = x;
  v42.fields.y = y;
  v42.fields.z = z;
  v43.fields.r = r;
  v43.fields.g = g;
  v43.fields.b = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v42,
                                          time,
                                          v43,
                                          range,
                                          isSkip,
                                          isPause,
                                          0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v34 = UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL);
  if ( !v34 )
  {
    equipGraphList = this->fields.equipGraphList;
    if ( !equipGraphList )
      sub_1BCB254(v34, v35);
    if ( this->fields.mainIndex >= equipGraphList->max_length )
      sub_1BCB25C(v34, v35, v36);
    v38 = PrivateImplementationDetails___ComputeStringHash(n, 0LL);
    if ( v38 > 0x8D759330 )
    {
      if ( v38 > 0xD4B34506 )
      {
        switch ( v38 )
        {
          case 0xE7555186:
            v39 = &StringLiteral_24616/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v39 = &StringLiteral_18293/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v39 = &StringLiteral_16682/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v38 )
        {
          case 0x8DA714B6:
            v39 = &StringLiteral_24622/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v39 = &StringLiteral_19310/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v39 = &StringLiteral_18899/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v38 > 0x4A1132BE )
    {
      switch ( v38 )
      {
        case 0x8D759330:
          v39 = &StringLiteral_18898/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v39 = &StringLiteral_18861/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v39 = &StringLiteral_16683/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v38 == 242689791 )
    {
      v39 = &StringLiteral_24621/*"wipeTime"*/;
    }
    else
    {
      if ( v38 != 1242641086 )
        return;
      v39 = &StringLiteral_18292/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v39, 0LL) )
      UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, v40);
  }
}


void __fastcall UIScriptEquip__UpdateChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIScriptEquip_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  int32_t changeKind; // w11
  float v11; // s0
  float v12; // s8
  float changeRange; // s0
  UIScriptChara_c *v14; // x0
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s0
  UIEquipGraphRender_o *v19; // x20
  float changeSpeed; // s8
  UIScriptChara_c *v21; // x0
  float changeTotal; // s9
  float v23; // s8
  float UNIT_SPEED; // s0

  v3 = this;
  if ( (byte_4B1E546 & 1) == 0 )
  {
    sub_1BCAFF8(&UIScriptChara_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_5933/*"EndChange"*/, v4);
    this = (UIScriptEquip_o *)sub_1BCAFF8(&StringLiteral_4661/*"ContinueChangeFade"*/, v5);
    byte_4B1E546 = 1;
  }
  equipGraphList = v3->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_25;
  mainIndex = v3->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v3->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_1BCB25C(this, method, v2);
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
      v19 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
      UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, v3->fields.changeSpeed, 0.0, 0LL, 0LL, 0LL);
      changeSpeed = v3->fields.changeSpeed;
      this = (UIScriptEquip_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
      if ( v19 )
      {
        UIEquipGraphRender__MoveAlpha(
          v19,
          changeSpeed,
          1.0,
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_5933/*"EndChange"*/,
          0LL);
        return;
      }
    }
LABEL_25:
    sub_1BCB254(this, method);
  }
  v11 = v3->fields.changeSpeed;
  if ( v11 <= 0.0 )
    goto LABEL_16;
  v12 = v3->fields.changeTotal / v11;
  if ( v12 >= 1.0 )
    goto LABEL_16;
  UIScriptEquip__SetOverlap(v3, 0.0, method);
  changeRange = v3->fields.changeRange;
  if ( v12 <= 0.5 )
  {
    v21 = UIScriptChara_TypeInfo;
    changeTotal = v3->fields.changeTotal;
    v23 = fminf((float)(0.5 - v12) * changeRange, 1.0);
    if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v21 = UIScriptChara_TypeInfo;
    }
    UNIT_SPEED = v21->static_fields->UNIT_SPEED;
    v3->fields.changeTotal = changeTotal + (float)(v23 + (float)(UNIT_SPEED + UNIT_SPEED));
    v3->fields.changeStep = UNIT_SPEED;
    v18 = v23 + UNIT_SPEED;
  }
  else
  {
    v14 = UIScriptChara_TypeInfo;
    v15 = v12 + -1.0;
    v16 = v3->fields.changeTotal;
    v17 = fminf((float)(v15 + 0.5) * changeRange, 1.0);
    if ( !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v14 = UIScriptChara_TypeInfo;
    }
    v18 = v14->static_fields->UNIT_SPEED;
    v3->fields.changeTotal = v16 + (float)(v17 + (float)(v18 + v18));
    v3->fields.changeStep = v17 + v18;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v3, (System_String_o *)StringLiteral_4661/*"ContinueChangeFade"*/, v18, 0LL);
}