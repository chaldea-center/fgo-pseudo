void EarthPoint___cctor(const MethodInfo *method)
{
  struct EarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_4CC3CC6 & 1) == 0 )
  {
    sub_1C713B0(&EarthPoint_TypeInfo);
    byte_4CC3CC6 = 1;
  }
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  static_fields = EarthPoint_TypeInfo->static_fields;
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->zeroVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v2->zeroVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void EarthPoint___ctor(EarthPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4CC3CC5 & 1) == 0 )
  {
    sub_1C713B0(&BaseEarthPoint_TypeInfo);
    byte_4CC3CC5 = 1;
  }
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0);
}


System_String_o *EarthPoint__GetEffectName(EarthPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4CC3CC4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18873/*"ef_difference11"*/);
    byte_4CC3CC4 = 1;
  }
  return (System_String_o *)StringLiteral_18873/*"ef_difference11"*/;
}


void EarthPoint__LateUpdate(EarthPoint_o *this, const MethodInfo *method)
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
  UnityEngine_ParticleSystem_MainModule_o v16; // x0
  UnityEngine_Object_o *earthEffectCamera; // x20
  float x; // s8
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Camera_o *v20; // x20
  int v21; // w8
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Object_o *v23; // x20
  UnityEngine_Object_o *v24; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v25; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v26; // [xsp+38h] [xbp-A8h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+70h] [xbp-70h] BYREF
  float value; // [xsp+7Ch] [xbp-64h]
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-60h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC3CC3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3CC3 = 1;
  }
  vec.fields.z = 0.0;
  *(_QWORD *)&vec.fields.x = 0;
  m_ParticleSystem = 0;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mWidget, 0, 0) )
    return;
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&vec.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  vec.fields.z = z;
  DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &vec, 0);
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
  if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0, 0) )
  {
    transform = this->fields.mParticleSystem;
    if ( !transform )
      goto LABEL_53;
    v15.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0).fields.m_ParticleSystem;
    v31.fields.a = value;
    m_ParticleSystem = v15.fields.m_ParticleSystem;
    v31.fields.r = r;
    v31.fields.g = g;
    v31.fields.b = b;
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v26, v31, 0);
    v16.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    v25 = v26;
    UnityEngine_ParticleSystem_MainModule__set_startColor(v16, &v25, 0);
  }
  transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
  if ( !transform )
LABEL_53:
    sub_1C71608(transform, v7);
  v32.fields.a = value;
  v32.fields.r = r;
  v32.fields.g = g;
  v32.fields.b = b;
  UIWidget__set_color((UIWidget_o *)transform, v32, 0);
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  earthEffectCamera = (UnityEngine_Object_o *)this->fields.earthEffectCamera;
  x = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(earthEffectCamera, 0, 0) )
    goto LABEL_29;
  v19 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v19, 0, 0) )
    goto LABEL_29;
  transform = this->fields.mParticleSystem;
  if ( !transform )
    goto LABEL_53;
  v20 = this->fields.earthEffectCamera;
  transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
  if ( !transform )
    goto LABEL_53;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
  if ( !v20 )
    goto LABEL_53;
  x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_71529188(v20, position, 0));
  if ( x < 0.0 )
  {
    v21 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
    {
      this->fields.IsParticleDisp = 0;
LABEL_30:
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      v22 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4CC0D09 )
      {
        transform = (UnityEngine_ParticleSystem_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D09 = 1;
      }
      if ( !v22 )
        goto LABEL_53;
      UnityEngine_Transform__set_eulerAngles(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      v21 = this->fields.mIsForward;
    }
  }
  else
  {
LABEL_29:
    v21 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
      goto LABEL_30;
  }
  if ( (mIsForward & ~v21) != 0 )
  {
    v23 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v23, 0, 0) )
      goto LABEL_40;
    transform = this->fields.mParticleSystem;
    if ( transform )
    {
      UnityEngine_ParticleSystem__Clear_72010792(transform, 0);
LABEL_40:
      this->fields.IsParticleDisp = 0;
      return;
    }
    goto LABEL_53;
  }
  if ( x >= 0.0 && v21 && !this->fields.IsParticleDisp )
  {
    v24 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
    {
      transform = this->fields.mParticleSystem;
      if ( transform )
      {
        transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)transform,
                                                      0);
        if ( transform )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
          transform = this->fields.mParticleSystem;
          if ( transform )
          {
            transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)transform,
                                                          0);
            if ( transform )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
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