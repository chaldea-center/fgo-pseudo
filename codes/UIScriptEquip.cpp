void __fastcall UIScriptEquip___ctor(UIScriptEquip_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIEquipGraphM_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418FD44 & 1) == 0 )
  {
    sub_B2C35C(&UIEquipGraphM___TypeInfo, method);
    sub_B2C35C(&UIScriptChara_TypeInfo, v3);
    byte_418FD44 = 1;
  }
  v4 = (struct UIEquipGraphM_array *)sub_B2C374(UIEquipGraphM___TypeInfo, 2LL);
  this->fields.equipGraphList = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipGraphList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( (BYTE3(UIScriptChara_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIScriptChara_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
  }
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
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIEquipGraphRender_o *v20; // x22
  UIEquipGraphRender_o *v21; // x23
  System_Action_o *v22; // x23
  __int64 v23; // x0

  if ( (byte_418FD3F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_UIScriptEquip_UpdateChange__, v13);
    byte_418FD3F = 1;
  }
  UIScriptChara__ChangeCharacter_37827556((UIScriptChara_o *)this, kind, speed, imageName, faceType, callback, method);
  equipGraphList = this->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    v23 = sub_B2C460(v14);
    sub_B2C400(v23, 0LL);
  }
  v20 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
  v21 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex];
  this->fields.isDisp = 0;
  if ( !v20
    || (UIEquipGraphRender__SetActive(v20, 1, 0LL),
        UIEquipGraphRender__SetAlpha(v20, 0.0, 0LL),
        UIEquipGraphRender__SetDepth(v20, 0.1, 0LL),
        !v21) )
  {
LABEL_9:
    sub_B2C434(v14, v15);
  }
  UIEquipGraphRender__SetDepth(v21, 0.0, 0LL);
  UIEquipGraphRender__SetShadow(v20, this->fields.isShadow, 0LL);
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_UIScriptEquip_UpdateChange__, 0LL);
  UIEquipGraphM__SetCharacter((UIEquipGraphM_o *)v20, imageName, faceType, v22, 0LL);
}


void __fastcall UIScriptEquip__ContinueChangeFade(UIScriptEquip_o *this, const MethodInfo *method)
{
  if ( (byte_418FD41 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15059/*"UpdateChange"*/, method);
    byte_418FD41 = 1;
  }
  UIScriptEquip__SetOverlap(this, 1.0, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15059/*"UpdateChange"*/,
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
    v17 = sub_B2C460(this);
    sub_B2C400(v17, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, 1.0, 0LL),
        !v7) )
  {
LABEL_9:
    sub_B2C434(this, method);
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
    sub_B2C2F8(p_changeCallback, 0LL, v8, v9, v10, v11, v12, v13);
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
    v25 = sub_B2C460(this);
    sub_B2C400(v25, 0LL);
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
    sub_B2C434(this, method);
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
    sub_B2C2F8(p_setCallback, 0LL, v16, v17, v18, v19, v20, v21);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  v4 = equipGraphList->m_Items[mainIndex];
  if ( !v4 )
LABEL_5:
    sub_B2C434(this, method);
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
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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

  if ( (byte_418FD42 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, imageName);
    byte_418FD42 = 1;
  }
  this->fields.setCallback = callback;
  sub_B2C2F8(
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
    v19 = sub_B2C460(v12);
    sub_B2C400(v19, 0LL);
  }
  v16 = &equipGraphList->obj.klass + mainIndex;
  v17 = (UIEquipGraphM_o *)v16[4];
  if ( !v17 )
LABEL_7:
    sub_B2C434(v12, v13);
  UIEquipGraphRender__SetFilter((UIEquipGraphRender_o *)v16[4], this->fields.filterName, this->fields.filterColor, 0LL);
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, (intptr_t)this->klass->vtable._12_SetFace.methodPtr, 0LL);
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
    v11 = sub_B2C460(this);
    sub_B2C400(v11, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&d);
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
  sub_B2C2F8(
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
    v18 = sub_B2C460(v14);
    sub_B2C400(v18, 0LL);
  }
  v14 = (UIEquipGraphRender_o *)*((_QWORD *)&v16[1].monitor + v17);
  if ( !v14 )
