void CylinderPoint___cctor(const MethodInfo *method)
{
  struct CylinderPoint_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1

  if ( (byte_4CC3CAF & 1) == 0 )
  {
    sub_1C713B0(&CylinderPoint_TypeInfo);
    byte_4CC3CAF = 1;
  }
  if ( !byte_4CC3BD7 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC3BD7 = 1;
  }
  static_fields = CylinderPoint_TypeInfo->static_fields;
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->backVector.fields.z;
  *(_QWORD *)&static_fields->FORWARD_VEC.fields.x = *(_QWORD *)&v2->backVector.fields.x;
  static_fields->FORWARD_VEC.fields.z = z;
}


void CylinderPoint___ctor(CylinderPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4CC3CAE & 1) == 0 )
  {
    sub_1C713B0(&BaseEarthPoint_TypeInfo);
    byte_4CC3CAE = 1;
  }
  if ( !BaseEarthPoint_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0);
}


System_String_o *CylinderPoint__GetEffectName(CylinderPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4CC3CAD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18874/*"ef_difference21"*/);
    byte_4CC3CAD = 1;
  }
  return (System_String_o *)StringLiteral_18874/*"ef_difference21"*/;
}


void CylinderPoint__LateUpdate(CylinderPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v7; // x1
  float DotXZ; // s0
  struct UIWidget_o *v9; // x8
  float r; // s8
  float g; // s9
  float b; // s10
  UnityEngine_Object_o *mParticleSystem; // x20
  UnityEngine_ParticleSystem_MainModule_o v14; // x0
  UnityEngine_ParticleSystem_MainModule_o v15; // x0
  UnityEngine_Transform_o *v16; // x20
  CylinderPoint_c *v17; // x8
  UnityEngine_Object_o *v18; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v19; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v20; // [xsp+38h] [xbp-98h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+70h] [xbp-60h] BYREF
  float value; // [xsp+7Ch] [xbp-54h]
  UnityEngine_Vector3_o vec; // [xsp+80h] [xbp-50h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC3CAC & 1) == 0 )
  {
    sub_1C713B0(&CylinderPoint_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3CAC = 1;
  }
  vec.fields.z = 0.0;
  *(_QWORD *)&vec.fields.x = 0;
  m_ParticleSystem = 0;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mWidget, 0, 0) )
  {
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
    this->fields.mIsForward = DotXZ > 0.0;
    if ( !v9 )
      goto LABEL_30;
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
        goto LABEL_30;
      v14.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main(transform, 0).fields.m_ParticleSystem;
      v24.fields.a = value;
      m_ParticleSystem = v14.fields.m_ParticleSystem;
      v24.fields.r = r;
      v24.fields.g = g;
      v24.fields.b = b;
      UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v20, v24, 0);
      v15.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      v19 = v20;
      UnityEngine_ParticleSystem_MainModule__set_startColor(v15, &v19, 0);
    }
    transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
    if ( !transform )
LABEL_30:
      sub_1C71608(transform, v7);
    v25.fields.a = value;
    v25.fields.r = r;
    v25.fields.g = g;
    v25.fields.b = b;
    UIWidget__set_color((UIWidget_o *)transform, v25, 0);
    if ( this->fields.mIsForward )
    {
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      v16 = (UnityEngine_Transform_o *)transform;
      v17 = CylinderPoint_TypeInfo;
      if ( !CylinderPoint_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CylinderPoint_TypeInfo);
        v17 = CylinderPoint_TypeInfo;
      }
      if ( !v16 )
        goto LABEL_30;
      UnityEngine_Transform__set_localEulerAngles(v16, v17->static_fields->FORWARD_VEC, 0);
    }
    if ( !this->fields.IsParticleDisp )
    {
      v18 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
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