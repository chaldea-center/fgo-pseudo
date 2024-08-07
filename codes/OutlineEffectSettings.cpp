void __fastcall OutlineEffectSettings___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct OutlineEffectSettings_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v3; // x8
  float z; // s1
  UnityEngine_Vector3_c *v5; // x9
  OutlineEffectSettings_c *v6; // x8
  struct UnityEngine_Vector3_StaticFields *v7; // x10
  struct OutlineEffectSettings_StaticFields *v8; // x11
  float v9; // s1
  struct UnityEngine_Vector3_StaticFields *v10; // x10
  struct OutlineEffectSettings_StaticFields *v11; // x11
  float v12; // s1
  struct UnityEngine_Vector3_StaticFields *v13; // x9
  struct OutlineEffectSettings_StaticFields *v14; // x10
  float v15; // s1
  struct OutlineEffectSettings_StaticFields *v16; // x9
  struct OutlineEffectSettings_StaticFields *v17; // x8

  if ( (byte_49FA778 & 1) == 0 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v1);
    byte_49FA778 = 1;
  }
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v1);
    byte_49F9821 = 1;
  }
  static_fields = OutlineEffectSettings_TypeInfo->static_fields;
  v3 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v3->zeroVector.fields.z;
  *(_QWORD *)&static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x = *(_QWORD *)&v3->zeroVector.fields.x;
  static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z = z;
  v5 = UnityEngine_Vector3_TypeInfo;
  v6 = OutlineEffectSettings_TypeInfo;
  v7 = UnityEngine_Vector3_TypeInfo->static_fields;
  v8 = OutlineEffectSettings_TypeInfo->static_fields;
  v9 = v7->zeroVector.fields.z;
  *(_QWORD *)&v8->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x = *(_QWORD *)&v7->zeroVector.fields.x;
  v8->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z = v9;
  v10 = v5->static_fields;
  v11 = v6->static_fields;
  v12 = v10->zeroVector.fields.z;
  *(_QWORD *)&v11->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x = *(_QWORD *)&v10->zeroVector.fields.x;
  v11->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z = v12;
  if ( !byte_49F9826 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v1);
    v5 = UnityEngine_Vector3_TypeInfo;
    v6 = OutlineEffectSettings_TypeInfo;
    byte_49F9826 = 1;
  }
  v13 = v5->static_fields;
  v14 = v6->static_fields;
  v15 = v13->oneVector.fields.z;
  *(_QWORD *)&v14->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x = *(_QWORD *)&v13->oneVector.fields.x;
  v14->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z = v15;
  v16 = v6->static_fields;
  *(_QWORD *)&v16->_DefaultVertexScale_k__BackingField.fields.x = 0x3F8000003E4CCCCDLL;
  v16->_DefaultVertexScale_k__BackingField.fields.z = 1.0;
  v17 = v6->static_fields;
  *(_QWORD *)&v17->_DefaultVertexOffset_k__BackingField.fields.x = 1017370378LL;
  v17->_DefaultVertexOffset_k__BackingField.fields.z = 0.0;
}


void __fastcall OutlineEffectSettings___ctor(OutlineEffectSettings_o *this, const MethodInfo *method)
{
  OutlineEffectSettings_c *v3; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v6; // x8
  __int64 v7; // d4
  float v8; // s5
  UnityEngine_Vector3_c *v9; // x8
  struct UnityEngine_Vector3_StaticFields *v10; // x9
  float v11; // s1
  struct UnityEngine_Vector3_StaticFields *v12; // x9
  float v13; // s1
  struct UnityEngine_Vector3_StaticFields *v14; // x8
  __int64 v15; // d1
  float v16; // s2

  if ( (byte_49FA777 & 1) == 0 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, method);
    byte_49FA777 = 1;
  }
  *(_OWORD *)&this->fields.thickness = xmmword_BA2A40;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_49FA79C )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, method);
    byte_49FA79C = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v3->static_fields;
  z = static_fields->_DefaultVertexScale_k__BackingField.fields.z;
  *(_QWORD *)&this->fields.vertexScale.fields.x = *(_QWORD *)&static_fields->_DefaultVertexScale_k__BackingField.fields.x;
  this->fields.vertexScale.fields.z = z;
  if ( !byte_49FA79D )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, method);
    v3 = OutlineEffectSettings_TypeInfo;
    byte_49FA79D = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->_DefaultVertexOffset_k__BackingField.fields.x;
  v8 = v6->_DefaultVertexOffset_k__BackingField.fields.z;
  *(_OWORD *)&this->fields.fullscreenUVScaleX = xmmword_BA43B0;
  this->fields.gaussianSilhouetteR = (struct UnityEngine_Color_o)xmmword_BA4600;
  this->fields.gaussianSilhouetteG = (struct UnityEngine_Color_o)xmmword_BA4530;
  this->fields.gaussianSilhouetteB = (struct UnityEngine_Color_o)xmmword_BA2E20;
  *(_QWORD *)&this->fields.vertexOffset.fields.x = v7;
  this->fields.vertexOffset.fields.z = v8;
  if ( !byte_49F9826 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9826 = 1;
  }
  v9 = UnityEngine_Vector3_TypeInfo;
  v10 = UnityEngine_Vector3_TypeInfo->static_fields;
  v11 = v10->oneVector.fields.z;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleR.fields.x = *(_QWORD *)&v10->oneVector.fields.x;
  this->fields.gaussianSilhouetteScaleR.fields.z = v11;
  v12 = v9->static_fields;
  v13 = v12->oneVector.fields.z;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleG.fields.x = *(_QWORD *)&v12->oneVector.fields.x;
  this->fields.gaussianSilhouetteScaleG.fields.z = v13;
  v14 = v9->static_fields;
  v15 = *(_QWORD *)&v14->oneVector.fields.x;
  v16 = v14->oneVector.fields.z;
  *(_OWORD *)&this->fields.gaussianBloomIntensity = xmmword_BA35B0;
  *(_QWORD *)&this->fields.gaussianBloomSigma = 0x1B40200000LL;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleB.fields.x = v15;
  this->fields.gaussianSilhouetteScaleB.fields.z = v16;
  this->fields.contrast = 0.7;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