LABEL_5:
    sub_B2C434(v14, v15);
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
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&maskInteraction);
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
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
  }
  this = (UIScriptEquip_o *)equipGraphList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIEquipGraphRender_o *)equipGraphList->m_Items[backIndex],
        UIEquipGraphRender__SetAlpha((UIEquipGraphRender_o *)this, a, 0LL),
        !v7) )
  {
LABEL_7:
    sub_B2C434(this, method);
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
        sub_B2C434(this, isShadow);
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
    v12 = sub_B2C460(this);
    sub_B2C400(v12, 0LL);
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
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&order);
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
  struct UIEquipGraphM_array *equipGraphList; // x8
  uint32_t v37; // w0
  __int64 *v38; // x8
  const MethodInfo *v39; // x2
  __int64 v40; // x0
  int v41; // [xsp+5Ch] [xbp-24h]
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v43; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_418FD43 & 1) == 0 )
  {
    v41 = v20;
    sub_B2C35C(&UnityEngine_Object_TypeInfo, n);
    sub_B2C35C(&StringLiteral_23293/*"wipe"*/, v21);
    sub_B2C35C(&StringLiteral_16378/*"appearanceReverse"*/, v22);
    sub_B2C35C(&StringLiteral_17866/*"darkEnemyErasure"*/, v23);
    sub_B2C35C(&StringLiteral_23299/*"wipeTimeRe"*/, v24);
    sub_B2C35C(&StringLiteral_17867/*"darkWipe"*/, v25);
    sub_B2C35C(&StringLiteral_18762/*"flashErasure"*/, v26);
    sub_B2C35C(&StringLiteral_16377/*"appearance"*/, v27);
    sub_B2C35C(&StringLiteral_18393/*"erasure"*/, v28);
    sub_B2C35C(&StringLiteral_18394/*"erasureReverse"*/, v29);
    sub_B2C35C(&StringLiteral_18362/*"enemyErasure"*/, v30);
    sub_B2C35C(&StringLiteral_23298/*"wipeTime"*/, v31);
    v32 = v41;
    byte_418FD43 = 1;
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v34 = UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL);
  if ( !v34 )
  {
    equipGraphList = this->fields.equipGraphList;
    if ( !equipGraphList )
      sub_B2C434(v34, v35);
    if ( this->fields.mainIndex >= equipGraphList->max_length )
    {
      v40 = sub_B2C460(v34);
      sub_B2C400(v40, 0LL);
    }
    if ( n )
    {
      v37 = PrivateImplementationDetails___ComputeStringHash_21099092(n, 0LL);
      if ( v37 > 0x8D759330 )
      {
        if ( v37 > 0xD4B34506 )
        {
          switch ( v37 )
          {
            case 0xE7555186:
              v38 = &StringLiteral_23293/*"wipe"*/;
              break;
            case 0xEC9DA126:
              v38 = &StringLiteral_17867/*"darkWipe"*/;
              break;
            case 0xEE11C37F:
              v38 = &StringLiteral_16377/*"appearance"*/;
              break;
            default:
              return;
          }
        }
        else
        {
          switch ( v37 )
          {
            case 0x8DA714B6:
              v38 = &StringLiteral_23299/*"wipeTimeRe"*/;
              break;
            case 0x9C7CDA94:
              v38 = &StringLiteral_18762/*"flashErasure"*/;
              break;
            case 0xD4B34506:
              v38 = &StringLiteral_18394/*"erasureReverse"*/;
              break;
            default:
              return;
          }
        }
      }
      else if ( v37 > 0x4A1132BE )
      {
        switch ( v37 )
        {
          case 0x8D759330:
            v38 = &StringLiteral_18393/*"erasure"*/;
            break;
          case 0x4DE5D9DEu:
            v38 = &StringLiteral_18362/*"enemyErasure"*/;
            break;
          case 0x50AF70CBu:
            v38 = &StringLiteral_16378/*"appearanceReverse"*/;
            break;
          default:
            return;
        }
      }
      else if ( v37 == 242689791 )
      {
        v38 = &StringLiteral_23298/*"wipeTime"*/;
      }
      else
      {
        if ( v37 != 1242641086 )
          return;
        v38 = &StringLiteral_17866/*"darkEnemyErasure"*/;
      }
      if ( System_String__op_Equality(n, (System_String_o *)*v38, 0LL) )
        UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, v39);
    }
  }
}


