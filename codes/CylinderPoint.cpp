void __fastcall CylinderPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418901A & 1) == 0 )
  {
    sub_B2C35C(&CylinderPoint_TypeInfo, v1);
    byte_418901A = 1;
  }
  CylinderPoint_TypeInfo->static_fields->FORWARD_VEC = UnityEngine_Vector3__get_back(0LL);
}


void __fastcall CylinderPoint___ctor(CylinderPoint_o *this, const MethodInfo *method)
{
  if ( (byte_4189019 & 1) == 0 )
  {
    sub_B2C35C(&BaseEarthPoint_TypeInfo, method);
    byte_4189019 = 1;
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
  if ( (byte_4189018 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18180/*"ef_difference21"*/, method);
    byte_4189018 = 1;
  }
  return (System_String_o *)StringLiteral_18180/*"ef_difference21"*/;
}


void __fastcall CylinderPoint__LateUpdate(CylinderPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *mWidget; // x20
  UnityEngine_ParticleSystem_o *transform; // x0
  __int64 v6; // x1
  float DotXZ; // s0
  struct UIWidget_o *v8; // x8
  float g; // s9
  float r; // s10
  float b; // s8
  UnityEngine_Object_o *mParticleSystem; // x20
  float v13; // s11
  float v14; // s11
  UnityEngine_Transform_o *v15; // x20
  CylinderPoint_c *v16; // x8
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189017 & 1) == 0 )
  {
    sub_B2C35C(&CylinderPoint_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189017 = 1;
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
    v8 = this->fields.mWidget;
    this->fields.mIsForward = DotXZ > 0.0;
    if ( !v8 )
      goto LABEL_32;
    r = v8->fields.mColor.fields.r;
    g = v8->fields.mColor.fields.g;
    b = v8->fields.mColor.fields.b;
    mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    v13 = DotXZ;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = fmaxf(v13, 0.0);
    if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
    {
      transform = this->fields.mParticleSystem;
      if ( !transform )
        goto LABEL_32;
      v19.fields.r = r;
      v19.fields.g = g;
      v19.fields.b = b;
      v19.fields.a = v14;
      UnityEngine_ParticleSystem__set_startColor(transform, v19, 0LL);
    }
    transform = (UnityEngine_ParticleSystem_o *)this->fields.mWidget;
    if ( !transform )
LABEL_32:
      sub_B2C434(transform, v6);
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = v14;
    UIWidget__set_color((UIWidget_o *)transform, v20, 0LL);
    if ( this->fields.mIsForward )
    {
      transform = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v15 = (UnityEngine_Transform_o *)transform;
      v16 = CylinderPoint_TypeInfo;
      if ( (BYTE3(CylinderPoint_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CylinderPoint_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CylinderPoint_TypeInfo);
        v16 = CylinderPoint_TypeInfo;
      }
      if ( !v15 )
        goto LABEL_32;
      UnityEngine_Transform__set_localEulerAngles(v15, v16->static_fields->FORWARD_VEC, 0LL);
    }
    if ( !this->fields.IsParticleDisp )
    {
      v17 = (UnityEngine_Object_o *)this->fields.mParticleSystem;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
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