OutlineEffectSettings_o *__fastcall OutlineEffectSettings__get_Default(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance_object; // x19
  UnityEngine_Gradient_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  OutlineEffectSettings_c *v9; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v12; // x8
  Il2CppClass *v13; // d1
  float v14; // s2
  struct OutlineEffectSettings_StaticFields *v15; // x8
  float v16; // s1
  struct OutlineEffectSettings_StaticFields *v17; // x8
  float v18; // s1
  struct OutlineEffectSettings_StaticFields *v19; // x8
  float v20; // s1
  _BOOL4 v21; // w8
  struct OutlineEffectSettings_StaticFields *v22; // x9
  float v23; // s1
  _BOOL4 v24; // w8
  struct OutlineEffectSettings_StaticFields *v25; // x9
  float v26; // s1
  struct OutlineEffectSettings_StaticFields *v27; // x8
  Il2CppClass *v28; // d4
  float v29; // s5

  if ( (byte_49FA776 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Gradient_TypeInfo, v1);
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v2);
    sub_1B64A00(&Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___, v3);
    byte_49FA776 = 1;
  }
  Instance_object = UnityEngine_ScriptableObject__CreateInstance_object_((const MethodInfo_2ED8B28 *)Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
  v5 = (UnityEngine_Gradient_o *)sub_1B64C4C(UnityEngine_Gradient_TypeInfo);
  UnityEngine_Gradient___ctor(v5, 0LL);
  if ( !Instance_object )
    sub_1B64C5C(v6, v7);
  Instance_object[1].monitor = v5;
  sub_1B649A4(&Instance_object[1].monitor);
  Instance_object[2] = (Il2CppObject)xmmword_BA2A40;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_49FA79D )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v8);
    byte_49FA79D = 1;
  }
  v9 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v9 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v9->static_fields;
  z = static_fields->_DefaultVertexOffset_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[3].monitor + 4) = *(void **)&static_fields->_DefaultVertexOffset_k__BackingField.fields.x;
  *((float *)&Instance_object[4].klass + 1) = z;
  if ( !byte_49FA79C )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v8);
    v9 = OutlineEffectSettings_TypeInfo;
    byte_49FA79C = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = OutlineEffectSettings_TypeInfo;
  }
  v12 = v9->static_fields;
  v13 = *(Il2CppClass **)&v12->_DefaultVertexScale_k__BackingField.fields.x;
  v14 = v12->_DefaultVertexScale_k__BackingField.fields.z;
  *(_OWORD *)&Instance_object[4].monitor = xmmword_BA43B0;
  Instance_object[3].klass = v13;
  *(float *)&Instance_object[3].monitor = v14;
  if ( !byte_49FA79E )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v8);
    v9 = OutlineEffectSettings_TypeInfo;
    byte_49FA79E = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = OutlineEffectSettings_TypeInfo;
  }
  v15 = v9->static_fields;
  v16 = v15->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[10].monitor + 4) = *(void **)&v15->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  *((float *)&Instance_object[11].klass + 1) = v16;
  if ( !byte_49FA79F )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v8);
    v9 = OutlineEffectSettings_TypeInfo;
    byte_49FA79F = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = OutlineEffectSettings_TypeInfo;
  }
  v17 = v9->static_fields;
  v18 = v17->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z;
  Instance_object[11].monitor = *(void **)&v17->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x;
  *(float *)&Instance_object[12].klass = v18;
  if ( !byte_49FA7A0 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v8);
    v9 = OutlineEffectSettings_TypeInfo;
    byte_49FA7A0 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = OutlineEffectSettings_TypeInfo;
  }
  v19 = v9->static_fields;
  v20 = v19->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[12].klass + 4) = *(Il2CppClass **)&v19->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x;
  *((float *)&Instance_object[12].monitor + 1) = v20;
  if ( !byte_49FA7A1 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v8);
    v9 = OutlineEffectSettings_TypeInfo;
    byte_49FA7A1 = 1;
  }
  if ( v9->_2.cctor_finished )
  {
    v21 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = OutlineEffectSettings_TypeInfo;
    v21 = byte_49FA7A1 == 0;
  }
  v22 = v9->static_fields;
  v23 = v22->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[8].monitor = *(void **)&v22->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *(float *)&Instance_object[9].klass = v23;
  if ( v21 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v8);
    v9 = OutlineEffectSettings_TypeInfo;
    byte_49FA7A1 = 1;
  }
  if ( v9->_2.cctor_finished )
  {
    v24 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = OutlineEffectSettings_TypeInfo;
    v24 = byte_49FA7A1 == 0;
  }
  v25 = v9->static_fields;
  v26 = v25->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[9].klass + 4) = *(Il2CppClass **)&v25->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *((float *)&Instance_object[9].monitor + 1) = v26;
  if ( v24 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v8);
    v9 = OutlineEffectSettings_TypeInfo;
    byte_49FA7A1 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = OutlineEffectSettings_TypeInfo;
  }
  v27 = v9->static_fields;
  v28 = *(Il2CppClass **)&v27->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  v29 = v27->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[13].klass = (Il2CppClass *)0x1B40200000LL;
  *(_OWORD *)&Instance_object[5].monitor = xmmword_BA4600;
  *(_OWORD *)&Instance_object[6].monitor = xmmword_BA4530;
  *(_OWORD *)&Instance_object[7].monitor = xmmword_BA2E20;
  *(_OWORD *)&Instance_object[13].monitor = xmmword_BA35B0;
  Instance_object[10].klass = v28;
  *(float *)&Instance_object[10].monitor = v29;
  LODWORD(Instance_object[14].monitor) = 1065353216;
  return (OutlineEffectSettings_o *)Instance_object;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteBlue(
        const MethodInfo *method)
{
  __int64 v1; // x1
  OutlineEffectSettings_c *v2; // x0
  float *p_x; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA771 & 1) == 0 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v1);
    byte_49FA771 = 1;
  }
  v2 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v2 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v2->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v4 = p_x[6];
  v5 = p_x[7];
  v6 = p_x[8];
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteGreen(
        const MethodInfo *method)
{
  __int64 v1; // x1
  OutlineEffectSettings_c *v2; // x0
  float *p_x; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA770 & 1) == 0 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v1);
    byte_49FA770 = 1;
  }
  v2 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v2 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v2->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v4 = p_x[3];
  v5 = p_x[4];
  v6 = p_x[5];
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteRed(const MethodInfo *method)
{
  __int64 v1; // x1
  OutlineEffectSettings_c *v2; // x0
  float *p_x; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA76F & 1) == 0 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v1);
    byte_49FA76F = 1;
  }
  v2 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v2 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v2->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v4 = *p_x;
  v5 = p_x[1];
  v6 = p_x[2];
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteScale(
        const MethodInfo *method)
{
  __int64 v1; // x1
  OutlineEffectSettings_c *v2; // x0
  float *p_x; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA772 & 1) == 0 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v1);
    byte_49FA772 = 1;
  }
  v2 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v2 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v2->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v4 = p_x[9];
  v5 = p_x[10];
  v6 = p_x[11];
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


