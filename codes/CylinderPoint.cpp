void __fastcall CylinderPoint___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA323 & 1) == 0 )
  {
    sub_B5D5C4(&CylinderPoint_TypeInfo, v1, v2, v3);
    byte_42EA323 = 1;
  }
  CylinderPoint_TypeInfo->static_fields->FORWARD_VEC = UnityEngine_Vector3__get_back(0LL);
}


void __fastcall CylinderPoint___ctor(CylinderPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA322 & 1) == 0 )
  {
    sub_B5D5C4(&BaseEarthPoint_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA322 = 1;
  }
  if ( (BYTE3(BaseEarthPoint_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BaseEarthPoint_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BaseEarthPoint_TypeInfo);
  }
  BaseEarthPoint___ctor((BaseEarthPoint_o *)this, 0LL);
}


System_String_o *__fastcall CylinderPoint__GetEffectName(CylinderPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA321 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18408/*"ef_difference21"*/, (_DWORD)method, v2, v3);
    byte_42EA321 = 1;
  }
  return (System_String_o *)StringLiteral_18408/*"ef_difference21"*/;
}


void __fastcall CylinderPoint__LateUpdate(CylinderPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *mWidget; // x20
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v10; // x1
  float DotXZ; // s0
  struct UIWidget_o *v12; // x8
  float g; // s9
  float r; // s10
  float b; // s8
  UnityEngine_Object_o *mParticleSystem; // x20
  float v17; // s11
  float v18; // s11
  UnityEngine_Transform_o *v19; // x20
  CylinderPoint_c *v20; // x8
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA320 & 1) == 0 )
  {
    sub_B5D5C4(&CylinderPoint_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EA320 = 1;
  }
  zero.fields.z = 0.0;
  *(_QWORD *)&zero.fields.x = 0LL;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    DotXZ = BaseEarthPoint__GetDotXZ((BaseEarthPoint_o *)this, &zero, 0LL);
    v12 = this->fields.mWidget;
    this->fields.mIsForward = DotXZ > 0.0;
    if ( !v12 )
      goto LABEL_32;
    r = v12->fields.mColor.fields.r;
    g = v12->fields.mColor.fields.g;
    b = v12->fields.mColor.fields.b;
    mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    v17 = DotXZ;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = fmaxf(v17, 0.0);
    if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_32;
      v23.fields.r = r;
      v23.fields.g = g;
      v23.fields.b = b;
      v23.fields.a = v18;
      UnityEngine_ParticleSystem__set_startColor(transform, v23, 0LL);
    }
    transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
    if ( !transform )
LABEL_32:
      sub_B5D69C(transform, v10);
    v24.fields.r = r;
    v24.fields.g = g;
    v24.fields.b = b;
    v24.fields.a = v18;
    UIWidget__set_color((UIWidget_o *)transform, v24, 0LL);
    if ( this->fields.mIsForward )
    {
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v19 = (UnityEngine_Transform_o *)transform;
      v20 = CylinderPoint_TypeInfo;
      if ( (BYTE3(CylinderPoint_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CylinderPoint_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CylinderPoint_TypeInfo);
        v20 = CylinderPoint_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_32;
      UnityEngine_Transform__set_localEulerAngles(v19, v20->static_fields->FORWARD_VEC, 0LL);
    }
    if ( !this->fields.IsParticleDisp )
    {
      v21 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
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
        goto LABEL_32;
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