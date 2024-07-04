void __fastcall CylinderPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct CylinderPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v3; // x8
  float z; // s1

  if ( (byte_48DF532 & 1) == 0 )
  {
    sub_1B00CCC(&CylinderPoint_TypeInfo, v1);
    byte_48DF532 = 1;
  }
  if ( !byte_48DF4F6 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v1);
    byte_48DF4F6 = 1;
  }
  static_fields = CylinderPoint_TypeInfo->static_fields;
  v3 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v3->backVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v3->backVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void __fastcall CylinderPoint___ctor(CylinderPoint_o *this, const MethodInfo *method)
{
  if ( (byte_48DF531 & 1) == 0 )
  {
    sub_1B00CCC(&BaseEarthPoint_TypeInfo, method);
    byte_48DF531 = 1;
  }
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0LL);
}


System_String_o *__fastcall CylinderPoint__GetEffectName(CylinderPoint_o *this, const MethodInfo *method)
{
  if ( (byte_48DF530 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_18574/*"ef_difference21"*/, method);
    byte_48DF530 = 1;
  }
  return (System_String_o *)StringLiteral_18574/*"ef_difference21"*/;
}


void __fastcall CylinderPoint__LateUpdate(CylinderPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *mWidget; // x20
  __int64 v5; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v9; // x1
  float DotXZ; // s0
  struct UIWidget_o *v11; // x8
  float r; // s8
  float g; // s9
  float b; // s10
  UnityEngine_Object_o *mParticleSystem; // x20
  UnityEngine_ParticleSystem_MainModule_o v16; // x0
  UnityEngine_Transform_o *v17; // x20
  CylinderPoint_c *v18; // x8
  UnityEngine_Object_o *v19; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v20; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v21; // [xsp+38h] [xbp-98h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+70h] [xbp-60h] BYREF
  float value; // [xsp+7Ch] [xbp-54h]
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-50h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v25; // 0:x0.8
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48DF52F & 1) == 0 )
  {
    sub_1B00CCC(&CylinderPoint_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48DF52F = 1;
  }
  vec.fields.z = 0.0;
  *(_QWORD *)&vec.fields.x = 0LL;
  m_ParticleSystem = 0LL;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
  {
    if ( !byte_48DD9F1 )
    {
      sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v5);
      byte_48DD9F1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec.fields.z = z;
    DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &vec, 0LL);
    v11 = this->fields.mWidget;
    this->fields.mIsForward = DotXZ > 0.0;
    if ( !v11 )
      goto LABEL_30;
    r = v11->fields.mColor.fields.r;
    g = v11->fields.mColor.fields.g;
    b = v11->fields.mColor.fields.b;
    value = fmaxf(DotXZ, 0.0);
    mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_30;
      v16.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0LL).fields.m_ParticleSystem;
      v26.fields.a = value;
      m_ParticleSystem = v16.fields.m_ParticleSystem;
      v26.fields.r = r;
      v26.fields.g = g;
      v26.fields.b = b;
      UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v21, v26, 0LL);
      v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      v20 = v21;
      UnityEngine_ParticleSystem_MainModule__set_startColor(v25, &v20, 0LL);
    }
    transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
    if ( !transform )
LABEL_30:
      sub_1B00F28(transform, v9);
    v27.fields.a = value;
    v27.fields.r = r;
    v27.fields.g = g;
    v27.fields.b = b;
    UIWidget__set_color((UIWidget_o *)transform, v27, 0LL);
    if ( this->fields.mIsForward )
    {
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v17 = (UnityEngine_Transform_o *)transform;
      v18 = CylinderPoint_TypeInfo;
      if ( !CylinderPoint_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CylinderPoint_TypeInfo);
        v18 = CylinderPoint_TypeInfo;
      }
      if ( !v17 )
        goto LABEL_30;
      UnityEngine_Transform__set_localEulerAngles(v17, v18->static_fields->FORWARD_VEC, 0LL);
    }
    if ( !this->fields.IsParticleDisp )
    {
      v19 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
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
        goto LABEL_30;
      }
    }
  }
}


float __fastcall CylinderPoint__get_Deg(CylinderPoint_o *this, const MethodInfo *method)
{
  return this->fields._Deg_k__BackingField;
}


void __fastcall CylinderPoint__set_Deg(CylinderPoint_o *this, float value, const MethodInfo *method)
{
  this->fields._Deg_k__BackingField = value;
}