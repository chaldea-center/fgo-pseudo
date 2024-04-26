void __fastcall UIScriptEquip___ctor(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_435A5B0 & 1) == 0 )
  {
    sub_B70694(&UIEquipGraphM___TypeInfo);
    sub_B70694(&UIScriptChara_TypeInfo);
    byte_435A5B0 = 1;
  }
  v3 = (struct UIEquipGraphM_array *)sub_B706AC(UIEquipGraphM___TypeInfo, 2LL);
  this->fields.equipGraphList = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipGraphList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( (BYTE3(UIScriptChara_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIScriptChara_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
  }
  this->fields.backIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIScriptEquip__ChangeCharacter(
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
  __int64 v22; // x0

  if ( (byte_435A5AB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UIScriptEquip_UpdateChange__);
    byte_435A5AB = 1;
  }
  UIScriptChara__ChangeCharacter_38845148((UIScriptChara_o *)this, kind, speed, imageName, faceType, callback, method);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    v22 = sub_B70798(v13);
    sub_B70738(v22, 0LL);
  }
  v19 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
  v20 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex];
  this->fields.isDisp = 0;
  if ( !v19
    || (UIEquipGraphRender__SetActive(v19, 1, 0LL),
        UIEquipGraphRender__SetAlpha(v19, 0.0, 0LL),
        UIEquipGraphRender__SetDepth(v19, 0.1, 0LL),
        !v20) )
  {
LABEL_9:
    sub_B7076C(v13, v14);
  }
  UIEquipGraphRender__SetDepth(v20, 0.0, 0LL);
  UIEquipGraphRender__SetShadow(v19, this->fields.isShadow, 0LL);
  v21 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_UIScriptEquip_UpdateChange__, 0LL);
  UIEquipGraphM__SetCharacter((UIEquipGraphM_o *)v19, imageName, faceType, v21, 0LL);
}


void __fastcall UIScriptEquip__ContinueChangeFade(UIScriptEquip_o *this, const MethodInfo *method)
{
  if ( (byte_435A5AD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15246/*"UpdateChange"*/);
    byte_435A5AD = 1;
  }
  UIScriptEquip__SetOverlap(this, 1.0, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15246/*"UpdateChange"*/,
    this->fields.changeStep,
    0LL);
}


