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
  FSUtility_c *v3; // x0
  UnityEngine_Transform_o *transform; // x0
  float v5; // s11
  float x; // s8
  float y; // s10
  float z; // s9
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9F79 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40F9F79 = 1;
  }
  if ( LOBYTE(this->fields.addBottomY) )
  {
    v3 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( !FSUtility__IsUnderVista((const MethodInfo *)v3) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform
        || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
            v5 = *(float *)&this->fields.checkForceObi,
            x = localPosition.fields.x,
            y = localPosition.fields.y,
            z = localPosition.fields.z,
            (v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
      {
        sub_B170D4();
      }
      v11.fields.x = x;
      v11.fields.z = z;
      v11.fields.y = y + v5;
      UnityEngine_Transform__set_localPosition(v9, v11, 0LL);
    }
  }
}


void __fastcall FSOffset__AddOffsetX(FSOffset_o *this, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  int32_t width; // w20
  const MethodInfo *v5; // x1
  float v6; // s0
  int32_t v7; // w20

  if ( (byte_40F9F77 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40F9F77 = 1;
  }
  if ( LOBYTE(this->fields.enableAddOffsetXFouseScopeRatio) )
  {
    v3 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( FSUtility__IsUnderVista((const MethodInfo *)v3) )
    {
      if ( !LOBYTE(this->fields.enableAddOffsetXFouseScopeRatio) )
        return;
      if ( *(float *)&this->fields.addDirectionX <= 0.0 )
        return;
      width = UnityEngine_Screen__get_width(0LL);
      v6 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
      if ( *(float *)&this->fields.addDirectionX > v6 )
        return;
    }
    else
    {
      v7 = UnityEngine_Screen__get_width(0LL);
      v6 = (float)v7 / (float)UnityEngine_Screen__get_height(0LL);
    }
    FSOffset__AddOffsetX_25150896(this, v6, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FSOffset__AddOffsetX_25150896(FSOffset_o *this, float ratio, const MethodInfo *method)
{
  float offsetXRatio; // s9
  FSUtility_c *v6; // x0
  float v7; // s0
  float v8; // s9
  float v9; // s10
  float v10; // s8
  UnityEngine_Transform_o *transform; // x0
  float v12; // s11
  float v13; // s0
  float subMarginX; // w8
  float v15; // s9
  float v16; // s1
  float v17; // s8
  float v18; // s2
  float v19; // s10
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9F78 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40F9F78 = 1;
  }
  if ( BYTE1(this->fields.defaultPosition.fields.x) )
  {
    offsetXRatio = this->fields.offsetXRatio;
    v6 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this->fields.offsetXRatio = FSUtility__GetNotchSubMarginX(offsetXRatio, (const MethodInfo *)v6);
  }
  v7 = UnityEngine_Mathf__Clamp(ratio, 1.7778, 2.3333, 0LL);
  v8 = this->fields.offsetXRatio;
  v9 = *(float *)&this->fields.enableAddBottomY;
  v10 = v7;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_15;
  v12 = (float)(v9 * (float)((float)((float)(v10 + -1.7778) * 576.0) * 0.5)) - v8;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  subMarginX = this->fields.subMarginX;
  v15 = v13;
  v17 = v16;
  v19 = v18;
  if ( LODWORD(subMarginX) == 1 )
  {
    v15 = v12 + v13;
  }
  else if ( subMarginX == 0.0 )
  {
    v15 = v13 - v12;
  }
  v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v20 )
LABEL_15:
    sub_B170D4();
  v21.fields.x = v15;
  v21.fields.y = v17;
  v21.fields.z = v19;
  UnityEngine_Transform__set_localPosition(v20, v21, 0LL);
}


// attributes: thunk
void __fastcall FSOffset__Awake(FSOffset_o *this, const MethodInfo *method)
{
  FSOffset__UpdateOffset(this, method);
}


void __fastcall FSOffset__OnEnable(FSOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_40F9F75 & 1) == 0 )
  {
    sub_B16FFC(&CommonUI_TypeInfo, method);
    byte_40F9F75 = 1;
  }
  if ( LOBYTE(this->fields.defaultPosition.fields.x) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(
            transform,
            *(UnityEngine_Vector3_o *)&this->fields.defaultPosition.fields.y,
            0LL),
          (v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Transform__set_localScale(v4, *(UnityEngine_Vector3_o *)&this->fields.defaultScale.fields.y, 0LL);
    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    if ( !CommonUI__GetForceObi_16_9(0LL) )
    {
      FSOffset__SetOffset(this, v5);
      FSOffset__AddOffsetX(this, v6);
      FSOffset__AddBottomY(this, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FSOffset__SetOffset(FSOffset_o *this, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  bool IsUnderVista; // w20
  UnityEngine_Transform_o *transform; // x0
  float y; // s0
  float z; // s1
  float x; // s2
  FSUtility_c *v9; // x0
  bool v10; // w20
  UnityEngine_Transform_o *v11; // x0
  float v12; // s0
  float v13; // s1
  float v14; // s2

  if ( (byte_40F9F76 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40F9F76 = 1;
  }
  if ( LOBYTE(this->fields.vistaPosition.fields.x) )
  {
    v3 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsUnderVista = FSUtility__IsUnderVista((const MethodInfo *)v3);
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
    v9 = FSUtility_TypeInfo;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v10 = FSUtility__IsUnderVista((const MethodInfo *)v9);
    v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( v10 )
    {
      if ( v11 )
      {
        v12 = this->fields.vistaScale.fields.y;
        v13 = this->fields.vistaScale.fields.z;
        v14 = this->fields.scopeScale.fields.x;
LABEL_23:
        UnityEngine_Transform__set_localScale(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
        return;
      }
    }
    else if ( v11 )
    {
      v12 = this->fields.scopeScale.fields.y;
      v13 = this->fields.scopeScale.fields.z;
      v14 = *(float *)&this->fields.enableAddOffsetX;
      goto LABEL_23;
    }
LABEL_24:
    sub_B170D4();
  }
}


void __fastcall FSOffset__UpdateOffset(FSOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
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
          (v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    localScale = UnityEngine_Transform__get_localScale(v4, 0LL);
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