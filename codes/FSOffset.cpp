void FSOffset___ctor(FSOffset_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.enablePosition = 1;
  this->fields.addDirectionX = 1;
  *(_QWORD *)&this->fields.vistaPosition.fields.x = 0;
  *(_OWORD *)&this->fields.vistaScale.fields.x = _Q0;
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.scopePosition.fields.y = 0;
  *(_QWORD *)&this->fields.vistaPosition.fields.z = 0;
  *(_QWORD *)&this->fields.scopeScale.fields.y = _Q0;
  this->fields.addBottomY = 33.0;
  *(_QWORD *)&this->fields.subMarginX = 0x3F80000042880000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FSOffset__AddBottomY(FSOffset_o *this, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float addBottomY; // s11
  float x; // s8
  float y; // s10
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A0BE & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593A0BE = 1;
  }
  if ( this->fields.enableAddBottomY )
  {
    v3 = FSUtility_TypeInfo;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    if ( !FSUtility__IsUnderVista((const MethodInfo *)v3) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform
        || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
            addBottomY = this->fields.addBottomY,
            x = localPosition.fields.x,
            y = localPosition.fields.y,
            z = localPosition.fields.z,
            (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
      {
        sub_21FFECC(transform, v5);
      }
      v11.fields.x = x;
      v11.fields.z = z;
      v11.fields.y = y + addBottomY;
      UnityEngine_Transform__set_localPosition(transform, v11, 0);
    }
  }
}


void FSOffset__AddOffsetX(FSOffset_o *this, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  int32_t width; // w20
  const MethodInfo *v5; // x1
  float v6; // s0
  int32_t v7; // w20

  if ( (byte_593A0BC & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593A0BC = 1;
  }
  if ( this->fields.enableAddOffsetX )
  {
    v3 = FSUtility_TypeInfo;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    if ( FSUtility__IsUnderVista((const MethodInfo *)v3) )
    {
      if ( !this->fields.enableAddOffsetX )
        return;
      if ( this->fields.enableAddOffsetXFouseScopeRatio <= 0.0 )
        return;
      width = UnityEngine_Screen__get_width(0);
      v6 = (float)width / (float)UnityEngine_Screen__get_height(0);
      if ( this->fields.enableAddOffsetXFouseScopeRatio > v6 )
        return;
    }
    else
    {
      v7 = UnityEngine_Screen__get_width(0);
      v6 = (float)v7 / (float)UnityEngine_Screen__get_height(0);
    }
    FSOffset__AddOffsetX_51080320(this, v6, v5);
  }
}


void FSOffset__AddOffsetX_51080320(FSOffset_o *this, float ratio, const MethodInfo *method)
{
  float subMarginX; // s9
  int32_t calcNotchSize; // w20
  __int64 v7; // x1
  FSUtility_c *v8; // x0
  float v9; // s9
  float offsetXRatio; // s10
  float v11; // s0
  float v12; // s0
  float v13; // s8
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  float v16; // s11
  float x; // s9
  float y; // s8
  int32_t addDirectionX; // w8
  float z; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A0BD & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593A0BD = 1;
  }
  subMarginX = this->fields.subMarginX;
  calcNotchSize = this->fields.calcNotchSize;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  if ( FSUtility__IsCalcNotch(calcNotchSize, method) )
  {
    v8 = FSUtility_TypeInfo;
    v9 = this->fields.subMarginX;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v7);
    subMarginX = FSUtility__GetNotchSubMarginX(v9, (const MethodInfo *)v8);
  }
  offsetXRatio = this->fields.offsetXRatio;
  v11 = 2.3333;
  if ( ratio <= 2.3333 )
    v11 = ratio;
  v12 = (float)((float)(v11 + -1.7778) * 576.0) * 0.5;
  if ( ratio >= 1.7778 )
    v13 = v12;
  else
    v13 = 0.0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_21;
  v16 = (float)(v13 * offsetXRatio) - subMarginX;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  addDirectionX = this->fields.addDirectionX;
  z = localPosition.fields.z;
  if ( addDirectionX == 1 )
  {
    x = v16 + localPosition.fields.x;
  }
  else if ( !addDirectionX )
  {
    x = localPosition.fields.x - v16;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_21:
    sub_21FFECC(transform, v15);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v22, 0);
}


