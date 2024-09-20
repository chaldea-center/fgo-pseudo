void __fastcall EarthPoint___cctor(const MethodInfo *method)
{
  struct EarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_4A57D62 & 1) == 0 )
  {
    sub_1B885B0(&EarthPoint_TypeInfo);
    byte_4A57D62 = 1;
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = EarthPoint_TypeInfo->static_fields;
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->zeroVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v2->zeroVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void __fastcall EarthPoint___ctor(EarthPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4A57D61 & 1) == 0 )
  {
    sub_1B885B0(&BaseEarthPoint_TypeInfo);
    byte_4A57D61 = 1;
  }
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0LL);
}


System_String_o *__fastcall EarthPoint__GetEffectName(EarthPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4A57D60 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18825/*"ef_difference11"*/);
    byte_4A57D60 = 1;
  }
  return (System_String_o *)StringLiteral_18825/*"ef_difference11"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthPoint__LateUpdate(EarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v7; // x1
  float DotXZ; // s0
  struct UIWidget_o *v9; // x8
  _BOOL4 mIsForward; // w22
  float r; // s8
  float g; // s9
  float b; // s10
  UnityEngine_Object_o *mParticleSystem; // x20
  UnityEngine_ParticleSystem_MainModule_o v15; // x0
  UnityEngine_Object_o *earthEffectCamera; // x20
  float x; // s8
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Camera_o *v19; // x20
  int v20; // s0
  int v23; // w8
  UnityEngine_Transform_o *v24; // x20
  UnityEngine_Object_o *v25; // x20
  UnityEngine_Object_o *v26; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v27; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v28; // [xsp+38h] [xbp-A8h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+70h] [xbp-70h] BYREF
  float value; // [xsp+7Ch] [xbp-64h]
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-60h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v32; // 0:x0.8
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57D5F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57D5F = 1;
  }
  vec.fields.z = 0.0;
  *(_QWORD *)&vec.fields.x = 0LL;
  m_ParticleSystem = 0LL;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
    return;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&vec.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  vec.fields.z = z;
  DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &vec, 0LL);
  v9 = this->fields.mWidget;
  mIsForward = this->fields.mIsForward;
  this->fields.mIsForward = DotXZ > 0.0;
  if ( !v9 )
    goto LABEL_53;
  r = v9->fields.mColor.fields.r;
  g = v9->fields.mColor.fields.g;
  b = v9->fields.mColor.fields.b;
  value = fmaxf(DotXZ, 0.0);
  mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
  {
    transform = this->fields.mParticleSystem;
    if ( !transform )
      goto LABEL_53;
    v15.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0LL).fields.m_ParticleSystem;
    v33.fields.a = value;
    m_ParticleSystem = v15.fields.m_ParticleSystem;
    v33.fields.r = r;
    v33.fields.g = g;
    v33.fields.b = b;
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v28, v33, 0LL);
    v32.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    v27 = v28;
    UnityEngine_ParticleSystem_MainModule__set_startColor(v32, &v27, 0LL);
  }
  transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
  if ( !transform )
LABEL_53:
    sub_1B8880C(transform, v7);
  v34.fields.a = value;
  v34.fields.r = r;
  v34.fields.g = g;
  v34.fields.b = b;
  UIWidget__set_color((UIWidget_o *)transform, v34, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  earthEffectCamera = (UnityEngine_Object_o *)this->fields.earthEffectCamera;
  x = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(earthEffectCamera, 0LL, 0LL) )
    goto LABEL_29;
  v18 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    goto LABEL_29;
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
  x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_69265680(v19, *(UnityEngine_Vector3_o *)&v20, 0LL));
  if ( x < 0.0 )
  {
    v23 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
    {
      this->fields.IsParticleDisp = 0;
LABEL_30:
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v24 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4A55CE1 )
      {
        transform = (UnityEngine_ParticleSystem_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v24 )
        goto LABEL_53;
      UnityEngine_Transform__set_eulerAngles(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v23 = this->fields.mIsForward;
    }
  }
  else
  {
LABEL_29:
    v23 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
      goto LABEL_30;
  }
  if ( (mIsForward & ~v23) != 0 )
  {
    v25 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      goto LABEL_40;
    transform = this->fields.mParticleSystem;
    if ( transform )
    {
      UnityEngine_ParticleSystem__Clear_69740004(transform, 0LL);
LABEL_40:
      this->fields.IsParticleDisp = 0;
      return;
    }
    goto LABEL_53;
  }
  if ( x >= 0.0 && v23 && !this->fields.IsParticleDisp )
  {
    v26 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    {
      transform = this->fields.mParticleSystem;
      if ( transform )
      {
        transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)transform,
                                                      0LL);
        if ( transform )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
          transform = this->fields.mParticleSystem;
          if ( transform )
          {
            transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)transform,
                                                          0LL);
            if ( transform )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
              this->fields.IsParticleDisp = 1;
              return;
            }
          }
        }
      }
      goto LABEL_53;
    }
  }
}