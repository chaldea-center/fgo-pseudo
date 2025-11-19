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

  if ( (byte_4CB1A6C & 1) == 0 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1A6C = 1;
  }
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
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
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    v4 = UnityEngine_Vector3_TypeInfo;
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4CAFC0E = 1;
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

  if ( (byte_4CB1A6B & 1) == 0 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1A6B = 1;
  }
  *(_OWORD *)&this->fields.thickness = xmmword_CEBAB0;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4CB1B36 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1B36 = 1;
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
  if ( !byte_4CB1B37 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    v3 = OutlineEffectSettings_TypeInfo;
    byte_4CB1B37 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->_DefaultVertexOffset_k__BackingField.fields.x;
  v8 = v6->_DefaultVertexOffset_k__BackingField.fields.z;
  *(_OWORD *)&this->fields.fullscreenUVScaleX = xmmword_CED5B0;
  this->fields.gaussianSilhouetteR = (struct UnityEngine_Color_o)xmmword_CED870;
  this->fields.gaussianSilhouetteG = (struct UnityEngine_Color_o)xmmword_CED770;
  this->fields.gaussianSilhouetteB = (struct UnityEngine_Color_o)xmmword_CEBED0;
  *(_QWORD *)&this->fields.vertexOffset.fields.x = v7;
  this->fields.vertexOffset.fields.z = v8;
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
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
  *(_OWORD *)&this->fields.gaussianBloomIntensity = xmmword_CEC6D0;
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
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  OutlineEffectSettings_c *v7; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v10; // x8
  Il2CppClass *v11; // d1
  float v12; // s2
  struct OutlineEffectSettings_StaticFields *v13; // x8
  float v14; // s1
  struct OutlineEffectSettings_StaticFields *v15; // x8
  float v16; // s1
  struct OutlineEffectSettings_StaticFields *v17; // x8
  float v18; // s1
  _BOOL4 v19; // w8
  struct OutlineEffectSettings_StaticFields *v20; // x9
  float v21; // s1
  _BOOL4 v22; // w8
  struct OutlineEffectSettings_StaticFields *v23; // x9
  float v24; // s1
  struct OutlineEffectSettings_StaticFields *v25; // x8
  Il2CppClass *v26; // d4
  float v27; // s5

  if ( (byte_4CB1A6A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Gradient_TypeInfo);
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
    byte_4CB1A6A = 1;
  }
  Instance_object = UnityEngine_ScriptableObject__CreateInstance_object_((const MethodInfo_31E2D58 *)Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
  v2 = (UnityEngine_Gradient_o *)sub_1C6BC54(UnityEngine_Gradient_TypeInfo);
  UnityEngine_Gradient___ctor(v2, 0);
  if ( !Instance_object )
    sub_1C6BC60(v3, v4);
  Instance_object[1].monitor = v2;
  sub_1C6B9AC((CGThumbnailListItem_o *)&Instance_object[1].monitor, (int32_t)v2, v5, v6);
  Instance_object[2] = (Il2CppObject)xmmword_CEBAB0;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4CB1B37 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1B37 = 1;
  }
  v7 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v7 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v7->static_fields;
  z = static_fields->_DefaultVertexOffset_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[3].monitor + 4) = *(void **)&static_fields->_DefaultVertexOffset_k__BackingField.fields.x;
  *((float *)&Instance_object[4].klass + 1) = z;
  if ( !byte_4CB1B36 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    v7 = OutlineEffectSettings_TypeInfo;
    byte_4CB1B36 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = OutlineEffectSettings_TypeInfo;
  }
  v10 = v7->static_fields;
  v11 = *(Il2CppClass **)&v10->_DefaultVertexScale_k__BackingField.fields.x;
  v12 = v10->_DefaultVertexScale_k__BackingField.fields.z;
  *(_OWORD *)&Instance_object[4].monitor = xmmword_CED5B0;
  Instance_object[3].klass = v11;
  *(float *)&Instance_object[3].monitor = v12;
  if ( !byte_4CB1B38 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    v7 = OutlineEffectSettings_TypeInfo;
    byte_4CB1B38 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = OutlineEffectSettings_TypeInfo;
  }
  v13 = v7->static_fields;
  v14 = v13->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[10].monitor + 4) = *(void **)&v13->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  *((float *)&Instance_object[11].klass + 1) = v14;
  if ( !byte_4CB1B39 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    v7 = OutlineEffectSettings_TypeInfo;
    byte_4CB1B39 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = OutlineEffectSettings_TypeInfo;
  }
  v15 = v7->static_fields;
  v16 = v15->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z;
  Instance_object[11].monitor = *(void **)&v15->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x;
  *(float *)&Instance_object[12].klass = v16;
  if ( !byte_4CB1B3A )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    v7 = OutlineEffectSettings_TypeInfo;
    byte_4CB1B3A = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = OutlineEffectSettings_TypeInfo;
  }
  v17 = v7->static_fields;
  v18 = v17->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[12].klass + 4) = *(Il2CppClass **)&v17->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x;
  *((float *)&Instance_object[12].monitor + 1) = v18;
  if ( !byte_4CB1B3B )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    v7 = OutlineEffectSettings_TypeInfo;
    byte_4CB1B3B = 1;
  }
  if ( v7->_2.cctor_finished )
  {
    v19 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = OutlineEffectSettings_TypeInfo;
    v19 = byte_4CB1B3B == 0;
  }
  v20 = v7->static_fields;
  v21 = v20->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[8].monitor = *(void **)&v20->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *(float *)&Instance_object[9].klass = v21;
  if ( v19 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    v7 = OutlineEffectSettings_TypeInfo;
    byte_4CB1B3B = 1;
  }
  if ( v7->_2.cctor_finished )
  {
    v22 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = OutlineEffectSettings_TypeInfo;
    v22 = byte_4CB1B3B == 0;
  }
  v23 = v7->static_fields;
  v24 = v23->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[9].klass + 4) = *(Il2CppClass **)&v23->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *((float *)&Instance_object[9].monitor + 1) = v24;
  if ( v22 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    v7 = OutlineEffectSettings_TypeInfo;
    byte_4CB1B3B = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = OutlineEffectSettings_TypeInfo;
  }
  v25 = v7->static_fields;
  v26 = *(Il2CppClass **)&v25->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  v27 = v25->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[13].klass = (Il2CppClass *)0x1B40200000LL;
  *(_OWORD *)&Instance_object[5].monitor = xmmword_CED870;
  *(_OWORD *)&Instance_object[6].monitor = xmmword_CED770;
  *(_OWORD *)&Instance_object[7].monitor = xmmword_CEBED0;
  *(_OWORD *)&Instance_object[13].monitor = xmmword_CEC6D0;
  Instance_object[10].klass = v26;
  *(float *)&Instance_object[10].monitor = v27;
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

  if ( (byte_4CB1A65 & 1) == 0 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1A65 = 1;
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

  if ( (byte_4CB1A64 & 1) == 0 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1A64 = 1;
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

  if ( (byte_4CB1A63 & 1) == 0 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1A63 = 1;
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

  if ( (byte_4CB1A66 & 1) == 0 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1A66 = 1;
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
  __int64 v9; // x1
  float time; // w8
  struct UnityEngine_Color_o color; // q0
  __int64 v12; // x20
  float v13; // s2
  float v14; // s3
  float v15; // s2
  float v16; // s3
  __int64 v18; // [xsp+0h] [xbp-90h] BYREF
  __int64 methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_GradientColorKey_o method_8; // [xsp+10h] [xbp-80h]
  UnityEngine_GradientColorKey_o method_32; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_GradientColorKey_o method_56; // [xsp+40h] [xbp-50h]
  UnityEngine_GradientColorKey_o method_80; // [xsp+58h] [xbp-38h] BYREF
  UnityEngine_GradientAlphaKey_o v24; // 0:s0.4,4:s1.4
  UnityEngine_GradientAlphaKey_o v25; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB1A69 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_GradientAlphaKey___TypeInfo);
    sub_1C6BA08(&UnityEngine_GradientColorKey___TypeInfo);
    sub_1C6BA08(&UnityEngine_Gradient_TypeInfo);
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1A69 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  if ( !v1->static_fields->defaultGradient )
  {
    v2 = (UnityEngine_Gradient_o *)sub_1C6BC54(UnityEngine_Gradient_TypeInfo);
    UnityEngine_Gradient___ctor(v2, 0);
    v5 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
      v5 = OutlineEffectSettings_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->defaultGradient = v2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->defaultGradient, (int32_t)v2, v3, v4);
    v7 = sub_1C6BAB0(UnityEngine_GradientColorKey___TypeInfo, 2);
    v26.fields.r = 1.0;
    v26.fields.g = 1.0;
    v26.fields.b = 1.0;
    v26.fields.a = 1.0;
    memset(&method_80, 0, sizeof(method_80));
    UnityEngine_GradientColorKey___ctor(&method_80, v26, 0.0, 0);
    if ( v7 )
    {
      method_56 = method_80;
      if ( !*(_DWORD *)(v7 + 24) )
        goto LABEL_20;
      time = method_56.fields.time;
      v27.fields.g = 1.0;
      *(struct UnityEngine_Color_o *)(v7 + 32) = method_56.fields.color;
      v27.fields.r = 1.0;
      v27.fields.b = 1.0;
      v27.fields.a = 1.0;
      *(float *)(v7 + 48) = time;
      memset(&method_32, 0, sizeof(method_32));
      UnityEngine_GradientColorKey___ctor(&method_32, v27, 1.0, 0);
      method_8 = method_32;
      if ( *(_DWORD *)(v7 + 24) <= 1u )
        goto LABEL_20;
      color = method_8.fields.color;
      *(float *)(v7 + 68) = method_8.fields.time;
      *(struct UnityEngine_Color_o *)(v7 + 52) = color;
      v12 = sub_1C6BAB0(UnityEngine_GradientAlphaKey___TypeInfo, 2);
      v24.fields.alpha = 1.0;
      v24.fields.time = 0.0;
      methoda = 0;
      UnityEngine_GradientAlphaKey___ctor(v24, v13, v14, (const MethodInfo *)&methoda);
      if ( !v12 )
        goto LABEL_21;
      if ( !*(_DWORD *)(v12 + 24)
        || (v25.fields.time = 1.0,
            *(_QWORD *)(v12 + 32) = methoda,
            v25.fields.alpha = 1.0,
            v18 = 0,
            UnityEngine_GradientAlphaKey___ctor(v25, v15, v16, (const MethodInfo *)&v18),
            *(_DWORD *)(v12 + 24) <= 1u) )
      {
LABEL_20:
        sub_1C6BC68(defaultGradient);
      }
      *(_QWORD *)(v12 + 40) = v18;
      defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
      if ( defaultGradient )
      {
        UnityEngine_Gradient__set_colorKeys(defaultGradient, (UnityEngine_GradientColorKey_array *)v7, 0);
        defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
        if ( defaultGradient )
        {
          UnityEngine_Gradient__set_alphaKeys(defaultGradient, (UnityEngine_GradientAlphaKey_array *)v12, 0);
          v1 = OutlineEffectSettings_TypeInfo;
          goto LABEL_17;
        }
      }
    }
LABEL_21:
    sub_1C6BC60(defaultGradient, v9);
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

  if ( (byte_4CB1A68 & 1) == 0 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1A68 = 1;
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

  if ( (byte_4CB1A67 & 1) == 0 )
  {
    sub_1C6BA08(&OutlineEffectSettings_TypeInfo);
    byte_4CB1A67 = 1;
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