UnityEngine_Gradient_o *__fastcall OutlineEffectSettings__get_DefaultGradient(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  OutlineEffectSettings_c *v5; // x0
  UnityEngine_Gradient_o *v6; // x19
  OutlineEffectSettings_c *v7; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x0
  __int64 v9; // x19
  UnityEngine_Gradient_o *defaultGradient; // x0
  __int64 v11; // x1
  float time; // w8
  struct UnityEngine_Color_o color; // q0
  __int64 v14; // x20
  float v15; // s2
  float v16; // s3
  float v17; // s2
  float v18; // s3
  __int64 v20; // [xsp+0h] [xbp-90h] BYREF
  __int64 methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_GradientColorKey_o method_8; // [xsp+10h] [xbp-80h]
  UnityEngine_GradientColorKey_o method_32; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_GradientColorKey_o method_56; // [xsp+40h] [xbp-50h]
  UnityEngine_GradientColorKey_o method_80; // [xsp+58h] [xbp-38h] BYREF
  UnityEngine_GradientAlphaKey_o v26; // 0:s0.4,4:s1.4
  UnityEngine_GradientAlphaKey_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FA775 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_GradientAlphaKey___TypeInfo, v1);
    sub_1B64A00(&UnityEngine_GradientColorKey___TypeInfo, v2);
    sub_1B64A00(&UnityEngine_Gradient_TypeInfo, v3);
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v4);
    byte_49FA775 = 1;
  }
  v5 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
  }
  if ( !v5->static_fields->defaultGradient )
  {
    v6 = (UnityEngine_Gradient_o *)sub_1B64C4C(UnityEngine_Gradient_TypeInfo);
    UnityEngine_Gradient___ctor(v6, 0LL);
    v7 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
      v7 = OutlineEffectSettings_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->defaultGradient = v6;
    sub_1B649A4(&static_fields->defaultGradient);
    v9 = sub_1B64AA8(UnityEngine_GradientColorKey___TypeInfo, 2LL);
    v28.fields.r = 1.0;
    v28.fields.g = 1.0;
    v28.fields.b = 1.0;
    v28.fields.a = 1.0;
    memset(&method_80, 0, sizeof(method_80));
    UnityEngine_GradientColorKey___ctor(&method_80, v28, 0.0, 0LL);
    if ( v9 )
    {
      method_56 = method_80;
      if ( !*(_DWORD *)(v9 + 24) )
        goto LABEL_20;
      time = method_56.fields.time;
      v29.fields.g = 1.0;
      *(struct UnityEngine_Color_o *)(v9 + 32) = method_56.fields.color;
      v29.fields.r = 1.0;
      v29.fields.b = 1.0;
      v29.fields.a = 1.0;
      *(float *)(v9 + 48) = time;
      memset(&method_32, 0, sizeof(method_32));
      UnityEngine_GradientColorKey___ctor(&method_32, v29, 1.0, 0LL);
      method_8 = method_32;
      if ( *(_DWORD *)(v9 + 24) <= 1u )
        goto LABEL_20;
      color = method_8.fields.color;
      *(float *)(v9 + 68) = method_8.fields.time;
      *(struct UnityEngine_Color_o *)(v9 + 52) = color;
      v14 = sub_1B64AA8(UnityEngine_GradientAlphaKey___TypeInfo, 2LL);
      v26.fields.alpha = 1.0;
      v26.fields.time = 0.0;
      methoda = 0LL;
      UnityEngine_GradientAlphaKey___ctor(v26, v15, v16, (const MethodInfo *)&methoda);
      if ( !v14 )
        goto LABEL_21;
      if ( !*(_DWORD *)(v14 + 24)
        || (v27.fields.time = 1.0,
            *(_QWORD *)(v14 + 32) = methoda,
            v27.fields.alpha = 1.0,
            v20 = 0LL,
            UnityEngine_GradientAlphaKey___ctor(v27, v17, v18, (const MethodInfo *)&v20),
            *(_DWORD *)(v14 + 24) <= 1u) )
      {
LABEL_20:
        sub_1B64C64(defaultGradient, v11);
      }
      *(_QWORD *)(v14 + 40) = v20;
      defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
      if ( defaultGradient )
      {
        UnityEngine_Gradient__set_colorKeys(defaultGradient, (UnityEngine_GradientColorKey_array *)v9, 0LL);
        defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
        if ( defaultGradient )
        {
          UnityEngine_Gradient__set_alphaKeys(defaultGradient, (UnityEngine_GradientAlphaKey_array *)v14, 0LL);
          v5 = OutlineEffectSettings_TypeInfo;
          goto LABEL_17;
        }
      }
    }
LABEL_21:
    sub_1B64C5C(defaultGradient, v11);
  }
LABEL_17:
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = OutlineEffectSettings_TypeInfo;
  }
  return v5->static_fields->defaultGradient;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultVertexOffset(const MethodInfo *method)
{
  __int64 v1; // x1
  OutlineEffectSettings_c *v2; // x0
  float *p_x; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA774 & 1) == 0 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v1);
    byte_49FA774 = 1;
  }
  v2 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v2 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v2->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v4 = p_x[15];
  v5 = p_x[16];
  v6 = p_x[17];
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultVertexScale(const MethodInfo *method)
{
  __int64 v1; // x1
  OutlineEffectSettings_c *v2; // x0
  float *p_x; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA773 & 1) == 0 )
  {
    sub_1B64A00(&OutlineEffectSettings_TypeInfo, v1);
    byte_49FA773 = 1;
  }
  v2 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v2 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v2->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v4 = p_x[12];
  v5 = p_x[13];
  v6 = p_x[14];
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}