void __fastcall UIScriptEquip__EndChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  UIScriptEquip_o *v5; // x19
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleServantConfConponent_o *p_changeCallback; // x19
  System_Action_o *v15; // x20
  System_Action_o *changeCallback; // t1
  __int64 v17; // x0

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  v5 = this;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    v17 = sub_B70798(this);
    sub_B70738(v17, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, 1.0, 0LL),
        !v7) )
  {
LABEL_9:
    sub_B7076C(this, method);
  }
  UIEquipGraphRender__SetAlpha(v7, 0.0, 0LL);
  UIEquipGraphM__ReleaseCharacter((UIEquipGraphM_o *)v7, 0LL);
  changeCallback = v5->fields.changeCallback;
  p_changeCallback = (BattleServantConfConponent_o *)&v5->fields.changeCallback;
  v15 = changeCallback;
  LODWORD(p_changeCallback[-1].fields.BattleAssetUIAtlas) = 0;
  if ( changeCallback )
  {
    p_changeCallback->klass = 0LL;
    sub_B70630(p_changeCallback, 0LL, v8, v9, v10, v11, v12, v13);
    System_Action__Invoke(v15, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__EndSet(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptEquip_o *v4; // x19
  Il2CppClass **v5; // x8
  UIEquipGraphRender_o *v6; // x20
  UnityEngine_Vector2_o CenterOffset; // kr00_8
  float v8; // s2
  float v9; // s10
  float v10; // s2
  float v11; // s10
  float v12; // s2
  float v13; // s10
  float v14; // s2
  float v15; // s10
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_o *p_setCallback; // x19
  System_Action_o *v23; // x20
  System_Action_o *setCallback; // t1
  __int64 v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_23;
  mainIndex = this->fields.mainIndex;
  v4 = this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
  {
    v25 = sub_B70798(this);
    sub_B70738(v25, 0LL);
  }
  v5 = &equipGraphList->obj.klass + mainIndex;
  v6 = (UIEquipGraphRender_o *)v5[4];
  if ( !v6 )
    goto LABEL_23;
  UIEquipGraphM__SetDispOffset((UIEquipGraphM_o *)v5[4], 0LL);
  CenterOffset = UIEquipGraphRender__GetCenterOffset(v6, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  *(UnityEngine_Vector3_o *)(&v8 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  v9 = v8;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  v26.fields.x = CenterOffset.fields.x;
  v26.fields.y = CenterOffset.fields.y;
  v26.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  *(UnityEngine_Vector3_o *)(&v10 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  v11 = v10;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  v27.fields.x = CenterOffset.fields.x;
  v27.fields.y = CenterOffset.fields.y;
  v27.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v27, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  *(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  v13 = v12;
  this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  v28.fields.x = CenterOffset.fields.x;
  v28.fields.y = CenterOffset.fields.y;
  v28.fields.z = v13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v28, 0LL);
  this = (UIScriptEquip_o *)v4->fields.baseShadowEffect;
  if ( !this
    || (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL),
        (this = (UIScriptEquip_o *)v4->fields.baseShadowEffect) == 0LL)
    || (v15 = v14,
        (this = (UIScriptEquip_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_B7076C(this, method);
  }
  v29.fields.x = CenterOffset.fields.x;
  v29.fields.y = CenterOffset.fields.y;
  v29.fields.z = v15;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v29, 0LL);
  setCallback = v4->fields.setCallback;
  p_setCallback = (BattleServantConfConponent_o *)&v4->fields.setCallback;
  v23 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0LL;
    sub_B70630(p_setCallback, 0LL, v16, v17, v18, v19, v20, v21);
    System_Action__Invoke(v23, 0LL);
  }
}


bool __fastcall UIScriptEquip__IsBusyMoveAlpha(UIScriptEquip_o *this, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIEquipGraphM_o *v4; // x8
  __int64 v6; // x0

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
  {
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
  }
  v4 = equipGraphList->m_Items[mainIndex];
  if ( !v4 )
LABEL_5:
    sub_B7076C(this, method);
  return v4->fields.isBusyMoveAlpha;
}


void __fastcall UIScriptEquip__MoveAlpha(UIScriptEquip_o *this, float duration, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19
  const MethodInfo *v7; // x2
  __int64 v8; // x0

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
  {
    v8 = sub_B70798(this);
    sub_B70738(v8, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, duration, a, 0LL, 0LL, 0LL);
  UIScriptChara__RecoverShadowEffect(v6, 0, v7);
}


void __fastcall UIScriptEquip__MoveAlphaSpeed(UIScriptEquip_o *this, float speed, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19
  const MethodInfo *v7; // x2
  __int64 v8; // x0

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
  {
    v8 = sub_B70798(this);
    sub_B70738(v8, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  UIEquipGraphRender__MoveAlphaSpeed((UIEquipGraphRender_o *)this, speed, a, 0LL, 0LL, 0LL);
  UIScriptChara__RecoverShadowEffect(v6, 0, v7);
}


void __fastcall UIScriptEquip__SetAlpha(UIScriptEquip_o *this, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v5; // x19
  const MethodInfo *v6; // x2
  __int64 v7; // x0

  equipGraphList = this->fields.equipGraphList;
  this->fields.isDisp = a > 0.0;
  if ( !equipGraphList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v5 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
  {
    v7 = sub_B70798(this);
    sub_B70738(v7, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0LL);
  UIScriptChara__RecoverShadowEffect(v5, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetCharacter(
        UIScriptEquip_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  Il2CppClass **v16; // x8
  UIEquipGraphM_o *v17; // x22
  System_Action_o *v18; // x23
  __int64 v19; // x0

  if ( (byte_435A5AE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_435A5AE = 1;
  }
  this->fields.setCallback = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setCallback,
    (System_Int32_array **)callback,
    *(System_String_array ***)&faceType,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
  {
    v19 = sub_B70798(v12);
    sub_B70738(v19, 0LL);
  }
  v16 = &equipGraphList->obj.klass + mainIndex;
  v17 = (UIEquipGraphM_o *)v16[4];
  if ( !v17 )
LABEL_7:
    sub_B7076C(v12, v13);
  UIEquipGraphRender__SetFilter((UIEquipGraphRender_o *)v16[4], this->fields.filterName, this->fields.filterColor, 0LL);
  v18 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, (intptr_t)this->klass->vtable._13_SetFace.methodPtr, 0LL);
  UIEquipGraphM__SetCharacter(v17, imageName, faceType, v18, 0LL);
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
  __int64 v11; // x0

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= equipGraphList->max_length )
  {
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
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
    sub_B7076C(this, *(_QWORD *)&d);
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
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct System_String_o **p_filterName; // x19
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIEquipGraphRender_o *v14; // x0
  __int64 v15; // x1
  struct System_String_o *v16; // x8
  __int64 v17; // x9
  __int64 v18; // x0
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.filterName = filterName;
  p_filterName = &this->fields.filterName;
  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.filterName,
    (System_Int32_array **)filterName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  v16 = p_filterName[13];
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
  if ( !v16 )
    goto LABEL_5;
  v17 = *((int *)p_filterName + 16);
  if ( (unsigned int)v17 >= LODWORD(v16[1].klass) )
  {
    v18 = sub_B70798(v14);
    sub_B70738(v18, 0LL);
  }
  v14 = (UIEquipGraphRender_o *)*((_QWORD *)&v16[1].monitor + v17);
  if ( !v14 )
LABEL_5:
    sub_B7076C(v14, v15);
  v19.fields.b = b;
  v19.fields.a = a;
  v19.fields.r = r;
  v19.fields.g = g;
  UIEquipGraphRender__SetFilter(v14, *p_filterName, v19, 0LL);
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
  __int64 v7; // x0

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
      {
        v7 = sub_B70798(this);
        sub_B70738(v7, 0LL);
      }
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetMaskInteraction((UIEquipGraphRender_o *)this, maskInteraction, 0LL);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_B7076C(this, *(_QWORD *)&maskInteraction);
  }
}


void __fastcall UIScriptEquip__SetOverlap(UIScriptEquip_o *this, float a, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v7; // x19
  __int64 v9; // x0

  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    v9 = sub_B70798(this);
    sub_B70738(v9, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0LL),
        !v7) )
  {
LABEL_7:
    sub_B7076C(this, method);
  }
  UIEquipGraphRender__SetAlpha(v7, 1.0 - a, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetShadow(UIScriptEquip_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x8
  UIScriptChara_o *v6; // x19
  __int64 mainIndex; // x9
  const MethodInfo *v9; // x2
  __int64 backIndex; // x8
  UIScriptChara_c *klass; // x9
  __int64 v12; // x0

  if ( ((!this->fields.isShadow ^ isShadow) & 1) == 0 )
  {
    equipGraphList = this->fields.equipGraphList;
    v6 = (UIScriptChara_o *)this;
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
      backIndex = v6->fields.backIndex;
      if ( (backIndex & 0x80000000) != 0 )
      {
LABEL_10:
        UIScriptChara__RecoverShadowEffect(v6, isSkip, v9);
        return;
      }
      klass = v6[1].klass;
      if ( !klass )
LABEL_11:
        sub_B7076C(this, isShadow);
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
    v12 = sub_B70798(this);
    sub_B70738(v12, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptEquip__SetSortingOrder(UIScriptEquip_o *this, int32_t order, const MethodInfo *method)
{
  struct UIEquipGraphM_array *equipGraphList; // x20
  int max_length; // w8
  unsigned int v6; // w21
  __int64 v7; // x0

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
      {
        v7 = sub_B70798(this);
        sub_B70738(v7, 0LL);
      }
      this = (UIScriptEquip_o *)equipGraphList->m_Items[v6];
      if ( !this )
        break;
      UIEquipGraphRender__SetSortingOrder((UIEquipGraphRender_o *)this, order, 0LL);
      max_length = equipGraphList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_B7076C(this, *(_QWORD *)&order);
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
  int v21; // s7
  UnityEngine_Object_o *CharaEffect; // x22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  uint32_t v26; // w0
  __int64 *v27; // x8
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  int v30; // [xsp+5Ch] [xbp-24h]
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v32; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_435A5AF & 1) == 0 )
  {
    v30 = v20;
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23676/*"wipe"*/);
    sub_B70694(&StringLiteral_16620/*"appearanceReverse"*/);
    sub_B70694(&StringLiteral_18132/*"darkEnemyErasure"*/);
    sub_B70694(&StringLiteral_23682/*"wipeTimeRe"*/);
    sub_B70694(&StringLiteral_18133/*"darkWipe"*/);
    sub_B70694(&StringLiteral_19050/*"flashErasure"*/);
    sub_B70694(&StringLiteral_16619/*"appearance"*/);
    sub_B70694(&StringLiteral_18672/*"erasure"*/);
    sub_B70694(&StringLiteral_18673/*"erasureReverse"*/);
    sub_B70694(&StringLiteral_18641/*"enemyErasure"*/);
    sub_B70694(&StringLiteral_23681/*"wipeTime"*/);
    v21 = v30;
    byte_435A5AF = 1;
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  v32.fields.r = r;
  v32.fields.g = g;
  v32.fields.b = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v31,
                                          time,
                                          v32,
                                          range,
                                          isSkip,
                                          isPause,
                                          0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL);
  if ( !v23 )
  {
    equipGraphList = this->fields.equipGraphList;
    if ( !equipGraphList )
      sub_B7076C(v23, v24);
    if ( this->fields.mainIndex >= equipGraphList->max_length )
    {
      v29 = sub_B70798(v23);
      sub_B70738(v29, 0LL);
    }
    if ( n )
    {
      v26 = PrivateImplementationDetails___ComputeStringHash_21312356(n, 0LL);
      if ( v26 > 0x8D759330 )
      {
        if ( v26 > 0xD4B34506 )
        {
          switch ( v26 )
          {
            case 0xE7555186:
              v27 = &StringLiteral_23676/*"wipe"*/;
              break;
            case 0xEC9DA126:
              v27 = &StringLiteral_18133/*"darkWipe"*/;
              break;
            case 0xEE11C37F:
              v27 = &StringLiteral_16619/*"appearance"*/;
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
              v27 = &StringLiteral_23682/*"wipeTimeRe"*/;
              break;
            case 0x9C7CDA94:
              v27 = &StringLiteral_19050/*"flashErasure"*/;
              break;
            case 0xD4B34506:
              v27 = &StringLiteral_18673/*"erasureReverse"*/;
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
            v27 = &StringLiteral_18672/*"erasure"*/;
            break;
          case 0x4DE5D9DEu:
            v27 = &StringLiteral_18641/*"enemyErasure"*/;
            break;
          case 0x50AF70CBu:
            v27 = &StringLiteral_16620/*"appearanceReverse"*/;
            break;
          default:
            return;
        }
      }
      else if ( v26 == 242689791 )
      {
        v27 = &StringLiteral_23681/*"wipeTime"*/;
      }
      else
      {
        if ( v26 != 1242641086 )
          return;
        v27 = &StringLiteral_18132/*"darkEnemyErasure"*/;
      }
      if ( System_String__op_Equality(n, (System_String_o *)*v27, 0LL) )
        UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, v28);
    }
  }
}


void __fastcall UIScriptEquip__UpdateChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  UIScriptEquip_o *v2; // x19
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  int32_t changeKind; // w11
  UIEquipGraphRender_o *v8; // x20
  float changeSpeed; // s8
  float v10; // s0
  float v11; // s9
  float changeRange; // s0
  UIScriptChara_c *v13; // x0
  float v14; // s2
  float v15; // s9
  float v16; // s8
  float UNIT_SPEED; // s0
  System_String_o *v18; // x1
  UIScriptChara_c *v19; // x0
  float changeTotal; // s10
  float v21; // s8
  __int64 v22; // x0

  v2 = this;
  if ( (byte_435A5AC & 1) == 0 )
  {
    sub_B70694(&UIScriptChara_TypeInfo);
    sub_B70694(&StringLiteral_6030/*"EndChange"*/);
    this = (UIScriptEquip_o *)sub_B70694(&StringLiteral_4363/*"ContinueChangeFade"*/);
    byte_435A5AC = 1;
  }
  equipGraphList = v2->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_27;
  mainIndex = v2->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v2->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    v22 = sub_B70798(this);
    sub_B70738(v22, 0LL);
  }
  changeKind = v2->fields.changeKind;
  if ( changeKind != 3 )
  {
    if ( changeKind != 2 )
    {
      if ( changeKind != 1 )
        return;
LABEL_20:
      UIScriptEquip__EndChange(v2, method);
      return;
    }
    this = (UIScriptEquip_o *)equipGraphList->m_Items[backIndex];
    if ( this )
    {
      v8 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
      UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, v2->fields.changeSpeed, 0.0, 0LL, 0LL, 0LL);
      changeSpeed = v2->fields.changeSpeed;
      this = (UIScriptEquip_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
      if ( v8 )
      {
        UIEquipGraphRender__MoveAlpha(
          v8,
          changeSpeed,
          1.0,
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_6030/*"EndChange"*/,
          0LL);
        return;
      }
    }
LABEL_27:
    sub_B7076C(this, method);
  }
  v10 = v2->fields.changeSpeed;
  if ( v10 <= 0.0 )
    goto LABEL_20;
  v11 = v2->fields.changeTotal / v10;
  if ( v11 >= 1.0 )
    goto LABEL_20;
  UIScriptEquip__SetOverlap(v2, 0.0, method);
  changeRange = v2->fields.changeRange;
  if ( v11 <= 0.5 )
  {
    v19 = UIScriptChara_TypeInfo;
    changeTotal = v2->fields.changeTotal;
    v21 = fminf((float)(0.5 - v11) * changeRange, 1.0);
    if ( (BYTE3(UIScriptChara_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v19 = UIScriptChara_TypeInfo;
    }
    v2->fields.changeTotal = changeTotal
                           + (float)(v21 + (float)(v19->static_fields->UNIT_SPEED + v19->static_fields->UNIT_SPEED));
    LODWORD(v2->fields.changeStep) = LODWORD(v19->static_fields->UNIT_SPEED);
    UNIT_SPEED = v21 + v19->static_fields->UNIT_SPEED;
    v18 = (System_String_o *)StringLiteral_4363/*"ContinueChangeFade"*/;
  }
  else
  {
    v13 = UIScriptChara_TypeInfo;
    v14 = v11 + -1.0;
    v15 = v2->fields.changeTotal;
    v16 = fminf((float)(v14 + 0.5) * changeRange, 1.0);
    if ( (BYTE3(UIScriptChara_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v13 = UIScriptChara_TypeInfo;
    }
    v2->fields.changeTotal = v15
                           + (float)(v16 + (float)(v13->static_fields->UNIT_SPEED + v13->static_fields->UNIT_SPEED));
    v2->fields.changeStep = v16 + v13->static_fields->UNIT_SPEED;
    UNIT_SPEED = v13->static_fields->UNIT_SPEED;
    v18 = (System_String_o *)StringLiteral_4363/*"ContinueChangeFade"*/;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, v18, UNIT_SPEED, 0LL);
}