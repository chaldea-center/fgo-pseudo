void __fastcall EarthPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct EarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v4; // x8
  float z; // s1

  if ( (byte_4B12D65 & 1) == 0 )
  {
    sub_1BCA7E0(&EarthPoint_TypeInfo, v1, v2);
    byte_4B12D65 = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v1, v2);
    byte_4B109C1 = 1;
  }
  static_fields = EarthPoint_TypeInfo->static_fields;
  v4 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v4->zeroVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v4->zeroVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void __fastcall EarthPoint___ctor(EarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12D64 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseEarthPoint_TypeInfo, method, v2);
    byte_4B12D64 = 1;
  }
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo, method);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0LL);
}


System_String_o *__fastcall EarthPoint__GetEffectName(EarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12D63 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19019/*"ef_difference11"*/, method, v2);
    byte_4B12D63 = 1;
  }
  return (System_String_o *)StringLiteral_19019/*"ef_difference11"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthPoint__LateUpdate(EarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mWidget; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v10; // x1
  float DotXZ; // s0
  struct UIWidget_o *v12; // x8
  _BOOL4 mIsForward; // w22
  float r; // s8
  float g; // s9
  float b; // s10
  UnityEngine_Object_o *mParticleSystem; // x20
  UnityEngine_ParticleSystem_MainModule_o v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *earthEffectCamera; // x20
  float x; // s8
  UnityEngine_Object_o *v23; // x20
  UnityEngine_Camera_o *v24; // x20
  int v25; // s0
  int v28; // w8
  __int64 v29; // x2
  UnityEngine_Transform_o *v30; // x20
  UnityEngine_Object_o *v31; // x20
  UnityEngine_Object_o *v32; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v33; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v34; // [xsp+38h] [xbp-A8h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+70h] [xbp-70h] BYREF
  float value; // [xsp+7Ch] [xbp-64h]
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-60h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v38; // 0:x0.8
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12D62 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12D62 = 1;
  }
  vec.fields.z = 0.0;
  *(_QWORD *)&vec.fields.x = 0LL;
  m_ParticleSystem = 0LL;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
    return;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v5, v6);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&vec.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  vec.fields.z = z;
  DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &vec, 0LL);
  v12 = this->fields.mWidget;
  mIsForward = this->fields.mIsForward;
  this->fields.mIsForward = DotXZ > 0.0;
  if ( !v12 )
    goto LABEL_53;
  r = v12->fields.mColor.fields.r;
  g = v12->fields.mColor.fields.g;
  b = v12->fields.mColor.fields.b;
  value = fmaxf(DotXZ, 0.0);
  mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
  {
    transform = this->fields.mParticleSystem;
    if ( !transform )
      goto LABEL_53;
    v18.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0LL).fields.m_ParticleSystem;
    v39.fields.a = value;
    m_ParticleSystem = v18.fields.m_ParticleSystem;
    v39.fields.r = r;
    v39.fields.g = g;
    v39.fields.b = b;
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v34, v39, 0LL);
    v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    v33 = v34;
    UnityEngine_ParticleSystem_MainModule__set_startColor(v38, &v33, 0LL);
  }
  transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
  if ( !transform )
LABEL_53:
    sub_1BCAA3C(transform, v10);
  v40.fields.a = value;
  v40.fields.r = r;
  v40.fields.g = g;
  v40.fields.b = b;
  UIWidget__set_color((UIWidget_o *)transform, v40, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v19, v20);
    byte_4B109C1 = 1;
  }
  earthEffectCamera = (UnityEngine_Object_o *)this->fields.earthEffectCamera;
  x = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( !UnityEngine_Object__op_Inequality(earthEffectCamera, 0LL, 0LL) )
    goto LABEL_29;
  v23 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    goto LABEL_29;
  transform = this->fields.mParticleSystem;
  if ( !transform )
    goto LABEL_53;
  v24 = this->fields.earthEffectCamera;
  transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
  if ( !transform )
    goto LABEL_53;
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v24 )
    goto LABEL_53;
  x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_69960456(v24, *(UnityEngine_Vector3_o *)&v25, 0LL));
  if ( x < 0.0 )
  {
    v28 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
    {
      this->fields.IsParticleDisp = 0;
LABEL_30:
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v30 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4B109C1 )
      {
        transform = (UnityEngine_ParticleSystem_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v29);
        byte_4B109C1 = 1;
      }
      if ( !v30 )
        goto LABEL_53;
      UnityEngine_Transform__set_eulerAngles(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v28 = this->fields.mIsForward;
    }
  }
  else
  {
LABEL_29:
    v28 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
      goto LABEL_30;
  }
  if ( (mIsForward & ~v28) != 0 )
  {
    v31 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( !UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
      goto LABEL_40;
    transform = this->fields.mParticleSystem;
    if ( transform )
    {
      UnityEngine_ParticleSystem__Clear_70434828(transform, 0LL);
LABEL_40:
      this->fields.IsParticleDisp = 0;
      return;
    }
    goto LABEL_53;
  }
  if ( x >= 0.0 && v28 && !this->fields.IsParticleDisp )
  {
    v32 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
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