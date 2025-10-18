void FSOffset___ctor(FSOffset_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)&this->fields.vistaScale.fields.x = _Q0;
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.scopeScale.fields.y = _Q0;
  this->fields.enablePosition = 1;
  this->fields.addDirectionX = 1;
  *(_QWORD *)&this->fields.vistaPosition.fields.x = 0;
  *(_QWORD *)&this->fields.scopePosition.fields.y = 0;
  *(_QWORD *)&this->fields.vistaPosition.fields.z = 0;
  *(_QWORD *)&this->fields.subMarginX = 0x3F80000042880000LL;
  this->fields.addBottomY = 33.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FSOffset__AddBottomY(FSOffset_o *this, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  UnityEngine_Transform_o *transform; // x0
  float addBottomY; // s11
  float x; // s8
  float y; // s10
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C44981 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C44981 = 1;
  }
  if ( this->fields.enableAddBottomY )
  {
    v3 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
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
        sub_1C372B4(transform);
      }
      v10.fields.x = x;
      v10.fields.z = z;
      v10.fields.y = y + addBottomY;
      UnityEngine_Transform__set_localPosition(transform, v10, 0);
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

  if ( (byte_4C4497F & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C4497F = 1;
  }
  if ( this->fields.enableAddOffsetX )
  {
    v3 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
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
    FSOffset__AddOffsetX_44136108(this, v6, v5);
  }
}


void FSOffset__AddOffsetX_44136108(FSOffset_o *this, float ratio, const MethodInfo *method)
{
  float subMarginX; // s9
  FSUtility_c *v6; // x0
  float offsetXRatio; // s10
  float v8; // s0
  float v9; // s8
  UnityEngine_Transform_o *transform; // x0
  float v11; // s11
  int32_t addDirectionX; // w8
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C44980 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C44980 = 1;
  }
  subMarginX = this->fields.subMarginX;
  if ( this->fields.calcNotchSize )
  {
    v6 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    subMarginX = FSUtility__GetNotchSubMarginX(subMarginX, (const MethodInfo *)v6);
    this->fields.subMarginX = subMarginX;
  }
  offsetXRatio = this->fields.offsetXRatio;
  v8 = (float)((float)(fminf(ratio, 2.3333) + -1.7778) * 576.0) * 0.5;
  if ( ratio < 1.7778 )
    v9 = 0.0;
  else
    v9 = v8;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_17;
  v11 = (float)(v9 * offsetXRatio) - subMarginX;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  addDirectionX = this->fields.addDirectionX;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( addDirectionX == 1 )
  {
    x = v11 + localPosition.fields.x;
  }
  else if ( !addDirectionX )
  {
    x = localPosition.fields.x - v11;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_17:
    sub_1C372B4(transform);
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v17, 0);
}


// attributes: thunk
void FSOffset__Awake(FSOffset_o *this, const MethodInfo *method)
{
  FSOffset__UpdateOffset(this, method);
}


void FSOffset__OnEnable(FSOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C4497D & 1) == 0 )
  {
    sub_1C37058(&CommonUI_TypeInfo);
    byte_4C4497D = 1;
  }
  if ( this->fields.checkForceObi )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.defaultPosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C372B4(transform);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.defaultScale, 0);
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    if ( !CommonUI__GetForceObi_16_9(0) )
    {
      FSOffset__SetOffset(this, v4);
      FSOffset__AddOffsetX(this, v5);
      FSOffset__AddBottomY(this, v6);
    }
  }
}


void FSOffset__SetOffset(FSOffset_o *this, const MethodInfo *method)
{
  FSUtility_c *v3; // x0
  bool IsUnderVista; // w20
  UnityEngine_Transform_o *transform; // x0
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_vistaPosition; // x8
  float *p_y; // x10
  FSUtility_c *v9; // x0
  bool v10; // w20
  float *v11; // x9
  struct UnityEngine_Vector3_o *p_vistaScale; // x8
  float *v13; // x10
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4497E & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C4497E = 1;
  }
  if ( this->fields.enablePosition )
  {
    v3 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
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
    v14.fields.z = *p_z;
    v14.fields.y = *p_y;
    v14.fields.x = p_vistaPosition->fields.x;
    UnityEngine_Transform__set_localPosition(transform, v14, 0);
  }
  if ( this->fields.enableScale )
  {
    v9 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v10 = FSUtility__IsUnderVista((const MethodInfo *)v9);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( v10 )
    {
      if ( transform )
      {
        v11 = &this->fields.vistaScale.fields.z;
        p_vistaScale = &this->fields.vistaScale;
        v13 = &this->fields.vistaScale.fields.y;
LABEL_21:
        v15.fields.z = *v11;
        v15.fields.y = *v13;
        v15.fields.x = p_vistaScale->fields.x;
        UnityEngine_Transform__set_localScale(transform, v15, 0);
        return;
      }
    }
    else if ( transform )
    {
      v11 = &this->fields.scopeScale.fields.z;
      p_vistaScale = &this->fields.scopeScale;
      v13 = &this->fields.scopeScale.fields.y;
      goto LABEL_21;
    }
LABEL_22:
    sub_1C372B4(transform);
  }
}


void FSOffset__UpdateOffset(FSOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v4; // x1
  _BOOL4 checkForceObi; // w8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (this->fields.defaultPosition = UnityEngine_Transform__get_localPosition(transform, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C372B4(transform);
    }
    localScale = UnityEngine_Transform__get_localScale(transform, 0);
    checkForceObi = this->fields.checkForceObi;
    this->fields.defaultScale = localScale;
    if ( !checkForceObi )
    {
      FSOffset__SetOffset(this, v4);
      FSOffset__AddOffsetX(this, v6);
      FSOffset__AddBottomY(this, v7);
    }
  }
}