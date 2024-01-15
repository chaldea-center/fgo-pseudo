void __fastcall CylinderPoint___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FB3E1 & 1) == 0 )
  {
    sub_B16FFC(&CylinderPoint_TypeInfo, v1);
    byte_40FB3E1 = 1;
  }
  CylinderPoint_TypeInfo->static_fields->FORWARD_VEC = UnityEngine_Vector3__get_back(0LL);
}


void __fastcall CylinderPoint___ctor(CylinderPoint_o *this, const MethodInfo *method)
{
  if ( (byte_40FB3E0 & 1) == 0 )
  {
    sub_B16FFC(&BaseEarthPoint_TypeInfo, method);
    byte_40FB3E0 = 1;
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
  if ( (byte_40FB3DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18112/*"ef_difference21"*/, method);
    byte_40FB3DF = 1;
  }
  return (System_String_o *)StringLiteral_18112/*"ef_difference21"*/;
}


void __fastcall CylinderPoint__LateUpdate(CylinderPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *mWidget; // x20
  float DotXZ; // s0
  struct UIWidget_o *v6; // x8
  float g; // s9
  float r; // s10
  float b; // s8
  UnityEngine_Object_o *mParticleSystem; // x20
  float v11; // s11
  float v12; // s11
  UnityEngine_ParticleSystem_o *v13; // x0
  UIWidget_o *v14; // x0
  UnityEngine_Transform_o *transform; // x20
  CylinderPoint_c *v16; // x8
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB3DE & 1) == 0 )
  {
    sub_B16FFC(&CylinderPoint_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB3DE = 1;
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
    v6 = this->fields.mWidget;
    this->fields.mIsForward = DotXZ > 0.0;
    if ( !v6 )
      goto LABEL_32;
    r = v6->fields.mColor.fields.r;
    g = v6->fields.mColor.fields.g;
    b = v6->fields.mColor.fields.b;
    mParticleSystem = (UnityEngine_Object_o *)this->fields.mParticleSystem;
    v11 = DotXZ;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = fmaxf(v11, 0.0);
    if ( UnityEngine_Object__op_Inequality(mParticleSystem, 0LL, 0LL) )
    {
      v13 = this->fields.mParticleSystem;
      if ( !v13 )
        goto LABEL_32;
      v23.fields.r = r;
      v23.fields.g = g;
      v23.fields.b = b;
      v23.fields.a = v12;
      UnityEngine_ParticleSystem__set_startColor(v13, v23, 0LL);
    }
    v14 = this->fields.mWidget;
    if ( !v14 )
LABEL_32:
      sub_B170D4();
    v24.fields.r = r;
    v24.fields.g = g;
    v24.fields.b = b;
    v24.fields.a = v12;
    UIWidget__set_color(v14, v24, 0LL);
    if ( this->fields.mIsForward )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      v16 = CylinderPoint_TypeInfo;
      if ( (BYTE3(CylinderPoint_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CylinderPoint_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CylinderPoint_TypeInfo);
        v16 = CylinderPoint_TypeInfo;
      }
      if ( !transform )
        goto LABEL_32;
      UnityEngine_Transform__set_localEulerAngles(transform, v16->static_fields->FORWARD_VEC, 0LL);
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
        v18 = (UnityEngine_Component_o *)this->fields.mParticleSystem;
        if ( v18 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            v20 = (UnityEngine_Component_o *)this->fields.mParticleSystem;
            if ( v20 )
            {
              v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
              if ( v21 )
              {
                UnityEngine_GameObject__SetActive(v21, 1, 0LL);
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