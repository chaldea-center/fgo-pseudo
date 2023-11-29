void __fastcall EarthPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FBD13 & 1) == 0 )
  {
    sub_B16FFC(&EarthPoint_TypeInfo, v1);
    byte_40FBD13 = 1;
  }
  EarthPoint_TypeInfo->static_fields->FORWARD_VEC = UnityEngine_Vector3__get_zero(0LL);
}


void __fastcall EarthPoint___ctor(EarthPoint_o *this, const MethodInfo *method)
{
  if ( (byte_40FBD12 & 1) == 0 )
  {
    sub_B16FFC(&BaseEarthPoint_TypeInfo, method);
    byte_40FBD12 = 1;
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
  if ( (byte_40FBD11 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18111, method);
    byte_40FBD11 = 1;
  }
  return (System_String_o *)StringLiteral_18111;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthPoint__LateUpdate(EarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  float DotXZ; // s0
  struct UIWidget_o *v5; // x8
  _BOOL4 mIsForward; // w22
  float g; // s9
  float r; // s10
  float b; // s8
  UnityEngine_Object_o *mParticleSystem; // x20
  float v11; // s11
  float v12; // s11
  UnityEngine_ParticleSystem_o *v13; // x0
  UIWidget_o *v14; // x0
  unsigned int v15; // s0
  UnityEngine_Object_o *earthEffectCamera; // x20
  float v17; // s8
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Camera_o *v20; // x20
  UnityEngine_Transform_o *transform; // x0
  int v22; // s0
  UnityEngine_Transform_o *v25; // x20
  int v26; // s0
  _BOOL4 v29; // w8
  UnityEngine_Object_o *v30; // x20
  UnityEngine_ParticleSystem_o *v31; // x0
  UnityEngine_Object_o *v32; // x20
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FBD10 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBD10 = 1;
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
  v5 = this->fields.mWidget;
  mIsForward = this->fields.mIsForward;
  this->fields.mIsForward = DotXZ > 0.0;
  if ( !v5 )
    goto LABEL_53;
  r = v5->fields.mColor.fields.r;
  g = v5->fields.mColor.fields.g;
  b = v5->fields.mColor.fields.b;
  mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  v11 = DotXZ;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = fmaxf(v11, 0.0);
  if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
  {
    v13 = this->fields.mParticleSystem;
    if ( !v13 )
      goto LABEL_53;
    v38.fields.r = r;
    v38.fields.g = g;
    v38.fields.b = b;
    v38.fields.a = v12;
    UnityEngine_ParticleSystem__set_startColor(v13, v38, 0LL);
  }
  v14 = this->fields.mWidget;
  if ( !v14 )
LABEL_53:
    sub_B170D4();
  v39.fields.r = r;
  v39.fields.g = g;
  v39.fields.b = b;
  v39.fields.a = v12;
  UIWidget__set_color(v14, v39, 0LL);
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
      v19 = (UnityEngine_Component_o *)this->fields.mParticleSystem;
      if ( !v19 )
        goto LABEL_53;
      v20 = this->fields.earthEffectCamera;
      transform = UnityEngine_Component__get_transform(v19, 0LL);
      if ( !transform )
        goto LABEL_53;
      *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(transform, 0LL);
      if ( !v20 )
        goto LABEL_53;
      v17 = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_40663552(v20, *(UnityEngine_Vector3_o *)&v22, 0LL));
      if ( v17 < 0.0 )
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
      v31 = this->fields.mParticleSystem;
      if ( v31 )
      {
        UnityEngine_ParticleSystem__Clear_49805748(v31, 0LL);
LABEL_39:
        this->fields.IsParticleDisp = 0;
        return;
      }
      goto LABEL_53;
    }
  }
LABEL_41:
  if ( v17 >= 0.0 && !v29 && !this->fields.IsParticleDisp )
  {
    v32 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
    {
      v33 = (UnityEngine_Component_o *)this->fields.mParticleSystem;
      if ( !v33 )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject(v33, 0LL);
      if ( !gameObject )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      v35 = (UnityEngine_Component_o *)this->fields.mParticleSystem;
      if ( !v35 )
        goto LABEL_53;
      v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
      if ( !v36 )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive(v36, 1, 0LL);
      this->fields.IsParticleDisp = 1;
    }
  }
}