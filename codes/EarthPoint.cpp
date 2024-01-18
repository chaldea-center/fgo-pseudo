void __fastcall EarthPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_41894AC & 1) == 0 )
  {
    sub_B2C35C(&EarthPoint_TypeInfo, v1);
    byte_41894AC = 1;
  }
  EarthPoint_TypeInfo->static_fields->FORWARD_VEC = UnityEngine_Vector3__get_zero(0LL);
}


void __fastcall EarthPoint___ctor(EarthPoint_o *this, const MethodInfo *method)
{
  if ( (byte_41894AB & 1) == 0 )
  {
    sub_B2C35C(&BaseEarthPoint_TypeInfo, method);
    byte_41894AB = 1;
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
  if ( (byte_41894AA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18179/*"ef_difference11"*/, method);
    byte_41894AA = 1;
  }
  return (System_String_o *)StringLiteral_18179/*"ef_difference11"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthPoint__LateUpdate(EarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v5; // x1
  float DotXZ; // s0
  struct UIWidget_o *v7; // x8
  _BOOL4 mIsForward; // w22
  float g; // s9
  float r; // s10
  float b; // s8
  UnityEngine_Object_o *mParticleSystem; // x20
  float v13; // s11
  float v14; // s11
  unsigned int v15; // s0
  UnityEngine_Object_o *earthEffectCamera; // x20
  float v17; // s8
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Camera_o *v19; // x20
  int v20; // s0
  UnityEngine_Transform_o *v23; // x20
  int v24; // s0
  _BOOL4 v27; // w8
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Object_o *v29; // x20
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41894A9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41894A9 = 1;
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
  v7 = this->fields.mWidget;
  mIsForward = this->fields.mIsForward;
  this->fields.mIsForward = DotXZ > 0.0;
  if ( !v7 )
    goto LABEL_53;
  r = v7->fields.mColor.fields.r;
  g = v7->fields.mColor.fields.g;
  b = v7->fields.mColor.fields.b;
  mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  v13 = DotXZ;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = fmaxf(v13, 0.0);
  if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
  {
    transform = this->fields.mParticleSystem;
    if ( !transform )
      goto LABEL_53;
    v31.fields.r = r;
    v31.fields.g = g;
    v31.fields.b = b;
    v31.fields.a = v14;
    UnityEngine_ParticleSystem__set_startColor(transform, v31, 0LL);
  }
  transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
  if ( !transform )
LABEL_53:
    sub_B2C434(transform, v5);
  v32.fields.r = r;
  v32.fields.g = g;
  v32.fields.b = b;
  v32.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)transform, v32, 0LL);
  v15 = (unsigned int)UnityEngine_Vector3__get_zero(0LL);
  earthEffectCamera = (UnityEngine_Object_o *)this->fields.earthEffectCamera;
  v17 = *(float *)&v15;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(earthEffectCamera, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_53;
      v19 = this->fields.earthEffectCamera;
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)transform,
                                                    0LL);
      if ( !transform )
        goto LABEL_53;
      *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      if ( !v19 )
        goto LABEL_53;
      v17 = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_40630724(v19, *(UnityEngine_Vector3_o *)&v20, 0LL));
      if ( v17 < 0.0 )
      {
        if ( this->fields.mIsForward )
        {
          this->fields.IsParticleDisp = 0;
          goto LABEL_30;
        }
LABEL_40:
        v27 = 1;
        if ( mIsForward )
          goto LABEL_32;
        goto LABEL_41;
      }
    }
  }
  if ( !this->fields.mIsForward )
    goto LABEL_40;
LABEL_30:
  v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v23 )
    goto LABEL_53;
  UnityEngine_Transform__set_eulerAngles(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
  v27 = !this->fields.mIsForward;
  if ( mIsForward )
  {
LABEL_32:
    if ( v27 )
    {
      v28 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
        goto LABEL_39;
      transform = this->fields.mParticleSystem;
      if ( transform )
      {
        UnityEngine_ParticleSystem__Clear_50259652(transform, 0LL);
LABEL_39:
        this->fields.IsParticleDisp = 0;
        return;
      }
      goto LABEL_53;
    }
  }
LABEL_41:
  if ( v17 >= 0.0 && !v27 && !this->fields.IsParticleDisp )
  {
    v29 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
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