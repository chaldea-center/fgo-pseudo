void CylinderPoint___cctor(const MethodInfo *method)
{
  struct CylinderPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_4C342C7 & 1) == 0 )
  {
    sub_1C32C20(&CylinderPoint_TypeInfo);
    byte_4C342C7 = 1;
  }
  if ( !byte_4C341EF )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C341EF = 1;
  }
  static_fields = CylinderPoint_TypeInfo->static_fields;
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->backVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v2->backVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void CylinderPoint___ctor(CylinderPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4C342C6 & 1) == 0 )
  {
    sub_1C32C20(&BaseEarthPoint_TypeInfo);
    byte_4C342C6 = 1;
  }
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0);
}


System_String_o *CylinderPoint__GetEffectName(CylinderPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4C342C5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18825/*"ef_difference21"*/);
    byte_4C342C5 = 1;
  }
  return (System_String_o *)StringLiteral_18825/*"ef_difference21"*/;
}


void CylinderPoint__LateUpdate(CylinderPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_ParticleSystem_o *transform; // x0
  float DotXZ; // s0
  struct UIWidget_o *v8; // x8
  float r; // s8
  float g; // s9
  float b; // s10
  UnityEngine_Object_o *mParticleSystem; // x20
  UnityEngine_ParticleSystem_MainModule_o v13; // x0
  UnityEngine_ParticleSystem_MainModule_o v14; // x0
  UnityEngine_Transform_o *v15; // x20
  CylinderPoint_c *v16; // x8
  UnityEngine_Object_o *v17; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v18; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v19; // [xsp+38h] [xbp-98h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+70h] [xbp-60h] BYREF
  float value; // [xsp+7Ch] [xbp-54h]
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-50h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C342C4 & 1) == 0 )
  {
    sub_1C32C20(&CylinderPoint_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C342C4 = 1;
  }
  vec.fields.z = 0.0;
  *(_QWORD *)&vec.fields.x = 0;
  m_ParticleSystem = 0;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mWidget, 0, 0) )
  {
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&vec.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    vec.fields.z = z;
    DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &vec, 0);
    v8 = this->fields.mWidget;
    this->fields.mIsForward = DotXZ > 0.0;
    if ( !v8 )
      goto LABEL_30;
    r = v8->fields.mColor.fields.r;
    g = v8->fields.mColor.fields.g;
    b = v8->fields.mColor.fields.b;
    value = fmaxf(DotXZ, 0.0);
    mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0, 0) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_30;
      v13.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0).fields.m_ParticleSystem;
      v23.fields.a = value;
      m_ParticleSystem = v13.fields.m_ParticleSystem;
      v23.fields.r = r;
      v23.fields.g = g;
      v23.fields.b = b;
      UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v19, v23, 0);
      v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      v18 = v19;
      UnityEngine_ParticleSystem_MainModule__set_startColor(v14, &v18, 0);
    }
    transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
    if ( !transform )
LABEL_30:
      sub_1C32E7C(transform);
    v24.fields.a = value;
    v24.fields.r = r;
    v24.fields.g = g;
    v24.fields.b = b;
    UIWidget__set_color((UIWidget_o *)transform, v24, 0);
    if ( this->fields.mIsForward )
    {
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      v15 = (UnityEngine_Transform_o *)transform;
      v16 = CylinderPoint_TypeInfo;
      if ( !CylinderPoint_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CylinderPoint_TypeInfo);
        v16 = CylinderPoint_TypeInfo;
      }
      if ( !v15 )
        goto LABEL_30;
      UnityEngine_Transform__set_localEulerAngles(v15, v16->static_fields->FORWARD_VEC, 0);
    }
    if ( !this->fields.IsParticleDisp )
    {
      v17 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
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