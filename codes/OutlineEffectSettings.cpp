void OutlineEffectSettings___cctor(const MethodInfo *method)
{
  struct OutlineEffectSettings_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v2; // x8
  float z; // s1
  UnityEngine_Vector3_c *v4; // x9
  OutlineEffectSettings_c *v5; // x8
  struct UnityEngine_Vector3_StaticFields *v6; // x10
  struct OutlineEffectSettings_StaticFields *v7; // x11
  float v8; // s1
  struct UnityEngine_Vector3_StaticFields *v9; // x10
  struct OutlineEffectSettings_StaticFields *v10; // x11
  float v11; // s1
  struct UnityEngine_Vector3_StaticFields *v12; // x9
  struct OutlineEffectSettings_StaticFields *v13; // x10
  float v14; // s1
  struct OutlineEffectSettings_StaticFields *v15; // x9
  struct OutlineEffectSettings_StaticFields *v16; // x8

  if ( (byte_4C331AC & 1) == 0 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C331AC = 1;
  }
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  static_fields = OutlineEffectSettings_TypeInfo->static_fields;
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->zeroVector.fields.z;
  *(_QWORD *)&static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x = *(_QWORD *)&v2->zeroVector.fields.x;
  static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z = z;
  v4 = UnityEngine_Vector3_TypeInfo;
  v5 = OutlineEffectSettings_TypeInfo;
  v6 = UnityEngine_Vector3_TypeInfo->static_fields;
  v7 = OutlineEffectSettings_TypeInfo->static_fields;
  v8 = v6->zeroVector.fields.z;
  *(_QWORD *)&v7->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x = *(_QWORD *)&v6->zeroVector.fields.x;
  v7->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z = v8;
  v9 = v4->static_fields;
  v10 = v5->static_fields;
  v11 = v9->zeroVector.fields.z;
  *(_QWORD *)&v10->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x = *(_QWORD *)&v9->zeroVector.fields.x;
  v10->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z = v11;
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    v4 = UnityEngine_Vector3_TypeInfo;
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4C313D6 = 1;
  }
  v12 = v4->static_fields;
  v13 = v5->static_fields;
  v14 = v12->oneVector.fields.z;
  *(_QWORD *)&v13->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x = *(_QWORD *)&v12->oneVector.fields.x;
  v13->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z = v14;
  v15 = v5->static_fields;
  *(_QWORD *)&v15->_DefaultVertexScale_k__BackingField.fields.x = 0x3F8000003E4CCCCDLL;
  v15->_DefaultVertexScale_k__BackingField.fields.z = 1.0;
  v16 = v5->static_fields;
  *(_QWORD *)&v16->_DefaultVertexOffset_k__BackingField.fields.x = 1017370378;
  v16->_DefaultVertexOffset_k__BackingField.fields.z = 0.0;
}