void __fastcall UIScriptEquip__UpdateChange(UIScriptEquip_o *this, const MethodInfo *method)
{
  UIScriptEquip_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UIEquipGraphM_array *equipGraphList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  int32_t changeKind; // w11
  UIEquipGraphRender_o *v10; // x20
  float changeSpeed; // s8
  float v12; // s0
  float v13; // s9
  float changeRange; // s0
  UIScriptChara_c *v15; // x0
  float v16; // s2
  float v17; // s9
  float v18; // s8
  float UNIT_SPEED; // s0
  System_String_o *v20; // x1
  UIScriptChara_c *v21; // x0
  float changeTotal; // s10
  float v23; // s8
  __int64 v24; // x0

  v2 = this;
  if ( (byte_418FD40 & 1) == 0 )
  {
    sub_B2C35C(&UIScriptChara_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5938/*"EndChange"*/, v3);
    this = (UIScriptEquip_o *)sub_B2C35C(&StringLiteral_4283/*"ContinueChangeFade"*/, v4);
    byte_418FD40 = 1;
  }
  equipGraphList = v2->fields.equipGraphList;
  if ( !equipGraphList )
    goto LABEL_27;
  mainIndex = v2->fields.mainIndex;
  max_length = equipGraphList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v2->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    v24 = sub_B2C460(this);
    sub_B2C400(v24, 0LL);
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
      v10 = (UIEquipGraphRender_o *)equipGraphList->m_Items[mainIndex];
      UIEquipGraphRender__MoveAlpha((UIEquipGraphRender_o *)this, v2->fields.changeSpeed, 0.0, 0LL, 0LL, 0LL);
      changeSpeed = v2->fields.changeSpeed;
      this = (UIScriptEquip_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
      if ( v10 )
      {
        UIEquipGraphRender__MoveAlpha(
          v10,
          changeSpeed,
          1.0,
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_5938/*"EndChange"*/,
          0LL);
        return;
      }
    }
LABEL_27:
    sub_B2C434(this, method);
  }
  v12 = v2->fields.changeSpeed;
  if ( v12 <= 0.0 )
    goto LABEL_20;
  v13 = v2->fields.changeTotal / v12;
  if ( v13 >= 1.0 )
    goto LABEL_20;
  UIScriptEquip__SetOverlap(v2, 0.0, method);
  changeRange = v2->fields.changeRange;
  if ( v13 <= 0.5 )
  {
    v21 = UIScriptChara_TypeInfo;
    changeTotal = v2->fields.changeTotal;
    v23 = fminf((float)(0.5 - v13) * changeRange, 1.0);
    if ( (BYTE3(UIScriptChara_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v21 = UIScriptChara_TypeInfo;
    }
    v2->fields.changeTotal = changeTotal
                           + (float)(v23 + (float)(v21->static_fields->UNIT_SPEED + v21->static_fields->UNIT_SPEED));
    LODWORD(v2->fields.changeStep) = LODWORD(v21->static_fields->UNIT_SPEED);
    UNIT_SPEED = v23 + v21->static_fields->UNIT_SPEED;
    v20 = (System_String_o *)StringLiteral_4283/*"ContinueChangeFade"*/;
  }
  else
  {
    v15 = UIScriptChara_TypeInfo;
    v16 = v13 + -1.0;
    v17 = v2->fields.changeTotal;
    v18 = fminf((float)(v16 + 0.5) * changeRange, 1.0);
    if ( (BYTE3(UIScriptChara_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIScriptChara_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo);
      v15 = UIScriptChara_TypeInfo;
    }
    v2->fields.changeTotal = v17
                           + (float)(v18 + (float)(v15->static_fields->UNIT_SPEED + v15->static_fields->UNIT_SPEED));
    v2->fields.changeStep = v18 + v15->static_fields->UNIT_SPEED;
    UNIT_SPEED = v15->static_fields->UNIT_SPEED;
    v20 = (System_String_o *)StringLiteral_4283/*"ContinueChangeFade"*/;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, v20, UNIT_SPEED, 0LL);
}