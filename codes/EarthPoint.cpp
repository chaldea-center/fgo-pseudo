void __fastcall EarthPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4216309 & 1) == 0 )
  {
    sub_B0D8A4(&EarthPoint_TypeInfo, v1);
    byte_4216309 = 1;
  }
  EarthPoint_TypeInfo->static_fields->FORWARD_VEC = UnityEngine_Vector3__get_zero(0LL);
}


void __fastcall EarthPoint___ctor(EarthPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4216308 & 1) == 0 )
  {
    sub_B0D8A4(&BaseEarthPoint_TypeInfo, method);
    byte_4216308 = 1;
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
  if ( (byte_4216307 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18235/*"ef_difference11"*/, method);
    byte_4216307 = 1;
  }
  return (System_String_o *)StringLiteral_18235/*"ef_difference11"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthPoint__LateUpdate(EarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  UnityEngine_ParticleSystem_o *transform; // x0
  float DotXZ; // s0
  struct UIWidget_o *v6; // x8
  _BOOL4 mIsForward; // w22
  float g; // s9
  float r; // s10
  float b; // s8
  UnityEngine_Object_o *mParticleSystem; // x20
  float v12; // s11
  float v13; // s11
  unsigned int v14; // s0
  UnityEngine_Object_o *earthEffectCamera; // x20
  float v16; // s8
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Camera_o *v18; // x20
  int v19; // s0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  _BOOL4 v26; // w8
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216306 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216306 = 1;
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
  v6 = this->fields.mWidget;
  mIsForward = this->fields.mIsForward;
  this->fields.mIsForward = DotXZ > 0.0;
  if ( !v6 )
    goto LABEL_53;
  r = v6->fields.mColor.fields.r;
  g = v6->fields.mColor.fields.g;
  b = v6->fields.mColor.fields.b;
  mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  v12 = DotXZ;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = fmaxf(v12, 0.0);
  if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
  {
    transform = this->fields.mParticleSystem;
    if ( !transform )
      goto LABEL_53;
    v30.fields.r = r;
    v30.fields.g = g;
    v30.fields.b = b;
    v30.fields.a = v13;
    UnityEngine_ParticleSystem__set_startColor(transform, v30, 0LL);
  }
  transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
  if ( !transform )
LABEL_53:
    sub_B0D97C(transform);
  v31.fields.r = r;
  v31.fields.g = g;
  v31.fields.b = b;
  v31.fields.a = v13;
  UIWidget__set_color((UIWidget_o *)transform, v31, 0LL);
  v14 = (unsigned int)UnityEngine_Vector3__get_zero(0LL);
  earthEffectCamera = (UnityEngine_Object_o *)this->fields.earthEffectCamera;
  v16 = *(float *)&v14;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(earthEffectCamera, 0LL, 0LL) )
  {
    v17 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_53;
      v18 = this->fields.earthEffectCamera;
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
      if ( !transform )
        goto LABEL_53;
      *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      if ( !v18 )
        goto LABEL_53;
      v16 = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_40755064(v18, *(UnityEngine_Vector3_o *)&v19, 0LL));
      if ( v16 < 0.0 )
      {
        if ( this->fields.mIsForward )
        {
          this->fields.IsParticleDisp = 0;
          goto LABEL_30;
        }
LABEL_40:
        v26 = 1;
        if ( mIsForward )
          goto LABEL_32;
        goto LABEL_41;
      }
    }
  }
  if ( !this->fields.mIsForward )
    goto LABEL_40;
LABEL_30:
  v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v22 )
    goto LABEL_53;
  UnityEngine_Transform__set_eulerAngles(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = !this->fields.mIsForward;
  if ( mIsForward )
  {
LABEL_32:
    if ( v26 )
    {
      v27 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
        goto LABEL_39;
      transform = this->fields.mParticleSystem;
      if ( transform )
      {
        UnityEngine_ParticleSystem__Clear_50662032(transform, 0LL);
LABEL_39:
        this->fields.IsParticleDisp = 0;
        return;
      }
      goto LABEL_53;
    }
  }
LABEL_41:
  if ( v16 >= 0.0 && !v26 && !this->fields.IsParticleDisp )
  {
    v28 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
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