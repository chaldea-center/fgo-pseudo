void __fastcall EarthPoint___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA9F2 & 1) == 0 )
  {
    sub_B5D5C4(&EarthPoint_TypeInfo, v1, v2, v3);
    byte_42EA9F2 = 1;
  }
  EarthPoint_TypeInfo->static_fields->FORWARD_VEC = UnityEngine_Vector3__get_zero(0LL);
}


void __fastcall EarthPoint___ctor(EarthPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA9F1 & 1) == 0 )
  {
    sub_B5D5C4(&BaseEarthPoint_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA9F1 = 1;
  }
  if ( (BYTE3(BaseEarthPoint_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BaseEarthPoint_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  }
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0LL);
}


System_String_o *__fastcall EarthPoint__GetEffectName(EarthPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA9F0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18407/*"ef_difference11"*/, (_DWORD)method, v2, v3);
    byte_42EA9F0 = 1;
  }
  return (System_String_o *)StringLiteral_18407/*"ef_difference11"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthPoint__LateUpdate(EarthPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mWidget; // x20
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v7; // x1
  float DotXZ; // s0
  struct UIWidget_o *v9; // x8
  _BOOL4 mIsForward; // w22
  float g; // s9
  float r; // s10
  float b; // s8
  UnityEngine_Object_o *mParticleSystem; // x20
  float v15; // s11
  float v16; // s11
  unsigned int v17; // s0
  UnityEngine_Object_o *earthEffectCamera; // x20
  float v19; // s8
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Camera_o *v21; // x20
  int v22; // s0
  UnityEngine_Transform_o *v25; // x20
  int v26; // s0
  _BOOL4 v29; // w8
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Object_o *v31; // x20
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA9EF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA9EF = 1;
  }
  zero.fields.z = 0.0;
  *(_QWORD *)&zero.fields.x = 0LL;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
    return;
  zero = UnityEngine_Vector3__get_zero(0LL);
  DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &zero, 0LL);
  v9 = this->fields.mWidget;
  mIsForward = this->fields.mIsForward;
  this->fields.mIsForward = DotXZ > 0.0;
  if ( !v9 )
    goto LABEL_53;
  r = v9->fields.mColor.fields.r;
  g = v9->fields.mColor.fields.g;
  b = v9->fields.mColor.fields.b;
  mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  v15 = DotXZ;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = fmaxf(v15, 0.0);
  if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
  {
    transform = this->fields.mParticleSystem;
    if ( !transform )
      goto LABEL_53;
    v33.fields.r = r;
    v33.fields.g = g;
    v33.fields.b = b;
    v33.fields.a = v16;
    UnityEngine_ParticleSystem__set_startColor(transform, v33, 0LL);
  }
  transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
  if ( !transform )
LABEL_53:
    sub_B5D69C(transform, v7);
  v34.fields.r = r;
  v34.fields.g = g;
  v34.fields.b = b;
  v34.fields.a = v16;
  UIWidget__set_color((UIWidget_o *)transform, v34, 0LL);
  v17 = (unsigned int)UnityEngine_Vector3__get_zero(0LL);
  earthEffectCamera = (UnityEngine_Object_o *)this->fields.earthEffectCamera;
  v19 = *(float *)&v17;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(earthEffectCamera, 0LL, 0LL) )
  {
    v20 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_53;
      v21 = this->fields.earthEffectCamera;
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
      if ( !transform )
        goto LABEL_53;
      *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      if ( !v21 )
        goto LABEL_53;
      v19 = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_41565356(v21, *(UnityEngine_Vector3_o *)&v22, 0LL));
      if ( v19 < 0.0 )
      {
        if ( this->fields.mIsForward )
        {
          this->fields.IsParticleDisp = 0;
          goto LABEL_30;
        }
LABEL_40:
        v29 = 1;
        if ( mIsForward )
          goto LABEL_32;
        goto LABEL_41;
      }
    }
  }
  if ( !this->fields.mIsForward )
    goto LABEL_40;
LABEL_30:
  v25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v25 )
    goto LABEL_53;
  UnityEngine_Transform__set_eulerAngles(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
  v29 = !this->fields.mIsForward;
  if ( mIsForward )
  {
LABEL_32:
    if ( v29 )
    {
      v30 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
        goto LABEL_39;
      transform = this->fields.mParticleSystem;
      if ( transform )
      {
        UnityEngine_ParticleSystem__Clear_51307196(transform, 0LL);
LABEL_39:
        this->fields.IsParticleDisp = 0;
        return;
      }
      goto LABEL_53;
    }
  }
LABEL_41:
  if ( v19 >= 0.0 && !v29 && !this->fields.IsParticleDisp )
  {
    v31 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_53;
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
      if ( !transform )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_53;
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
      if ( !transform )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
      this->fields.IsParticleDisp = 1;
    }
  }
}