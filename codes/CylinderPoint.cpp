void __fastcall CylinderPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct CylinderPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v4; // x8
  float z; // s1

  if ( (byte_4B12D4E & 1) == 0 )
  {
    sub_1BCA7E0(&CylinderPoint_TypeInfo, v1, v2);
    byte_4B12D4E = 1;
  }
  if ( !byte_4B12CDB )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v1, v2);
    byte_4B12CDB = 1;
  }
  static_fields = CylinderPoint_TypeInfo->static_fields;
  v4 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v4->backVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v4->backVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void __fastcall CylinderPoint___ctor(CylinderPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12D4D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseEarthPoint_TypeInfo, method, v2);
    byte_4B12D4D = 1;
  }
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo, method);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0LL);
}


System_String_o *__fastcall CylinderPoint__GetEffectName(CylinderPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12D4C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19020/*"ef_difference21"*/, method, v2);
    byte_4B12D4C = 1;
  }
  return (System_String_o *)StringLiteral_19020/*"ef_difference21"*/;
}


void __fastcall CylinderPoint__LateUpdate(CylinderPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *mWidget; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v12; // x1
  float DotXZ; // s0
  struct UIWidget_o *v14; // x8
  float r; // s8
  float g; // s9
  float b; // s10
  UnityEngine_Object_o *mParticleSystem; // x20
  UnityEngine_ParticleSystem_MainModule_o v19; // x0
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x20
  CylinderPoint_c *v22; // x8
  UnityEngine_Object_o *v23; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v24; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v25; // [xsp+38h] [xbp-98h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+70h] [xbp-60h] BYREF
  float value; // [xsp+7Ch] [xbp-54h]
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-50h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v29; // 0:x0.8
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12D4B & 1) == 0 )
  {
    sub_1BCA7E0(&CylinderPoint_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12D4B = 1;
  }
  vec.fields.z = 0.0;
  *(_QWORD *)&vec.fields.x = 0LL;
  m_ParticleSystem = 0LL;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v7, v8);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec.fields.z = z;
    DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &vec, 0LL);
    v14 = this->fields.mWidget;
    this->fields.mIsForward = DotXZ > 0.0;
    if ( !v14 )
      goto LABEL_30;
    r = v14->fields.mColor.fields.r;
    g = v14->fields.mColor.fields.g;
    b = v14->fields.mColor.fields.b;
    value = fmaxf(DotXZ, 0.0);
    mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_30;
      v19.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0LL).fields.m_ParticleSystem;
      v30.fields.a = value;
      m_ParticleSystem = v19.fields.m_ParticleSystem;
      v30.fields.r = r;
      v30.fields.g = g;
      v30.fields.b = b;
      UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v25, v30, 0LL);
      v29.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      v24 = v25;
      UnityEngine_ParticleSystem_MainModule__set_startColor(v29, &v24, 0LL);
    }
    transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
    if ( !transform )
LABEL_30:
      sub_1BCAA3C(transform, v12);
    v31.fields.a = value;
    v31.fields.r = r;
    v31.fields.g = g;
    v31.fields.b = b;
    UIWidget__set_color((UIWidget_o *)transform, v31, 0LL);
    if ( this->fields.mIsForward )
    {
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v21 = (UnityEngine_Transform_o *)transform;
      v22 = CylinderPoint_TypeInfo;
      if ( !CylinderPoint_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CylinderPoint_TypeInfo, v12);
        v22 = CylinderPoint_TypeInfo;
      }
      if ( !v21 )
        goto LABEL_30;
      UnityEngine_Transform__set_localEulerAngles(v21, v22->static_fields->FORWARD_VEC, 0LL);
    }
    if ( !this->fields.IsParticleDisp )
    {
      v23 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
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