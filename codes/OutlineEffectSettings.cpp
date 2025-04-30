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

  if ( (byte_4A49DC6 & 1) == 0 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v1);
    byte_4A49DC6 = 1;
  }
  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v1);
    byte_4A487E1 = 1;
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
  if ( !byte_4A487E6 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v1);
    v5 = UnityEngine_Vector3_TypeInfo;
    v6 = OutlineEffectSettings_TypeInfo;
    byte_4A487E6 = 1;
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

  if ( (byte_4A49DC5 & 1) == 0 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, method);
    byte_4A49DC5 = 1;
  }
  *(_OWORD *)&this->fields.thickness = xmmword_BC23C0;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4A49EC2 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, method);
    byte_4A49EC2 = 1;
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
  if ( !byte_4A49EC3 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, method);
    v3 = OutlineEffectSettings_TypeInfo;
    byte_4A49EC3 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->_DefaultVertexOffset_k__BackingField.fields.x;
  v8 = v6->_DefaultVertexOffset_k__BackingField.fields.z;
  *(_OWORD *)&this->fields.fullscreenUVScaleX = xmmword_BC3CF0;
  this->fields.gaussianSilhouetteR = (struct UnityEngine_Color_o)xmmword_BC3FA0;
  this->fields.gaussianSilhouetteG = (struct UnityEngine_Color_o)xmmword_BC3EC0;
  this->fields.gaussianSilhouetteB = (struct UnityEngine_Color_o)xmmword_BC27A0;
  *(_QWORD *)&this->fields.vertexOffset.fields.x = v7;
  this->fields.vertexOffset.fields.z = v8;
  if ( !byte_4A487E6 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A487E6 = 1;
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
  *(_OWORD *)&this->fields.gaussianBloomIntensity = xmmword_BC2F00;
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  OutlineEffectSettings_c *v11; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v14; // x8
  Il2CppClass *v15; // d1
  float v16; // s2
  struct OutlineEffectSettings_StaticFields *v17; // x8
  float v18; // s1
  struct OutlineEffectSettings_StaticFields *v19; // x8
  float v20; // s1
  struct OutlineEffectSettings_StaticFields *v21; // x8
  float v22; // s1
  _BOOL4 v23; // w8
  struct OutlineEffectSettings_StaticFields *v24; // x9
  float v25; // s1
  _BOOL4 v26; // w8
  struct OutlineEffectSettings_StaticFields *v27; // x9
  float v28; // s1
  struct OutlineEffectSettings_StaticFields *v29; // x8
  Il2CppClass *v30; // d4
  float v31; // s5

  if ( (byte_4A49DC4 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Gradient_TypeInfo, v1);
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v2);
    sub_1B863B8(&Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___, v3);
    byte_4A49DC4 = 1;
  }
  Instance_object = UnityEngine_ScriptableObject__CreateInstance_object_((const MethodInfo_300FC7C *)Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
  v5 = (UnityEngine_Gradient_o *)sub_1B86604(UnityEngine_Gradient_TypeInfo);
  UnityEngine_Gradient___ctor(v5, 0LL);
  if ( !Instance_object )
    sub_1B86614(v6, v7);
  Instance_object[1].monitor = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&Instance_object[1].monitor, (int32_t)v5, v8, v9);
  Instance_object[2] = (Il2CppObject)xmmword_BC23C0;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4A49EC3 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v10);
    byte_4A49EC3 = 1;
  }
  v11 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v11 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v11->static_fields;
  z = static_fields->_DefaultVertexOffset_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[3].monitor + 4) = *(void **)&static_fields->_DefaultVertexOffset_k__BackingField.fields.x;
  *((float *)&Instance_object[4].klass + 1) = z;
  if ( !byte_4A49EC2 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v10);
    v11 = OutlineEffectSettings_TypeInfo;
    byte_4A49EC2 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = OutlineEffectSettings_TypeInfo;
  }
  v14 = v11->static_fields;
  v15 = *(Il2CppClass **)&v14->_DefaultVertexScale_k__BackingField.fields.x;
  v16 = v14->_DefaultVertexScale_k__BackingField.fields.z;
  *(_OWORD *)&Instance_object[4].monitor = xmmword_BC3CF0;
  Instance_object[3].klass = v15;
  *(float *)&Instance_object[3].monitor = v16;
  if ( !byte_4A49EC4 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v10);
    v11 = OutlineEffectSettings_TypeInfo;
    byte_4A49EC4 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = OutlineEffectSettings_TypeInfo;
  }
  v17 = v11->static_fields;
  v18 = v17->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[10].monitor + 4) = *(void **)&v17->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  *((float *)&Instance_object[11].klass + 1) = v18;
  if ( !byte_4A49EC5 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v10);
    v11 = OutlineEffectSettings_TypeInfo;
    byte_4A49EC5 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = OutlineEffectSettings_TypeInfo;
  }
  v19 = v11->static_fields;
  v20 = v19->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z;
  Instance_object[11].monitor = *(void **)&v19->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x;
  *(float *)&Instance_object[12].klass = v20;
  if ( !byte_4A49EC6 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v10);
    v11 = OutlineEffectSettings_TypeInfo;
    byte_4A49EC6 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = OutlineEffectSettings_TypeInfo;
  }
  v21 = v11->static_fields;
  v22 = v21->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[12].klass + 4) = *(Il2CppClass **)&v21->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x;
  *((float *)&Instance_object[12].monitor + 1) = v22;
  if ( !byte_4A49EC7 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v10);
    v11 = OutlineEffectSettings_TypeInfo;
    byte_4A49EC7 = 1;
  }
  if ( v11->_2.cctor_finished )
  {
    v23 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = OutlineEffectSettings_TypeInfo;
    v23 = byte_4A49EC7 == 0;
  }
  v24 = v11->static_fields;
  v25 = v24->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[8].monitor = *(void **)&v24->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *(float *)&Instance_object[9].klass = v25;
  if ( v23 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v10);
    v11 = OutlineEffectSettings_TypeInfo;
    byte_4A49EC7 = 1;
  }
  if ( v11->_2.cctor_finished )
  {
    v26 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = OutlineEffectSettings_TypeInfo;
    v26 = byte_4A49EC7 == 0;
  }
  v27 = v11->static_fields;
  v28 = v27->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[9].klass + 4) = *(Il2CppClass **)&v27->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *((float *)&Instance_object[9].monitor + 1) = v28;
  if ( v26 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v10);
    v11 = OutlineEffectSettings_TypeInfo;
    byte_4A49EC7 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = OutlineEffectSettings_TypeInfo;
  }
  v29 = v11->static_fields;
  v30 = *(Il2CppClass **)&v29->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  v31 = v29->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[13].klass = (Il2CppClass *)0x1B40200000LL;
  *(_OWORD *)&Instance_object[5].monitor = xmmword_BC3FA0;
  *(_OWORD *)&Instance_object[6].monitor = xmmword_BC3EC0;
  *(_OWORD *)&Instance_object[7].monitor = xmmword_BC27A0;
  *(_OWORD *)&Instance_object[13].monitor = xmmword_BC2F00;
  Instance_object[10].klass = v30;
  *(float *)&Instance_object[10].monitor = v31;
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

  if ( (byte_4A49DBF & 1) == 0 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v1);
    byte_4A49DBF = 1;
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

  if ( (byte_4A49DBE & 1) == 0 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v1);
    byte_4A49DBE = 1;
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

  if ( (byte_4A49DBD & 1) == 0 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v1);
    byte_4A49DBD = 1;
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

  if ( (byte_4A49DC0 & 1) == 0 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v1);
    byte_4A49DC0 = 1;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  OutlineEffectSettings_c *v9; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x0
  __int64 v11; // x19
  UnityEngine_Gradient_o *defaultGradient; // x0
  __int64 v13; // x1
  float time; // w8
  struct UnityEngine_Color_o color; // q0
  __int64 v16; // x20
  float v17; // s2
  float v18; // s3
  float v19; // s2
  float v20; // s3
  __int64 v22; // [xsp+0h] [xbp-90h] BYREF
  __int64 methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_GradientColorKey_o method_8; // [xsp+10h] [xbp-80h]
  UnityEngine_GradientColorKey_o method_32; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_GradientColorKey_o method_56; // [xsp+40h] [xbp-50h]
  UnityEngine_GradientColorKey_o method_80; // [xsp+58h] [xbp-38h] BYREF
  UnityEngine_GradientAlphaKey_o v28; // 0:s0.4,4:s1.4
  UnityEngine_GradientAlphaKey_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A49DC3 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_GradientAlphaKey___TypeInfo, v1);
    sub_1B863B8(&UnityEngine_GradientColorKey___TypeInfo, v2);
    sub_1B863B8(&UnityEngine_Gradient_TypeInfo, v3);
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v4);
    byte_4A49DC3 = 1;
  }
  v5 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
  }
  if ( !v5->static_fields->defaultGradient )
  {
    v6 = (UnityEngine_Gradient_o *)sub_1B86604(UnityEngine_Gradient_TypeInfo);
    UnityEngine_Gradient___ctor(v6, 0LL);
    v9 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
      v9 = OutlineEffectSettings_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->defaultGradient = v6;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->defaultGradient, (int32_t)v6, v7, v8);
    v11 = sub_1B86460(UnityEngine_GradientColorKey___TypeInfo, 2LL);
    v30.fields.r = 1.0;
    v30.fields.g = 1.0;
    v30.fields.b = 1.0;
    v30.fields.a = 1.0;
    memset(&method_80, 0, sizeof(method_80));
    UnityEngine_GradientColorKey___ctor(&method_80, v30, 0.0, 0LL);
    if ( v11 )
    {
      method_56 = method_80;
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_20;
      time = method_56.fields.time;
      v31.fields.g = 1.0;
      *(struct UnityEngine_Color_o *)(v11 + 32) = method_56.fields.color;
      v31.fields.r = 1.0;
      v31.fields.b = 1.0;
      v31.fields.a = 1.0;
      *(float *)(v11 + 48) = time;
      memset(&method_32, 0, sizeof(method_32));
      UnityEngine_GradientColorKey___ctor(&method_32, v31, 1.0, 0LL);
      method_8 = method_32;
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_20;
      color = method_8.fields.color;
      *(float *)(v11 + 68) = method_8.fields.time;
      *(struct UnityEngine_Color_o *)(v11 + 52) = color;
      v16 = sub_1B86460(UnityEngine_GradientAlphaKey___TypeInfo, 2LL);
      v28.fields.alpha = 1.0;
      v28.fields.time = 0.0;
      methoda = 0LL;
      UnityEngine_GradientAlphaKey___ctor(v28, v17, v18, (const MethodInfo *)&methoda);
      if ( !v16 )
        goto LABEL_21;
      if ( !*(_DWORD *)(v16 + 24)
        || (v29.fields.time = 1.0,
            *(_QWORD *)(v16 + 32) = methoda,
            v29.fields.alpha = 1.0,
            v22 = 0LL,
            UnityEngine_GradientAlphaKey___ctor(v29, v19, v20, (const MethodInfo *)&v22),
            *(_DWORD *)(v16 + 24) <= 1u) )
      {
LABEL_20:
        sub_1B8661C(defaultGradient, v13);
      }
      *(_QWORD *)(v16 + 40) = v22;
      defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
      if ( defaultGradient )
      {
        UnityEngine_Gradient__set_colorKeys(defaultGradient, (UnityEngine_GradientColorKey_array *)v11, 0LL);
        defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
        if ( defaultGradient )
        {
          UnityEngine_Gradient__set_alphaKeys(defaultGradient, (UnityEngine_GradientAlphaKey_array *)v16, 0LL);
          v5 = OutlineEffectSettings_TypeInfo;
          goto LABEL_17;
        }
      }
    }
LABEL_21:
    sub_1B86614(defaultGradient, v13);
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

  if ( (byte_4A49DC2 & 1) == 0 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v1);
    byte_4A49DC2 = 1;
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

  if ( (byte_4A49DC1 & 1) == 0 )
  {
    sub_1B863B8(&OutlineEffectSettings_TypeInfo, v1);
    byte_4A49DC1 = 1;
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