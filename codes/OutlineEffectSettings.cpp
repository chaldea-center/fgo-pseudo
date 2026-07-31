void OutlineEffectSettings___cctor(const MethodInfo *method)
{
  int v1; // w12
  struct OutlineEffectSettings_StaticFields *static_fields; // x10
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
  struct OutlineEffectSettings_StaticFields *v16; // x10
  struct OutlineEffectSettings_StaticFields *v17; // x8

  if ( (byte_5933C97 & 1) == 0 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933C97 = 1;
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v1 = (unsigned __int8)byte_5931945;
  static_fields = OutlineEffectSettings_TypeInfo->static_fields;
  v3 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v3->zeroVector.fields.z;
  *(_QWORD *)&static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x = *(_QWORD *)&v3->zeroVector.fields.x;
  v5 = UnityEngine_Vector3_TypeInfo;
  static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z = z;
  v6 = OutlineEffectSettings_TypeInfo;
  v7 = v5->static_fields;
  v8 = OutlineEffectSettings_TypeInfo->static_fields;
  v9 = v7->zeroVector.fields.z;
  *(_QWORD *)&v8->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x = *(_QWORD *)&v7->zeroVector.fields.x;
  v8->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z = v9;
  v10 = v5->static_fields;
  v11 = v6->static_fields;
  v12 = v10->zeroVector.fields.z;
  *(_QWORD *)&v11->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x = *(_QWORD *)&v10->zeroVector.fields.x;
  v11->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z = v12;
  if ( !v1 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    v5 = UnityEngine_Vector3_TypeInfo;
    v6 = OutlineEffectSettings_TypeInfo;
    byte_5931945 = 1;
  }
  v13 = v5->static_fields;
  v14 = v6->static_fields;
  v15 = v13->oneVector.fields.z;
  *(_QWORD *)&v14->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x = *(_QWORD *)&v13->oneVector.fields.x;
  v14->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z = v15;
  v16 = v6->static_fields;
  v16->_DefaultVertexScale_k__BackingField.fields.z = 1.0;
  *(_QWORD *)&v16->_DefaultVertexScale_k__BackingField.fields.x = 0x3F8000003E4CCCCDLL;
  v17 = v6->static_fields;
  *(_QWORD *)&v17->_DefaultVertexOffset_k__BackingField.fields.x = 1017370378;
  v17->_DefaultVertexOffset_k__BackingField.fields.z = 0.0;
}


void OutlineEffectSettings___ctor(OutlineEffectSettings_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  OutlineEffectSettings_c *v4; // x0
  int v5; // w8
  OutlineEffectSettings_c *v6; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  int v8; // w9
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v10; // x9
  float v11; // s2
  __int64 v12; // d3
  int v13; // w8
  UnityEngine_Vector3_c *v14; // x8
  struct UnityEngine_Vector3_StaticFields *v15; // x9
  float v16; // s1
  struct UnityEngine_Vector3_StaticFields *v17; // x9
  float v18; // s1
  struct UnityEngine_Vector3_StaticFields *v19; // x8
  __int64 v20; // d0
  float v21; // s1

  if ( (byte_5933C96 & 1) == 0 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933C96 = 1;
  }
  v4 = OutlineEffectSettings_TypeInfo;
  v5 = *(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&this->fields.thickness = xmmword_E932F0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  if ( !byte_5933D3E )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933D3E = 1;
  }
  v6 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, method, v2);
    v6 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v6->static_fields;
  v8 = (unsigned __int8)byte_5933D3F;
  z = static_fields->_DefaultVertexScale_k__BackingField.fields.z;
  *(_QWORD *)&this->fields.vertexScale.fields.x = *(_QWORD *)&static_fields->_DefaultVertexScale_k__BackingField.fields.x;
  this->fields.vertexScale.fields.z = z;
  if ( !v8 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    v6 = OutlineEffectSettings_TypeInfo;
    byte_5933D3F = 1;
  }
  if ( !*(&v6->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v6, method, v2);
    v6 = OutlineEffectSettings_TypeInfo;
  }
  v10 = v6->static_fields;
  v11 = v10->_DefaultVertexOffset_k__BackingField.fields.z;
  v12 = *(_QWORD *)&v10->_DefaultVertexOffset_k__BackingField.fields.x;
  *(_OWORD *)&this->fields.fullscreenUVScaleX = xmmword_E92B60;
  this->fields.gaussianSilhouetteR = (struct UnityEngine_Color_o)xmmword_E94AB0;
  v13 = (unsigned __int8)byte_5931945;
  *(_QWORD *)&this->fields.vertexOffset.fields.x = v12;
  this->fields.vertexOffset.fields.z = v11;
  this->fields.gaussianSilhouetteG = (struct UnityEngine_Color_o)xmmword_E93C30;
  this->fields.gaussianSilhouetteB = (struct UnityEngine_Color_o)xmmword_E92B70;
  if ( !v13 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  v14 = UnityEngine_Vector3_TypeInfo;
  v15 = UnityEngine_Vector3_TypeInfo->static_fields;
  v16 = v15->oneVector.fields.z;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleR.fields.x = *(_QWORD *)&v15->oneVector.fields.x;
  this->fields.gaussianSilhouetteScaleR.fields.z = v16;
  v17 = v14->static_fields;
  v18 = v17->oneVector.fields.z;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleG.fields.x = *(_QWORD *)&v17->oneVector.fields.x;
  this->fields.gaussianSilhouetteScaleG.fields.z = v18;
  v19 = v14->static_fields;
  v20 = *(_QWORD *)&v19->oneVector.fields.x;
  v21 = v19->oneVector.fields.z;
  *(_QWORD *)&this->fields.gaussianBloomSigma = 0x1B40200000LL;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleB.fields.x = v20;
  this->fields.contrast = 0.7;
  this->fields.gaussianSilhouetteScaleB.fields.z = v21;
  *(_OWORD *)&this->fields.gaussianBloomIntensity = xmmword_E93300;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


OutlineEffectSettings_o *OutlineEffectSettings__get_Default(const MethodInfo *method)
{
  Il2CppObject *Instance_object; // x19
  UnityEngine_Gradient_o *v2; // x21
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  OutlineEffectSettings_c *v13; // x0
  int v14; // w8
  OutlineEffectSettings_c *v15; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  int v17; // w9
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v19; // x8
  Il2CppClass *v20; // d0
  float v21; // s1
  struct OutlineEffectSettings_StaticFields *v22; // x8
  int v23; // w9
  float v24; // s1
  struct OutlineEffectSettings_StaticFields *v25; // x8
  int v26; // w9
  float v27; // s1
  struct OutlineEffectSettings_StaticFields *v28; // x8
  int v29; // w9
  float v30; // s1
  _BOOL4 v31; // w8
  struct OutlineEffectSettings_StaticFields *v32; // x9
  float v33; // s1
  _BOOL4 v34; // w8
  struct OutlineEffectSettings_StaticFields *v35; // x9
  float v36; // s1
  struct OutlineEffectSettings_StaticFields *v37; // x8
  OutlineEffectSettings_o *result; // x0
  Il2CppClass *v39; // d1
  float v40; // s2

  if ( (byte_5933C95 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Gradient_TypeInfo);
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
    byte_5933C95 = 1;
  }
  Instance_object = UnityEngine_ScriptableObject__CreateInstance_object_((const MethodInfo_39524D0 *)Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
  v2 = (UnityEngine_Gradient_o *)sub_21FFEBC(UnityEngine_Gradient_TypeInfo);
  UnityEngine_Gradient___ctor(v2, 0);
  if ( !Instance_object )
    sub_21FFECC(v3, v4);
  Instance_object[1].monitor = v2;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&Instance_object[1].monitor, (int32_t)v2, v5, v6, v7, v8, v9, v10);
  v13 = OutlineEffectSettings_TypeInfo;
  v14 = *(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1);
  Instance_object[2] = (Il2CppObject)xmmword_E932F0;
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(v13, v11, v12);
  if ( !byte_5933D3F )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933D3F = 1;
  }
  v15 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v11, v12);
    v15 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v15->static_fields;
  v17 = (unsigned __int8)byte_5933D3E;
  z = static_fields->_DefaultVertexOffset_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[3].monitor + 4) = *(void **)&static_fields->_DefaultVertexOffset_k__BackingField.fields.x;
  *((float *)&Instance_object[4].klass + 1) = z;
  if ( !v17 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    v15 = OutlineEffectSettings_TypeInfo;
    byte_5933D3E = 1;
  }
  if ( !*(&v15->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v15, v11, v12);
    v15 = OutlineEffectSettings_TypeInfo;
  }
  v19 = v15->static_fields;
  v20 = *(Il2CppClass **)&v19->_DefaultVertexScale_k__BackingField.fields.x;
  v21 = v19->_DefaultVertexScale_k__BackingField.fields.z;
  LODWORD(v19) = (unsigned __int8)byte_5933D40;
  *(_OWORD *)&Instance_object[4].monitor = xmmword_E92B60;
  Instance_object[3].klass = v20;
  *(float *)&Instance_object[3].monitor = v21;
  if ( !(_DWORD)v19 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    v15 = OutlineEffectSettings_TypeInfo;
    byte_5933D40 = 1;
  }
  if ( !*(&v15->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v15, v11, v12);
    v15 = OutlineEffectSettings_TypeInfo;
  }
  v22 = v15->static_fields;
  v23 = (unsigned __int8)byte_5933D41;
  v24 = v22->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[10].monitor + 4) = *(void **)&v22->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  *((float *)&Instance_object[11].klass + 1) = v24;
  if ( !v23 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    v15 = OutlineEffectSettings_TypeInfo;
    byte_5933D41 = 1;
  }
  if ( !*(&v15->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v15, v11, v12);
    v15 = OutlineEffectSettings_TypeInfo;
  }
  v25 = v15->static_fields;
  v26 = (unsigned __int8)byte_5933D42;
  v27 = v25->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z;
  Instance_object[11].monitor = *(void **)&v25->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x;
  *(float *)&Instance_object[12].klass = v27;
  if ( !v26 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    v15 = OutlineEffectSettings_TypeInfo;
    byte_5933D42 = 1;
  }
  if ( !*(&v15->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v15, v11, v12);
    v15 = OutlineEffectSettings_TypeInfo;
  }
  v28 = v15->static_fields;
  v29 = (unsigned __int8)byte_5933D43;
  v30 = v28->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[12].klass + 4) = *(Il2CppClass **)&v28->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x;
  *((float *)&Instance_object[12].monitor + 1) = v30;
  if ( !v29 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    v15 = OutlineEffectSettings_TypeInfo;
    byte_5933D43 = 1;
  }
  if ( *(&v15->_2.cctor_finished + 1) )
  {
    v31 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v15, v11, v12);
    v15 = OutlineEffectSettings_TypeInfo;
    v31 = byte_5933D43 == 0;
  }
  v32 = v15->static_fields;
  v33 = v32->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[8].monitor = *(void **)&v32->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *(float *)&Instance_object[9].klass = v33;
  if ( v31 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    v15 = OutlineEffectSettings_TypeInfo;
    byte_5933D43 = 1;
  }
  if ( *(&v15->_2.cctor_finished + 1) )
  {
    v34 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v15, v11, v12);
    v15 = OutlineEffectSettings_TypeInfo;
    v34 = byte_5933D43 == 0;
  }
  v35 = v15->static_fields;
  v36 = v35->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[9].klass + 4) = *(Il2CppClass **)&v35->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *((float *)&Instance_object[9].monitor + 1) = v36;
  if ( v34 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    v15 = OutlineEffectSettings_TypeInfo;
    byte_5933D43 = 1;
  }
  if ( !*(&v15->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v15, v11, v12);
    v15 = OutlineEffectSettings_TypeInfo;
  }
  v37 = v15->static_fields;
  result = (OutlineEffectSettings_o *)Instance_object;
  v39 = *(Il2CppClass **)&v37->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  v40 = v37->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  *(_OWORD *)&Instance_object[5].monitor = xmmword_E94AB0;
  Instance_object[13].klass = (Il2CppClass *)0x1B40200000LL;
  Instance_object[10].klass = v39;
  *(_OWORD *)&Instance_object[6].monitor = xmmword_E93C30;
  *(float *)&Instance_object[10].monitor = v40;
  *(_OWORD *)&Instance_object[7].monitor = xmmword_E92B70;
  LODWORD(Instance_object[14].monitor) = 1065353216;
  *(_OWORD *)&Instance_object[13].monitor = xmmword_E93300;
  return result;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteBlue(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933C90 & 1) == 0 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933C90 = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1, v2);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v3->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v5 = p_x[6];
  v6 = p_x[7];
  v7 = p_x[8];
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteGreen(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933C8F & 1) == 0 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933C8F = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1, v2);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v3->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v5 = p_x[3];
  v6 = p_x[4];
  v7 = p_x[5];
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteRed(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933C8E & 1) == 0 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933C8E = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1, v2);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v3->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v5 = *p_x;
  v6 = p_x[1];
  v7 = p_x[2];
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteScale(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933C91 & 1) == 0 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933C91 = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1, v2);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v3->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v5 = p_x[9];
  v6 = p_x[10];
  v7 = p_x[11];
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Gradient_o *OutlineEffectSettings__get_DefaultGradient(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  UnityEngine_Gradient_o *v4; // x19
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  OutlineEffectSettings_c *v12; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x0
  __int64 v14; // x0
  __int64 v15; // x19
  UnityEngine_Gradient_o *defaultGradient; // x0
  __int64 v17; // x1
  int parameters; // w8
  __int128 v19; // q0
  __int64 v20; // x0
  __int64 v21; // x20
  float v22; // s2
  float v23; // s3
  float v24; // s2
  float v25; // s3
  __int64 v27; // [xsp+0h] [xbp-60h] BYREF
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_GradientAlphaKey_o v29; // 0:s0.4,4:s1.4
  UnityEngine_GradientAlphaKey_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5933C94 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_GradientAlphaKey___TypeInfo);
    sub_21FFC50(&UnityEngine_GradientColorKey___TypeInfo);
    sub_21FFC50(&UnityEngine_Gradient_TypeInfo);
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933C94 = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1, v2);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  if ( !v3->static_fields->defaultGradient )
  {
    v4 = (UnityEngine_Gradient_o *)sub_21FFEBC(UnityEngine_Gradient_TypeInfo);
    UnityEngine_Gradient___ctor(v4, 0);
    v12 = OutlineEffectSettings_TypeInfo;
    if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v5, v6);
      v12 = OutlineEffectSettings_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->defaultGradient = v4;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->defaultGradient,
      (int32_t)v4,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v14 = sub_21FFD10(UnityEngine_GradientColorKey___TypeInfo, 2);
    v31.fields.r = 1.0;
    v15 = v14;
    v31.fields.g = 1.0;
    v31.fields.b = 1.0;
    v31.fields.a = 1.0;
    memset(&methoda.klass, 0, 20);
    UnityEngine_GradientColorKey___ctor((UnityEngine_GradientColorKey_o *)&methoda.klass, v31, 0.0, 0);
    if ( v15 )
    {
      if ( !*(_DWORD *)(v15 + 24) )
        goto LABEL_20;
      parameters = (int)methoda.parameters;
      v32.fields.g = 1.0;
      v32.fields.b = 1.0;
      v32.fields.a = 1.0;
      *(_OWORD *)(v15 + 32) = *(_OWORD *)&methoda.klass;
      v32.fields.r = 1.0;
      *(_DWORD *)(v15 + 48) = parameters;
      memset(&methoda.virtualMethodPointer, 0, 20);
      UnityEngine_GradientColorKey___ctor((UnityEngine_GradientColorKey_o *)&methoda.virtualMethodPointer, v32, 1.0, 0);
      if ( (*(_DWORD *)(v15 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_20;
      v19 = *(_OWORD *)&methoda.virtualMethodPointer;
      *(_DWORD *)(v15 + 68) = methoda.name;
      *(_OWORD *)(v15 + 52) = v19;
      v20 = sub_21FFD10(UnityEngine_GradientAlphaKey___TypeInfo, 2);
      v29.fields.time = 0.0;
      v29.fields.alpha = 1.0;
      v21 = v20;
      methoda.methodPointer = 0;
      UnityEngine_GradientAlphaKey___ctor(v29, v22, v23, &methoda);
      if ( !v21 )
        goto LABEL_21;
      if ( !*(_DWORD *)(v21 + 24)
        || (v30.fields.time = 1.0,
            *(_QWORD *)(v21 + 32) = methoda.methodPointer,
            v30.fields.alpha = 1.0,
            v27 = 0,
            UnityEngine_GradientAlphaKey___ctor(v30, v24, v25, (const MethodInfo *)&v27),
            (*(_DWORD *)(v21 + 24) & 0xFFFFFFFE) == 0) )
      {
LABEL_20:
        sub_21FFED4(defaultGradient);
      }
      *(_QWORD *)(v21 + 40) = v27;
      defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
      if ( defaultGradient )
      {
        UnityEngine_Gradient__set_colorKeys(defaultGradient, (UnityEngine_GradientColorKey_array *)v15, 0);
        defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
        if ( defaultGradient )
        {
          UnityEngine_Gradient__set_alphaKeys(defaultGradient, (UnityEngine_GradientAlphaKey_array *)v21, 0);
          v3 = OutlineEffectSettings_TypeInfo;
          goto LABEL_17;
        }
      }
    }
LABEL_21:
    sub_21FFECC(defaultGradient, v17);
  }
LABEL_17:
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  return v3->static_fields->defaultGradient;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultVertexOffset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933C93 & 1) == 0 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933C93 = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1, v2);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v3->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v5 = p_x[15];
  v6 = p_x[16];
  v7 = p_x[17];
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector3_o OutlineEffectSettings__get_DefaultVertexScale(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933C92 & 1) == 0 )
  {
    sub_21FFC50(&OutlineEffectSettings_TypeInfo);
    byte_5933C92 = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1, v2);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  p_x = &v3->static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  v5 = p_x[12];
  v6 = p_x[13];
  v7 = p_x[14];
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}