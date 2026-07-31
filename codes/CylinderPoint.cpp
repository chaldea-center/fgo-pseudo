void CylinderPoint___cctor(const MethodInfo *method)
{
  struct CylinderPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_5934D9F & 1) == 0 )
  {
    sub_21FFC50(&CylinderPoint_TypeInfo);
    byte_5934D9F = 1;
  }
  if ( !byte_5934CBC )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5934CBC = 1;
  }
  static_fields = CylinderPoint_TypeInfo->static_fields;
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->backVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v2->backVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void CylinderPoint___ctor(CylinderPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934D9E & 1) == 0 )
  {
    sub_21FFC50(&BaseEarthPoint_TypeInfo);
    byte_5934D9E = 1;
  }
  if ( !*(&BaseEarthPoint_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo, method, v2);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0);
}


System_String_o *CylinderPoint__GetEffectName(CylinderPoint_o *this, const MethodInfo *method)
{
  if ( (byte_5934D9D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19650/*"ef_difference21"*/);
    byte_5934D9D = 1;
  }
  return (System_String_o *)StringLiteral_19650/*"ef_difference21"*/;
}


void CylinderPoint__LateUpdate(CylinderPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mWidget; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  float DotXZ; // s0
  struct UIWidget_o *v11; // x8
  float v12; // s11
  float r; // s8
  float g; // s9
  float b; // s10
  UnityEngine_Object_o *mParticleSystem; // x20
  float v17; // s11
  UnityEngine_ParticleSystem_MainModule_o v18; // x0
  UnityEngine_ParticleSystem_MainModule_o v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x2
  UnityEngine_Transform_o *v23; // x20
  UnityEngine_Object_o *v24; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v25; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v26; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-60h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5934D9C & 1) == 0 )
  {
    sub_21FFC50(&CylinderPoint_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934D9C = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  vec.fields.z = 0.0;
  m_ParticleSystem = 0;
  *(_QWORD *)&vec.fields.x = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(mWidget, 0, 0) )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec.fields.z = z;
    DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &vec, 0);
    v11 = this->fields.mWidget;
    this->fields.mIsForward = DotXZ > 0.0;
    if ( !v11 )
      goto LABEL_30;
    v12 = DotXZ;
    r = v11->fields.mColor.fields.r;
    g = v11->fields.mColor.fields.g;
    b = v11->fields.mColor.fields.b;
    mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    v17 = fmaxf(v12, 0.0);
    if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0, 0) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_30;
      v18.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0).fields.m_ParticleSystem;
      v29.fields.r = r;
      v29.fields.g = g;
      m_ParticleSystem = v18.fields.m_ParticleSystem;
      v29.fields.b = b;
      v29.fields.a = v17;
      UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v26, v29, 0);
      v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      v25 = v26;
      UnityEngine_ParticleSystem_MainModule__set_startColor(v19, &v25, 0);
    }
    transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
    if ( !transform )
LABEL_30:
      sub_21FFECC(transform, v8);
    v30.fields.r = r;
    v30.fields.g = g;
    v30.fields.b = b;
    v30.fields.a = v17;
    UIWidget__set_color((UIWidget_o *)transform, v30, 0);
    if ( this->fields.mIsForward )
    {
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      v23 = (UnityEngine_Transform_o *)transform;
      if ( !*(&CylinderPoint_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CylinderPoint_TypeInfo, v8, v22);
      if ( !v23 )
        goto LABEL_30;
      UnityEngine_Transform__set_localEulerAngles(v23, CylinderPoint_TypeInfo->static_fields->FORWARD_VEC, 0);
    }
    if ( !this->fields.IsParticleDisp )
    {
      v24 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
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
        goto LABEL_30;
      }
    }
  }
}


float CylinderPoint__get_Deg(CylinderPoint_o *this, const MethodInfo *method)
{
  return this->fields._Deg_k__BackingField;
}


void CylinderPoint__set_Deg(CylinderPoint_o *this, float value, const MethodInfo *method)
{
  this->fields._Deg_k__BackingField = value;
}