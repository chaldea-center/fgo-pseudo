void __fastcall FSOffset___ctor(FSOffset_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)&this->fields.vistaScale.fields.x = _Q0;
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.scopeScale.fields.y = _Q0;
  this->fields.enablePosition = 1;
  this->fields.addDirectionX = 1;
  *(_QWORD *)&this->fields.vistaPosition.fields.x = 0LL;
  *(_QWORD *)&this->fields.scopePosition.fields.y = 0LL;
  *(_QWORD *)&this->fields.vistaPosition.fields.z = 0LL;
  *(_QWORD *)&this->fields.subMarginX = 0x3F80000042880000LL;
  this->fields.addBottomY = 33.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FSOffset__AddBottomY(FSOffset_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FSUtility_c *v4; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  float addBottomY; // s11
  float x; // s8
  float y; // s10
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1797A & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B1797A = 1;
  }
  if ( this->fields.enableAddBottomY )
  {
    v4 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    if ( !FSUtility__IsUnderVista((const MethodInfo *)v4) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform
        || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
            addBottomY = this->fields.addBottomY,
            x = localPosition.fields.x,
            y = localPosition.fields.y,
            z = localPosition.fields.z,
            (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
      {
        sub_1BCAA3C(transform, v6);
      }
      v12.fields.x = x;
      v12.fields.z = z;
      v12.fields.y = y + addBottomY;
      UnityEngine_Transform__set_localPosition(transform, v12, 0LL);
    }
  }
}


void __fastcall FSOffset__AddOffsetX(FSOffset_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FSUtility_c *v4; // x0
  int32_t width; // w20
  const MethodInfo *v6; // x1
  float v7; // s0
  int32_t v8; // w20

  if ( (byte_4B17978 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B17978 = 1;
  }
  if ( this->fields.enableAddOffsetX )
  {
    v4 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    if ( FSUtility__IsUnderVista((const MethodInfo *)v4) )
    {
      if ( !this->fields.enableAddOffsetX )
        return;
      if ( this->fields.enableAddOffsetXFouseScopeRatio <= 0.0 )
        return;
      width = UnityEngine_Screen__get_width(0LL);
      v7 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
      if ( this->fields.enableAddOffsetXFouseScopeRatio > v7 )
        return;
    }
    else
    {
      v8 = UnityEngine_Screen__get_width(0LL);
      v7 = (float)v8 / (float)UnityEngine_Screen__get_height(0LL);
    }
    FSOffset__AddOffsetX_41839280(this, v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FSOffset__AddOffsetX_41839280(FSOffset_o *this, float ratio, const MethodInfo *method)
{
  __int64 v3; // x2
  float subMarginX; // s9
  FSUtility_c *v7; // x0
  float offsetXRatio; // s10
  float v9; // s0
  float v10; // s8
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  float v13; // s11
  float v14; // s0
  int32_t addDirectionX; // w8
  float v16; // s9
  float v17; // s1
  float v18; // s8
  float v19; // s2
  float v20; // s10
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17979 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v3);
    byte_4B17979 = 1;
  }
  subMarginX = this->fields.subMarginX;
  if ( this->fields.calcNotchSize )
  {
    v7 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    subMarginX = FSUtility__GetNotchSubMarginX(subMarginX, (const MethodInfo *)v7);
    this->fields.subMarginX = subMarginX;
  }
  offsetXRatio = this->fields.offsetXRatio;
  v9 = (float)((float)(fminf(ratio, 2.3333) + -1.7778) * 576.0) * 0.5;
  if ( ratio < 1.7778 )
    v10 = 0.0;
  else
    v10 = v9;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_17;
  v13 = (float)(v10 * offsetXRatio) - subMarginX;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  addDirectionX = this->fields.addDirectionX;
  v16 = v14;
  v18 = v17;
  v20 = v19;
  if ( addDirectionX == 1 )
  {
    v16 = v13 + v14;
  }
  else if ( !addDirectionX )
  {
    v16 = v14 - v13;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
LABEL_17:
    sub_1BCAA3C(transform, v12);
  v21.fields.x = v16;
  v21.fields.y = v18;
  v21.fields.z = v20;
  UnityEngine_Transform__set_localPosition(transform, v21, 0LL);
}


// attributes: thunk
void __fastcall FSOffset__Awake(FSOffset_o *this, const MethodInfo *method)
{
  FSOffset__UpdateOffset(this, method);
}


void __fastcall FSOffset__OnEnable(FSOffset_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4B17976 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonUI_TypeInfo, method, v2);
    byte_4B17976 = 1;
  }
  if ( this->fields.checkForceObi )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.defaultPosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1BCAA3C(transform, v5);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.defaultScale, 0LL);
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v6);
    if ( !CommonUI__GetForceObi_16_9(0LL) )
    {
      FSOffset__SetOffset(this, v7);
      FSOffset__AddOffsetX(this, v8);
      FSOffset__AddBottomY(this, v9);
    }
  }
}


void __fastcall FSOffset__SetOffset(FSOffset_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FSUtility_c *v4; // x0
  bool IsUnderVista; // w20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_vistaPosition; // x8
  float *p_y; // x10
  FSUtility_c *v11; // x0
  bool v12; // w20
  float *v13; // x9
  struct UnityEngine_Vector3_o *p_vistaScale; // x8
  float *v15; // x10
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17977 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B17977 = 1;
  }
  if ( this->fields.enablePosition )
  {
    v4 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    IsUnderVista = FSUtility__IsUnderVista((const MethodInfo *)v4);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
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
    v16.fields.z = *p_z;
    v16.fields.y = *p_y;
    v16.fields.x = p_vistaPosition->fields.x;
    UnityEngine_Transform__set_localPosition(transform, v16, 0LL);
  }
  if ( this->fields.enableScale )
  {
    v11 = FSUtility_TypeInfo;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
    v12 = FSUtility__IsUnderVista((const MethodInfo *)v11);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( v12 )
    {
      if ( transform )
      {
        v13 = &this->fields.vistaScale.fields.z;
        p_vistaScale = &this->fields.vistaScale;
        v15 = &this->fields.vistaScale.fields.y;
LABEL_21:
        v17.fields.z = *v13;
        v17.fields.y = *v15;
        v17.fields.x = p_vistaScale->fields.x;
        UnityEngine_Transform__set_localScale(transform, v17, 0LL);
        return;
      }
    }
    else if ( transform )
    {
      v13 = &this->fields.scopeScale.fields.z;
      p_vistaScale = &this->fields.scopeScale;
      v15 = &this->fields.scopeScale.fields.y;
      goto LABEL_21;
    }
LABEL_22:
    sub_1BCAA3C(transform, v7);
  }
}


void __fastcall FSOffset__UpdateOffset(FSOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  _BOOL4 checkForceObi; // w8
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (this->fields.defaultPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1BCAA3C(transform, v4);
    }
    localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
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