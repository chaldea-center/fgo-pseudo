void __fastcall FSOffset___ctor(FSOffset_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)&this->fields.scopeScale.fields.z = 0x3F8000003F800000LL;
  *(_OWORD *)&this->fields.vistaScale.fields.y = _Q0;
  *(_QWORD *)&this->fields.scopePosition.fields.z = 0LL;
  *(_QWORD *)&this->fields.scopePosition.fields.x = 0LL;
  *(_QWORD *)&this->fields.vistaPosition.fields.y = 0LL;
  LOBYTE(this->fields.vistaPosition.fields.x) = 1;
  LODWORD(this->fields.subMarginX) = 1;
  *(_QWORD *)&this->fields.offsetXRatio = 0x3F80000042880000LL;
  *(_DWORD *)&this->fields.checkForceObi = 1107558400;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FSOffset__AddBottomY(FSOffset_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FSUtility_c *v5; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  float v8; // s11
  float x; // s8
  float y; // s10
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8C9C & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C9C = 1;
  }
  if ( LOBYTE(this->fields.addBottomY) )
  {
    v5 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( !FSUtility__IsUnderVista((const MethodInfo *)v5) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform
        || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
            v8 = *(float *)&this->fields.checkForceObi,
            x = localPosition.fields.x,
            y = localPosition.fields.y,
            z = localPosition.fields.z,
            (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
      {
        sub_B5D69C(transform, v7);
      }
      v13.fields.x = x;
      v13.fields.z = z;
      v13.fields.y = y + v8;
      UnityEngine_Transform__set_localPosition(transform, v13, 0LL);
    }
  }
}