void OutlineEffectSettings___ctor(OutlineEffectSettings_o *this, const MethodInfo *method)
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

  if ( (byte_4C331AB & 1) == 0 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C331AB = 1;
  }
  *(_OWORD *)&this->fields.thickness = xmmword_C0C1F0;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4C33276 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C33276 = 1;
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
  if ( !byte_4C33277 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    v3 = OutlineEffectSettings_TypeInfo;
    byte_4C33277 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->_DefaultVertexOffset_k__BackingField.fields.x;
  v8 = v6->_DefaultVertexOffset_k__BackingField.fields.z;
  *(_OWORD *)&this->fields.fullscreenUVScaleX = xmmword_C0DD00;
  this->fields.gaussianSilhouetteR = (struct UnityEngine_Color_o)xmmword_C0DFC0;
  this->fields.gaussianSilhouetteG = (struct UnityEngine_Color_o)xmmword_C0DEC0;
  this->fields.gaussianSilhouetteB = (struct UnityEngine_Color_o)xmmword_C0C610;
  *(_QWORD *)&this->fields.vertexOffset.fields.x = v7;
  this->fields.vertexOffset.fields.z = v8;
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
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
  *(_OWORD *)&this->fields.gaussianBloomIntensity = xmmword_C0CE20;
  *(_QWORD *)&this->fields.gaussianBloomSigma = 0x1B40200000LL;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleB.fields.x = v15;
  this->fields.gaussianSilhouetteScaleB.fields.z = v16;
  this->fields.contrast = 0.7;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


OutlineEffectSettings_o *OutlineEffectSettings__get_Default(const MethodInfo *method)
{
  Il2CppObject *Instance_object; // x19
  UnityEngine_Gradient_o *v2; // x21
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  OutlineEffectSettings_c *v6; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v9; // x8
  Il2CppClass *v10; // d1
  float v11; // s2
  struct OutlineEffectSettings_StaticFields *v12; // x8
  float v13; // s1
  struct OutlineEffectSettings_StaticFields *v14; // x8
  float v15; // s1
  struct OutlineEffectSettings_StaticFields *v16; // x8
  float v17; // s1
  _BOOL4 v18; // w8
  struct OutlineEffectSettings_StaticFields *v19; // x9
  float v20; // s1
  _BOOL4 v21; // w8
  struct OutlineEffectSettings_StaticFields *v22; // x9
  float v23; // s1
  struct OutlineEffectSettings_StaticFields *v24; // x8
  Il2CppClass *v25; // d4
  float v26; // s5

  if ( (byte_4C331AA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Gradient_TypeInfo);
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
    byte_4C331AA = 1;
  }
  Instance_object = UnityEngine_ScriptableObject__CreateInstance_object_((const MethodInfo_318433C *)Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
  v2 = (UnityEngine_Gradient_o *)sub_1C32E6C(UnityEngine_Gradient_TypeInfo);
  UnityEngine_Gradient___ctor(v2, 0);
  if ( !Instance_object )
    sub_1C32E7C(v3);
  Instance_object[1].monitor = v2;
  sub_1C32BC4((CGThumbnailListItem_o *)&Instance_object[1].monitor, (int32_t)v2, v4, v5);
  Instance_object[2] = (Il2CppObject)xmmword_C0C1F0;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4C33277 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C33277 = 1;
  }
  v6 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v6 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v6->static_fields;
  z = static_fields->_DefaultVertexOffset_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[3].monitor + 4) = *(void **)&static_fields->_DefaultVertexOffset_k__BackingField.fields.x;
  *((float *)&Instance_object[4].klass + 1) = z;
  if ( !byte_4C33276 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    v6 = OutlineEffectSettings_TypeInfo;
    byte_4C33276 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = OutlineEffectSettings_TypeInfo;
  }
  v9 = v6->static_fields;
  v10 = *(Il2CppClass **)&v9->_DefaultVertexScale_k__BackingField.fields.x;
  v11 = v9->_DefaultVertexScale_k__BackingField.fields.z;
  *(_OWORD *)&Instance_object[4].monitor = xmmword_C0DD00;
  Instance_object[3].klass = v10;
  *(float *)&Instance_object[3].monitor = v11;
  if ( !byte_4C33278 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    v6 = OutlineEffectSettings_TypeInfo;
    byte_4C33278 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = OutlineEffectSettings_TypeInfo;
  }
  v12 = v6->static_fields;
  v13 = v12->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[10].monitor + 4) = *(void **)&v12->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  *((float *)&Instance_object[11].klass + 1) = v13;
  if ( !byte_4C33279 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    v6 = OutlineEffectSettings_TypeInfo;
    byte_4C33279 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = OutlineEffectSettings_TypeInfo;
  }
  v14 = v6->static_fields;
  v15 = v14->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z;
  Instance_object[11].monitor = *(void **)&v14->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x;
  *(float *)&Instance_object[12].klass = v15;
  if ( !byte_4C3327A )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    v6 = OutlineEffectSettings_TypeInfo;
    byte_4C3327A = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = OutlineEffectSettings_TypeInfo;
  }
  v16 = v6->static_fields;
  v17 = v16->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[12].klass + 4) = *(Il2CppClass **)&v16->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x;
  *((float *)&Instance_object[12].monitor + 1) = v17;
  if ( !byte_4C3327B )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    v6 = OutlineEffectSettings_TypeInfo;
    byte_4C3327B = 1;
  }
  if ( v6->_2.cctor_finished )
  {
    v18 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = OutlineEffectSettings_TypeInfo;
    v18 = byte_4C3327B == 0;
  }
  v19 = v6->static_fields;
  v20 = v19->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[8].monitor = *(void **)&v19->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *(float *)&Instance_object[9].klass = v20;
  if ( v18 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    v6 = OutlineEffectSettings_TypeInfo;
    byte_4C3327B = 1;
  }
  if ( v6->_2.cctor_finished )
  {
    v21 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = OutlineEffectSettings_TypeInfo;
    v21 = byte_4C3327B == 0;
  }
  v22 = v6->static_fields;
  v23 = v22->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[9].klass + 4) = *(Il2CppClass **)&v22->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *((float *)&Instance_object[9].monitor + 1) = v23;
  if ( v21 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    v6 = OutlineEffectSettings_TypeInfo;
    byte_4C3327B = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = OutlineEffectSettings_TypeInfo;
  }
  v24 = v6->static_fields;
  v25 = *(Il2CppClass **)&v24->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  v26 = v24->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[13].klass = (Il2CppClass *)0x1B40200000LL;
  *(_OWORD *)&Instance_object[5].monitor = xmmword_C0DFC0;
  *(_OWORD *)&Instance_object[6].monitor = xmmword_C0DEC0;
  *(_OWORD *)&Instance_object[7].monitor = xmmword_C0C610;
  *(_OWORD *)&Instance_object[13].monitor = xmmword_C0CE20;
  Instance_object[10].klass = v25;
  *(float *)&Instance_object[10].monitor = v26;
  LODWORD(Instance_object[14].monitor) = 1065353216;
  return (OutlineEffectSettings_o *)Instance_object;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteBlue(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C331A5 & 1) == 0 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C331A5 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v1->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v3 = p_x[6];
  v4 = p_x[7];
  v5 = p_x[8];
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteGreen(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C331A4 & 1) == 0 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C331A4 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v1->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v3 = p_x[3];
  v4 = p_x[4];
  v5 = p_x[5];
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteRed(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C331A3 & 1) == 0 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C331A3 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v1->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v3 = *p_x;
  v4 = p_x[1];
  v5 = p_x[2];
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteScale(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C331A6 & 1) == 0 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C331A6 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v1->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v3 = p_x[9];
  v4 = p_x[10];
  v5 = p_x[11];
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