// attributes: thunk
void FSOffset__Awake(FSOffset_o *this, const MethodInfo *method)
{
  FSOffset__UpdateOffset(this, method);
}


void FSOffset__OnEnable(FSOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_593A0BA & 1) == 0 )
  {
    sub_21FFC50(&CommonUI_TypeInfo);
    byte_593A0BA = 1;
  }
  if ( this->fields.checkForceObi )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.defaultPosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_21FFECC(transform, v4);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.defaultScale, 0);
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v5);
    if ( !CommonUI__GetForceObi_16_9(0) )
    {
      FSOffset__SetOffset(this, v6);
      FSOffset__AddOffsetX(this, v7);
      FSOffset__AddBottomY(this, v8);
    }
  }
}


void FSOffset__RestoreDefaults(FSOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_21FFECC(0, v4);
  v5 = transform;
  UnityEngine_Transform__set_localPosition(transform, this->fields.defaultPosition, 0);
  UnityEngine_Transform__set_localScale(v5, this->fields.defaultScale, 0);
}


void FSOffset__SetOffset(FSOffset_o *this, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  bool IsUnderVista; // w20
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_vistaPosition; // x8
  float *p_y; // x10
  FSUtility_c *v10; // x0
  bool v11; // w20
  float *v12; // x8
  struct UnityEngine_Vector3_o *p_vistaScale; // x9
  float *v14; // x10
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A0BB & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593A0BB = 1;
  }
  if ( this->fields.enablePosition )
  {
    v3 = FSUtility_TypeInfo;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    IsUnderVista = FSUtility__IsUnderVista((const MethodInfo *)v3);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( IsUnderVista )
    {
      if ( !transform )
        goto LABEL_22;
      p_z = &this->fields.vistaPosition.fields.z;
      p_vistaPosition = &this->fields.vistaPosition;
      p_y = &this->fields.vistaPosition.fields.y;
    }
    else
    {
      if ( !transform )
        goto LABEL_22;
      p_z = &this->fields.scopePosition.fields.z;
      p_vistaPosition = &this->fields.scopePosition;
      p_y = &this->fields.scopePosition.fields.y;
    }
    v15.fields.z = *p_z;
    v15.fields.y = *p_y;
    v15.fields.x = p_vistaPosition->fields.x;
    UnityEngine_Transform__set_localPosition(transform, v15, 0);
  }
  if ( this->fields.enableScale )
  {
    v10 = FSUtility_TypeInfo;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    v11 = FSUtility__IsUnderVista((const MethodInfo *)v10);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( v11 )
    {
      if ( transform )
      {
        v12 = &this->fields.vistaScale.fields.z;
        p_vistaScale = &this->fields.vistaScale;
        v14 = &this->fields.vistaScale.fields.y;
LABEL_21:
        v16.fields.x = p_vistaScale->fields.x;
        v16.fields.z = *v12;
        v16.fields.y = *v14;
        UnityEngine_Transform__set_localScale(transform, v16, 0);
        return;
      }
    }
    else if ( transform )
    {
      v12 = &this->fields.scopeScale.fields.z;
      p_vistaScale = &this->fields.scopeScale;
      v14 = &this->fields.scopeScale.fields.y;
      goto LABEL_21;
    }
LABEL_22:
    sub_21FFECC(transform, v6);
  }
}


void FSOffset__UpdateOffset(FSOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  _BOOL4 checkForceObi; // w8
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (this->fields.defaultPosition = UnityEngine_Transform__get_localPosition(transform, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_21FFECC(transform, v4);
    }
    localScale = UnityEngine_Transform__get_localScale(transform, 0);
    checkForceObi = this->fields.checkForceObi;
    this->fields.defaultScale = localScale;
    if ( !checkForceObi )
    {
      FSOffset__SetOffset(this, v5);
      FSOffset__AddOffsetX(this, v7);
      FSOffset__AddBottomY(this, v8);
    }
  }
}