void __fastcall FSOffset__AddOffsetX(FSOffset_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FSUtility_c *v5; // x0
  int32_t width; // w20
  const MethodInfo *v7; // x1
  float v8; // s0
  int32_t v9; // w20

  if ( (byte_42E8C9A & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C9A = 1;
  }
  if ( LOBYTE(this->fields.enableAddOffsetXFouseScopeRatio) )
  {
    v5 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( FSUtility__IsUnderVista((const MethodInfo *)v5) )
    {
      if ( !LOBYTE(this->fields.enableAddOffsetXFouseScopeRatio) )
        return;
      if ( *(float *)&this->fields.addDirectionX <= 0.0 )
        return;
      width = UnityEngine_Screen__get_width(0LL);
      v8 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
      if ( *(float *)&this->fields.addDirectionX > v8 )
        return;
    }
    else
    {
      v9 = UnityEngine_Screen__get_width(0LL);
      v8 = (float)v9 / (float)UnityEngine_Screen__get_height(0LL);
    }
    FSOffset__AddOffsetX_25605716(this, v8, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FSOffset__AddOffsetX_25605716(FSOffset_o *this, float ratio, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float offsetXRatio; // s9
  FSUtility_c *v8; // x0
  float v9; // s0
  float v10; // s9
  float v11; // s10
  float v12; // s8
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  float v15; // s11
  float v16; // s0
  float subMarginX; // w8
  float v18; // s9
  float v19; // s1
  float v20; // s8
  float v21; // s2
  float v22; // s10
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8C9B & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8C9B = 1;
  }
  if ( BYTE1(this->fields.defaultPosition.fields.x) )
  {
    offsetXRatio = this->fields.offsetXRatio;
    v8 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this->fields.offsetXRatio = FSUtility__GetNotchSubMarginX(offsetXRatio, (const MethodInfo *)v8);
  }
  v9 = UnityEngine_Mathf__Clamp(ratio, 1.7778, 2.3333, 0LL);
  v10 = this->fields.offsetXRatio;
  v11 = *(float *)&this->fields.enableAddBottomY;
  v12 = v9;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_15;
  v15 = (float)(v11 * (float)((float)((float)(v12 + -1.7778) * 576.0) * 0.5)) - v10;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  subMarginX = this->fields.subMarginX;
  v18 = v16;
  v20 = v19;
  v22 = v21;
  if ( LODWORD(subMarginX) == 1 )
  {
    v18 = v15 + v16;
  }
  else if ( subMarginX == 0.0 )
  {
    v18 = v16 - v15;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
LABEL_15:
    sub_B5D69C(transform, v14);
  v23.fields.x = v18;
  v23.fields.y = v20;
  v23.fields.z = v22;
  UnityEngine_Transform__set_localPosition(transform, v23, 0LL);
}


// attributes: thunk
void __fastcall FSOffset__Awake(FSOffset_o *this, const MethodInfo *method)
{
  FSOffset__UpdateOffset(this, method);
}


void __fastcall FSOffset__OnEnable(FSOffset_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_42E8C98 & 1) == 0 )
  {
    sub_B5D5C4(&CommonUI_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C98 = 1;
  }
  if ( LOBYTE(this->fields.defaultPosition.fields.x) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(
            transform,
            *(UnityEngine_Vector3_o *)&this->fields.defaultPosition.fields.y,
            0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B5D69C(transform, v6);
    }
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&this->fields.defaultScale.fields.y, 0LL);
    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    if ( !CommonUI__GetForceObi_16_9(0LL) )
    {
      FSOffset__SetOffset(this, v7);
      FSOffset__AddOffsetX(this, v8);
      FSOffset__AddBottomY(this, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FSOffset__SetOffset(FSOffset_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FSUtility_c *v5; // x0
  bool IsUnderVista; // w20
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  float y; // s0
  float z; // s1
  float x; // s2
  FSUtility_c *v12; // x0
  bool v13; // w20
  float v14; // s0
  float v15; // s1
  float v16; // s2

  if ( (byte_42E8C99 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C99 = 1;
  }
  if ( LOBYTE(this->fields.vistaPosition.fields.x) )
  {
    v5 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsUnderVista = FSUtility__IsUnderVista((const MethodInfo *)v5);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( IsUnderVista )
    {
      if ( !transform )
        goto LABEL_24;
      y = this->fields.vistaPosition.fields.y;
      z = this->fields.vistaPosition.fields.z;
      x = this->fields.scopePosition.fields.x;
    }
    else
    {
      if ( !transform )
        goto LABEL_24;
      y = this->fields.scopePosition.fields.y;
      z = this->fields.scopePosition.fields.z;
      x = *(float *)&this->fields.enableScale;
    }
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&y, 0LL);
  }
  if ( LOBYTE(this->fields.vistaScale.fields.x) )
  {
    v12 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v13 = FSUtility__IsUnderVista((const MethodInfo *)v12);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( v13 )
    {
      if ( transform )
      {
        v14 = this->fields.vistaScale.fields.y;
        v15 = this->fields.vistaScale.fields.z;
        v16 = this->fields.scopeScale.fields.x;
LABEL_23:
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
        return;
      }
    }
    else if ( transform )
    {
      v14 = this->fields.scopeScale.fields.y;
      v15 = this->fields.scopeScale.fields.z;
      v16 = *(float *)&this->fields.enableAddOffsetX;
      goto LABEL_23;
    }
LABEL_24:
    sub_B5D69C(transform, v8);
  }
}


void __fastcall FSOffset__UpdateOffset(FSOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  int x_low; // w8
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (*(UnityEngine_Vector3_o *)&this->fields.defaultPosition.fields.y = UnityEngine_Transform__get_localPosition(
                                                                               transform,
                                                                               0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B5D69C(transform, v4);
    }
    localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
    x_low = LOBYTE(this->fields.defaultPosition.fields.x);
    *(UnityEngine_Vector3_o *)&this->fields.defaultScale.fields.y = localScale;
    if ( !x_low )
    {
      FSOffset__SetOffset(this, v5);
      FSOffset__AddOffsetX(this, v7);
      FSOffset__AddBottomY(this, v8);
    }
  }
}