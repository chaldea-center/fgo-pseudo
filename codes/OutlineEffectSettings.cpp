void __fastcall OutlineEffectSettings___cctor(const MethodInfo *method)
{
  struct OutlineEffectSettings_StaticFields *static_fields; // x9
  struct OutlineEffectSettings_StaticFields *v2; // x8

  if ( (byte_438A335 & 1) == 0 )
  {
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A335 = 1;
  }
  static_fields = OutlineEffectSettings_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->_DefaultVertexScale_k__BackingField.fields.x = 0x3F8000003E4CCCCDLL;
  static_fields->_DefaultVertexScale_k__BackingField.fields.z = 1.0;
  v2 = OutlineEffectSettings_TypeInfo->static_fields;
  *(_QWORD *)&v2->_DefaultVertexOffset_k__BackingField.fields.x = 1017370378LL;
  v2->_DefaultVertexOffset_k__BackingField.fields.z = 0.0;
}


void __fastcall OutlineEffectSettings___ctor(OutlineEffectSettings_o *this, const MethodInfo *method)
{
  OutlineEffectSettings_c *v3; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  __int64 v5; // x9
  struct OutlineEffectSettings_StaticFields *v6; // x8
  __int64 v7; // x9

  if ( (byte_438A334 & 1) == 0 )
  {
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A334 = 1;
  }
  *(_OWORD *)&this->fields.thickness = xmmword_331CE70;
  if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  }
  if ( !byte_438A366 )
  {
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A366 = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = *(_QWORD *)&static_fields->_DefaultVertexScale_k__BackingField.fields.x;
  *(float *)&static_fields = static_fields->_DefaultVertexScale_k__BackingField.fields.z;
  *(_QWORD *)&this->fields.vertexScale.fields.x = v5;
  LODWORD(this->fields.vertexScale.fields.z) = (_DWORD)static_fields;
  if ( !byte_438A367 )
  {
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    v3 = OutlineEffectSettings_TypeInfo;
    byte_438A367 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->_DefaultVertexOffset_k__BackingField.fields.x;
  *(float *)&v6 = v6->_DefaultVertexOffset_k__BackingField.fields.z;
  *(_QWORD *)&this->fields.vertexOffset.fields.x = v7;
  LODWORD(this->fields.vertexOffset.fields.z) = (_DWORD)v6;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


UnityEngine_Gradient_o *__fastcall OutlineEffectSettings__get_DefaultGradient(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  UnityEngine_Gradient_o *v2; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  OutlineEffectSettings_c *v9; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x0
  __int64 v11; // x19
  UnityEngine_Gradient_o *defaultGradient; // x0
  __int64 v13; // x1
  __int128 v14; // q0
  __int128 v15; // q0
  __int64 v16; // x20
  float v17; // s2
  float v18; // s3
  float v19; // s2
  float v20; // s3
  __int64 v22; // x0
  MethodInfo v23; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_GradientColorKey_o v24; // [xsp+58h] [xbp-38h] BYREF
  __int64 v25; // [xsp+78h] [xbp-18h] BYREF
  UnityEngine_GradientAlphaKey_o v26; // 0:s0.4,4:s1.4
  UnityEngine_GradientAlphaKey_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438A333 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_GradientAlphaKey___TypeInfo);
    sub_B775C4(&UnityEngine_GradientColorKey___TypeInfo);
    sub_B775C4(&UnityEngine_Gradient_TypeInfo);
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A333 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  if ( !v1->static_fields->defaultGradient )
  {
    v2 = (UnityEngine_Gradient_o *)sub_B77694(UnityEngine_Gradient_TypeInfo);
    UnityEngine_Gradient___ctor(v2, 0LL);
    v9 = OutlineEffectSettings_TypeInfo;
    if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
      v9 = OutlineEffectSettings_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->defaultGradient = v2;
    sub_B77560(
      (BattleServantConfConponent_o *)&static_fields->defaultGradient,
      (System_Int32_array **)v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
    v11 = sub_B775DC(UnityEngine_GradientColorKey___TypeInfo, 2LL);
    white = UnityEngine_Color__get_white(0LL);
    memset(&v24, 0, sizeof(v24));
    UnityEngine_GradientColorKey___ctor(&v24, white, 0.0, 0LL);
    if ( v11 )
    {
      *(float *)&v23.slot = v24.fields.time;
      *(struct UnityEngine_Color_o *)&v23.genericMethod = v24.fields.color;
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_23;
      v14 = *(_OWORD *)&v23.genericMethod;
      *(_DWORD *)(v11 + 48) = *(_DWORD *)&v23.slot;
      *(_OWORD *)(v11 + 32) = v14;
      v29 = UnityEngine_Color__get_white(0LL);
      memset(&v23.return_type, 0, 20);
      UnityEngine_GradientColorKey___ctor((UnityEngine_GradientColorKey_o *)&v23.return_type, v29, 1.0, 0LL);
      LODWORD(v23.klass) = v23.rgctx_data;
      *(_OWORD *)&v23.invoker_method = *(_OWORD *)&v23.return_type;
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_23;
      v15 = *(_OWORD *)&v23.invoker_method;
      *(_DWORD *)(v11 + 68) = v23.klass;
      *(_OWORD *)(v11 + 52) = v15;
      v16 = sub_B775DC(UnityEngine_GradientAlphaKey___TypeInfo, 2LL);
      v26.fields.alpha = 1.0;
      v26.fields.time = 0.0;
      v25 = 0LL;
      UnityEngine_GradientAlphaKey___ctor(v26, v17, v18, (const MethodInfo *)&v25);
      if ( !v16 )
        goto LABEL_24;
      if ( !*(_DWORD *)(v16 + 24)
        || (v27.fields.alpha = 1.0,
            v27.fields.time = 1.0,
            *(_QWORD *)(v16 + 32) = v25,
            v23.methodPointer = 0LL,
            UnityEngine_GradientAlphaKey___ctor(v27, v19, v20, &v23),
            *(_DWORD *)(v16 + 24) <= 1u) )
      {
LABEL_23:
        v22 = sub_B776C8(defaultGradient);
        sub_B77668(v22, 0LL);
      }
      *(_QWORD *)(v16 + 40) = v23.methodPointer;
      defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
      if ( defaultGradient )
      {
        UnityEngine_Gradient__set_colorKeys(defaultGradient, (UnityEngine_GradientColorKey_array *)v11, 0LL);
        defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
        if ( defaultGradient )
        {
          UnityEngine_Gradient__set_alphaKeys(defaultGradient, (UnityEngine_GradientAlphaKey_array *)v16, 0LL);
          v1 = OutlineEffectSettings_TypeInfo;
          goto LABEL_19;
        }
      }
    }
LABEL_24:
    sub_B7769C(defaultGradient, v13);
  }
LABEL_19:
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  return v1->static_fields->defaultGradient;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultVertexOffset(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438A332 & 1) == 0 )
  {
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A332 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v1->static_fields->_DefaultVertexScale_k__BackingField.fields.x;
  v3 = p_x[3];
  v4 = p_x[4];
  v5 = p_x[5];
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultVertexScale(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438A331 & 1) == 0 )
  {
    sub_B775C4(&OutlineEffectSettings_TypeInfo);
    byte_438A331 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( (BYTE3(OutlineEffectSettings_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v1->static_fields->_DefaultVertexScale_k__BackingField.fields.x;
  v3 = *p_x;
  v4 = p_x[1];
  v5 = p_x[2];
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}