UnityEngine_Gradient_o *OutlineEffectSettings__get_DefaultGradient(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  UnityEngine_Gradient_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  OutlineEffectSettings_c *v5; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x0
  __int64 v7; // x19
  UnityEngine_Gradient_o *defaultGradient; // x0
  float time; // w8
  struct UnityEngine_Color_o color; // q0
  __int64 v11; // x20
  float v12; // s2
  float v13; // s3
  float v14; // s2
  float v15; // s3
  __int64 v17; // [xsp+0h] [xbp-90h] BYREF
  __int64 methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_GradientColorKey_o method_8; // [xsp+10h] [xbp-80h]
  UnityEngine_GradientColorKey_o method_32; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_GradientColorKey_o method_56; // [xsp+40h] [xbp-50h]
  UnityEngine_GradientColorKey_o method_80; // [xsp+58h] [xbp-38h] BYREF
  UnityEngine_GradientAlphaKey_o v23; // 0:s0.4,4:s1.4
  UnityEngine_GradientAlphaKey_o v24; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C331A9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_GradientAlphaKey___TypeInfo);
    sub_1C32C20(&UnityEngine_GradientColorKey___TypeInfo);
    sub_1C32C20(&UnityEngine_Gradient_TypeInfo);
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C331A9 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  if ( !v1->static_fields->defaultGradient )
  {
    v2 = (UnityEngine_Gradient_o *)sub_1C32E6C(UnityEngine_Gradient_TypeInfo);
    UnityEngine_Gradient___ctor(v2, 0);
    v5 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
      v5 = OutlineEffectSettings_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->defaultGradient = v2;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->defaultGradient, (int32_t)v2, v3, v4);
    v7 = sub_1C32CC8(UnityEngine_GradientColorKey___TypeInfo, 2);
    v25.fields.r = 1.0;
    v25.fields.g = 1.0;
    v25.fields.b = 1.0;
    v25.fields.a = 1.0;
    memset(&method_80, 0, sizeof(method_80));
    UnityEngine_GradientColorKey___ctor(&method_80, v25, 0.0, 0);
    if ( v7 )
    {
      method_56 = method_80;
      if ( !*(_DWORD *)(v7 + 24) )
        goto LABEL_20;
      time = method_56.fields.time;
      v26.fields.g = 1.0;
      *(struct UnityEngine_Color_o *)(v7 + 32) = method_56.fields.color;
      v26.fields.r = 1.0;
      v26.fields.b = 1.0;
      v26.fields.a = 1.0;
      *(float *)(v7 + 48) = time;
      memset(&method_32, 0, sizeof(method_32));
      UnityEngine_GradientColorKey___ctor(&method_32, v26, 1.0, 0);
      method_8 = method_32;
      if ( *(_DWORD *)(v7 + 24) <= 1u )
        goto LABEL_20;
      color = method_8.fields.color;
      *(float *)(v7 + 68) = method_8.fields.time;
      *(struct UnityEngine_Color_o *)(v7 + 52) = color;
      v11 = sub_1C32CC8(UnityEngine_GradientAlphaKey___TypeInfo, 2);
      v23.fields.alpha = 1.0;
      v23.fields.time = 0.0;
      methoda = 0;
      UnityEngine_GradientAlphaKey___ctor(v23, v12, v13, (const MethodInfo *)&methoda);
      if ( !v11 )
        goto LABEL_21;
      if ( !*(_DWORD *)(v11 + 24)
        || (v24.fields.time = 1.0,
            *(_QWORD *)(v11 + 32) = methoda,
            v24.fields.alpha = 1.0,
            v17 = 0,
            UnityEngine_GradientAlphaKey___ctor(v24, v14, v15, (const MethodInfo *)&v17),
            *(_DWORD *)(v11 + 24) <= 1u) )
      {
LABEL_20:
        sub_1C32E84(defaultGradient);
      }
      *(_QWORD *)(v11 + 40) = v17;
      defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
      if ( defaultGradient )
      {
        UnityEngine_Gradient__set_colorKeys(defaultGradient, (UnityEngine_GradientColorKey_array *)v7, 0);
        defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
        if ( defaultGradient )
        {
          UnityEngine_Gradient__set_alphaKeys(defaultGradient, (UnityEngine_GradientAlphaKey_array *)v11, 0);
          v1 = OutlineEffectSettings_TypeInfo;
          goto LABEL_17;
        }
      }
    }
LABEL_21:
    sub_1C32E7C(defaultGradient);
  }
LABEL_17:
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  return v1->static_fields->defaultGradient;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultVertexOffset(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C331A8 & 1) == 0 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C331A8 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v1->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v3 = p_x[15];
  v4 = p_x[16];
  v5 = p_x[17];
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultVertexScale(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C331A7 & 1) == 0 )
  {
    sub_1C32C20(&OutlineEffectSettings_TypeInfo);
    byte_4C331A7 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v1->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v3 = p_x[12];
  v4 = p_x[13];
  v5 = p_x[14];
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}