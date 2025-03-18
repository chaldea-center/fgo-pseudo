void __fastcall EarthPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EarthPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v3; // x8
  float z; // s1

  if ( (byte_4C1EA28 & 1) == 0 )
  {
    sub_1C3B764(&EarthPoint_TypeInfo, v1);
    byte_4C1EA28 = 1;
  }
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v1);
    byte_4C1C511 = 1;
  }
  static_fields = EarthPoint_TypeInfo->static_fields;
  v3 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v3->zeroVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v3->zeroVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void __fastcall EarthPoint___ctor(EarthPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4C1EA27 & 1) == 0 )
  {
    sub_1C3B764(&BaseEarthPoint_TypeInfo, method);
    byte_4C1EA27 = 1;
  }
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0LL);
}


System_String_o *__fastcall EarthPoint__GetEffectName(EarthPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4C1EA26 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19193/*"forceDropItem"*/, method);
    byte_4C1EA26 = 1;
  }
  return (System_String_o *)StringLiteral_19193/*"forceDropItem"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthPoint__LateUpdate(EarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  __int64 v4; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v8; // x1
  float DotXZ; // s0
  struct UIWidget_o *v10; // x8
  _BOOL4 mIsForward; // w22
  float r; // s8
  float g; // s9
  float b; // s10
  UnityEngine_Object_o *mParticleSystem; // x20
  UnityEngine_ParticleSystem_MainModule_o v16; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *earthEffectCamera; // x20
  float x; // s8
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Camera_o *v21; // x20
  int v22; // s0
  int v25; // w8
  UnityEngine_Transform_o *v26; // x20
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Object_o *v28; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v29; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v30; // [xsp+38h] [xbp-A8h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+70h] [xbp-70h] BYREF
  float value; // [xsp+7Ch] [xbp-64h]
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-60h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v34; // 0:x0.8
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1EA25 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1EA25 = 1;
  }
  vec.fields.z = 0.0;
  *(_QWORD *)&vec.fields.x = 0LL;
  m_ParticleSystem = 0LL;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
    return;
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v4);
    byte_4C1C511 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&vec.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  vec.fields.z = z;
  DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &vec, 0LL);
  v10 = this->fields.mWidget;
  mIsForward = this->fields.mIsForward;
  this->fields.mIsForward = DotXZ > 0.0;
  if ( !v10 )
    goto LABEL_53;
  r = v10->fields.mColor.fields.r;
  g = v10->fields.mColor.fields.g;
  b = v10->fields.mColor.fields.b;
  value = fmaxf(DotXZ, 0.0);
  mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
  {
    transform = this->fields.mParticleSystem;
    if ( !transform )
      goto LABEL_53;
    v16.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0LL).fields.m_ParticleSystem;
    v35.fields.a = value;
    m_ParticleSystem = v16.fields.m_ParticleSystem;
    v35.fields.r = r;
    v35.fields.g = g;
    v35.fields.b = b;
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v30, v35, 0LL);
    v34.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    v29 = v30;
    UnityEngine_ParticleSystem_MainModule__set_startColor(v34, &v29, 0LL);
  }
  transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
  if ( !transform )
LABEL_53:
    sub_1C3B9C0(transform, v8);
  v36.fields.a = value;
  v36.fields.r = r;
  v36.fields.g = g;
  v36.fields.b = b;
  UIWidget__set_color((UIWidget_o *)transform, v36, 0LL);
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4C1C511 = 1;
  }
  earthEffectCamera = (UnityEngine_Object_o *)this->fields.earthEffectCamera;
  x = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(earthEffectCamera, 0LL, 0LL) )
    goto LABEL_29;
  v20 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    goto LABEL_29;
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
  x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_70928728(v21, *(UnityEngine_Vector3_o *)&v22, 0LL));
  if ( x < 0.0 )
  {
    v25 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
    {
      this->fields.IsParticleDisp = 0;
LABEL_30:
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v26 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4C1C511 )
      {
        transform = (UnityEngine_ParticleSystem_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v8);
        byte_4C1C511 = 1;
      }
      if ( !v26 )
        goto LABEL_53;
      UnityEngine_Transform__set_eulerAngles(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v25 = this->fields.mIsForward;
    }
  }
  else
  {
LABEL_29:
    v25 = this->fields.mIsForward;
    if ( this->fields.mIsForward )
      goto LABEL_30;
  }
  if ( (mIsForward & ~v25) != 0 )
  {
    v27 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
      goto LABEL_40;
    transform = this->fields.mParticleSystem;
    if ( transform )
    {
      UnityEngine_ParticleSystem__Clear_71403500(transform, 0LL);
LABEL_40:
      this->fields.IsParticleDisp = 0;
      return;
    }
    goto LABEL_53;
  }
  if ( x >= 0.0 && v25 && !this->fields.IsParticleDisp )
  {
    v28 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
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