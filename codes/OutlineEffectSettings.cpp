void __fastcall OutlineEffectSettings___cctor(const MethodInfo *method)
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

  if ( (byte_4BD7FB8 & 1) == 0 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FB8 = 1;
  }
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    v4 = UnityEngine_Vector3_TypeInfo;
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4BD6BB6 = 1;
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
  *(_QWORD *)&v16->_DefaultVertexOffset_k__BackingField.fields.x = 1017370378LL;
  v16->_DefaultVertexOffset_k__BackingField.fields.z = 0.0;
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

  if ( (byte_4BD7FB7 & 1) == 0 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FB7 = 1;
  }
  *(_OWORD *)&this->fields.thickness = xmmword_BFDA00;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4BD7FDA )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FDA = 1;
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
  if ( !byte_4BD7FDB )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    v3 = OutlineEffectSettings_TypeInfo;
    byte_4BD7FDB = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OutlineEffectSettings_TypeInfo;
  }
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->_DefaultVertexOffset_k__BackingField.fields.x;
  v8 = v6->_DefaultVertexOffset_k__BackingField.fields.z;
  *(_OWORD *)&this->fields.fullscreenUVScaleX = xmmword_BFF2F0;
  this->fields.gaussianSilhouetteR = (struct UnityEngine_Color_o)xmmword_BFF580;
  this->fields.gaussianSilhouetteG = (struct UnityEngine_Color_o)xmmword_BFF4A0;
  this->fields.gaussianSilhouetteB = (struct UnityEngine_Color_o)xmmword_BFDDD0;
  *(_QWORD *)&this->fields.vertexOffset.fields.x = v7;
  this->fields.vertexOffset.fields.z = v8;
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
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
  *(_OWORD *)&this->fields.gaussianBloomIntensity = xmmword_BFE500;
  *(_QWORD *)&this->fields.gaussianBloomSigma = 0x1B40200000LL;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleB.fields.x = v15;
  this->fields.gaussianSilhouetteScaleB.fields.z = v16;
  this->fields.contrast = 0.7;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


OutlineEffectSettings_o *__fastcall OutlineEffectSettings__get_Default(const MethodInfo *method)
{
  Il2CppObject *Instance_object; // x19
  UnityEngine_Gradient_o *v2; // x21
  __int64 v3; // x0
  __int64 v4; // x1
  OutlineEffectSettings_c *v5; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v8; // x8
  Il2CppClass *v9; // d1
  float v10; // s2
  struct OutlineEffectSettings_StaticFields *v11; // x8
  float v12; // s1
  struct OutlineEffectSettings_StaticFields *v13; // x8
  float v14; // s1
  struct OutlineEffectSettings_StaticFields *v15; // x8
  float v16; // s1
  _BOOL4 v17; // w8
  struct OutlineEffectSettings_StaticFields *v18; // x9
  float v19; // s1
  _BOOL4 v20; // w8
  struct OutlineEffectSettings_StaticFields *v21; // x9
  float v22; // s1
  struct OutlineEffectSettings_StaticFields *v23; // x8
  Il2CppClass *v24; // d4
  float v25; // s5

  if ( (byte_4BD7FB6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Gradient_TypeInfo);
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
    byte_4BD7FB6 = 1;
  }
  Instance_object = UnityEngine_ScriptableObject__CreateInstance_object_((const MethodInfo_304F59C *)Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
  v2 = (UnityEngine_Gradient_o *)sub_1C22084(UnityEngine_Gradient_TypeInfo);
  UnityEngine_Gradient___ctor(v2, 0LL);
  if ( !Instance_object )
    sub_1C22094(v3, v4);
  Instance_object[1].monitor = v2;
  sub_1C21DDC(&Instance_object[1].monitor, v2);
  Instance_object[2] = (Il2CppObject)xmmword_BFDA00;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  if ( !byte_4BD7FDB )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FDB = 1;
  }
  v5 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v5->static_fields;
  z = static_fields->_DefaultVertexOffset_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[3].monitor + 4) = *(void **)&static_fields->_DefaultVertexOffset_k__BackingField.fields.x;
  *((float *)&Instance_object[4].klass + 1) = z;
  if ( !byte_4BD7FDA )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4BD7FDA = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = OutlineEffectSettings_TypeInfo;
  }
  v8 = v5->static_fields;
  v9 = *(Il2CppClass **)&v8->_DefaultVertexScale_k__BackingField.fields.x;
  v10 = v8->_DefaultVertexScale_k__BackingField.fields.z;
  *(_OWORD *)&Instance_object[4].monitor = xmmword_BFF2F0;
  Instance_object[3].klass = v9;
  *(float *)&Instance_object[3].monitor = v10;
  if ( !byte_4BD7FDC )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4BD7FDC = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = OutlineEffectSettings_TypeInfo;
  }
  v11 = v5->static_fields;
  v12 = v11->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[10].monitor + 4) = *(void **)&v11->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  *((float *)&Instance_object[11].klass + 1) = v12;
  if ( !byte_4BD7FDD )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4BD7FDD = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = OutlineEffectSettings_TypeInfo;
  }
  v13 = v5->static_fields;
  v14 = v13->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z;
  Instance_object[11].monitor = *(void **)&v13->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x;
  *(float *)&Instance_object[12].klass = v14;
  if ( !byte_4BD7FDE )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4BD7FDE = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = OutlineEffectSettings_TypeInfo;
  }
  v15 = v5->static_fields;
  v16 = v15->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[12].klass + 4) = *(Il2CppClass **)&v15->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x;
  *((float *)&Instance_object[12].monitor + 1) = v16;
  if ( !byte_4BD7FDF )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4BD7FDF = 1;
  }
  if ( v5->_2.cctor_finished )
  {
    v17 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = OutlineEffectSettings_TypeInfo;
    v17 = byte_4BD7FDF == 0;
  }
  v18 = v5->static_fields;
  v19 = v18->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[8].monitor = *(void **)&v18->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *(float *)&Instance_object[9].klass = v19;
  if ( v17 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4BD7FDF = 1;
  }
  if ( v5->_2.cctor_finished )
  {
    v20 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = OutlineEffectSettings_TypeInfo;
    v20 = byte_4BD7FDF == 0;
  }
  v21 = v5->static_fields;
  v22 = v21->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[9].klass + 4) = *(Il2CppClass **)&v21->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *((float *)&Instance_object[9].monitor + 1) = v22;
  if ( v20 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    v5 = OutlineEffectSettings_TypeInfo;
    byte_4BD7FDF = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = OutlineEffectSettings_TypeInfo;
  }
  v23 = v5->static_fields;
  v24 = *(Il2CppClass **)&v23->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  v25 = v23->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[13].klass = (Il2CppClass *)0x1B40200000LL;
  *(_OWORD *)&Instance_object[5].monitor = xmmword_BFF580;
  *(_OWORD *)&Instance_object[6].monitor = xmmword_BFF4A0;
  *(_OWORD *)&Instance_object[7].monitor = xmmword_BFDDD0;
  *(_OWORD *)&Instance_object[13].monitor = xmmword_BFE500;
  Instance_object[10].klass = v24;
  *(float *)&Instance_object[10].monitor = v25;
  LODWORD(Instance_object[14].monitor) = 1065353216;
  return (OutlineEffectSettings_o *)Instance_object;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteBlue(
        const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7FB1 & 1) == 0 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FB1 = 1;
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


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteGreen(
        const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7FB0 & 1) == 0 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FB0 = 1;
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


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteRed(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7FAF & 1) == 0 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FAF = 1;
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


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteScale(
        const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7FB2 & 1) == 0 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FB2 = 1;
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


UnityEngine_Gradient_o *__fastcall OutlineEffectSettings__get_DefaultGradient(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  UnityEngine_Gradient_o *v2; // x19
  OutlineEffectSettings_c *v3; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x0
  __int64 v5; // x19
  UnityEngine_Gradient_o *defaultGradient; // x0
  __int64 v7; // x1
  float time; // w8
  struct UnityEngine_Color_o color; // q0
  __int64 v10; // x20
  float v11; // s2
  float v12; // s3
  float v13; // s2
  float v14; // s3
  __int64 v16; // [xsp+0h] [xbp-90h] BYREF
  __int64 methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_GradientColorKey_o method_8; // [xsp+10h] [xbp-80h]
  UnityEngine_GradientColorKey_o method_32; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_GradientColorKey_o method_56; // [xsp+40h] [xbp-50h]
  UnityEngine_GradientColorKey_o method_80; // [xsp+58h] [xbp-38h] BYREF
  UnityEngine_GradientAlphaKey_o v22; // 0:s0.4,4:s1.4
  UnityEngine_GradientAlphaKey_o v23; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD7FB5 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GradientAlphaKey___TypeInfo);
    sub_1C21E38(&UnityEngine_GradientColorKey___TypeInfo);
    sub_1C21E38(&UnityEngine_Gradient_TypeInfo);
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FB5 = 1;
  }
  v1 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
    v1 = OutlineEffectSettings_TypeInfo;
  }
  if ( !v1->static_fields->defaultGradient )
  {
    v2 = (UnityEngine_Gradient_o *)sub_1C22084(UnityEngine_Gradient_TypeInfo);
    UnityEngine_Gradient___ctor(v2, 0LL);
    v3 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
      v3 = OutlineEffectSettings_TypeInfo;
    }
    static_fields = v3->static_fields;
    static_fields->defaultGradient = v2;
    sub_1C21DDC(&static_fields->defaultGradient, v2);
    v5 = sub_1C21EE0(UnityEngine_GradientColorKey___TypeInfo, 2LL);
    v24.fields.r = 1.0;
    v24.fields.g = 1.0;
    v24.fields.b = 1.0;
    v24.fields.a = 1.0;
    memset(&method_80, 0, sizeof(method_80));
    UnityEngine_GradientColorKey___ctor(&method_80, v24, 0.0, 0LL);
    if ( v5 )
    {
      method_56 = method_80;
      if ( !*(_DWORD *)(v5 + 24) )
        goto LABEL_20;
      time = method_56.fields.time;
      v25.fields.g = 1.0;
      *(struct UnityEngine_Color_o *)(v5 + 32) = method_56.fields.color;
      v25.fields.r = 1.0;
      v25.fields.b = 1.0;
      v25.fields.a = 1.0;
      *(float *)(v5 + 48) = time;
      memset(&method_32, 0, sizeof(method_32));
      UnityEngine_GradientColorKey___ctor(&method_32, v25, 1.0, 0LL);
      method_8 = method_32;
      if ( *(_DWORD *)(v5 + 24) <= 1u )
        goto LABEL_20;
      color = method_8.fields.color;
      *(float *)(v5 + 68) = method_8.fields.time;
      *(struct UnityEngine_Color_o *)(v5 + 52) = color;
      v10 = sub_1C21EE0(UnityEngine_GradientAlphaKey___TypeInfo, 2LL);
      v22.fields.alpha = 1.0;
      v22.fields.time = 0.0;
      methoda = 0LL;
      UnityEngine_GradientAlphaKey___ctor(v22, v11, v12, (const MethodInfo *)&methoda);
      if ( !v10 )
        goto LABEL_21;
      if ( !*(_DWORD *)(v10 + 24)
        || (v23.fields.time = 1.0,
            *(_QWORD *)(v10 + 32) = methoda,
            v23.fields.alpha = 1.0,
            v16 = 0LL,
            UnityEngine_GradientAlphaKey___ctor(v23, v13, v14, (const MethodInfo *)&v16),
            *(_DWORD *)(v10 + 24) <= 1u) )
      {
LABEL_20:
        sub_1C2209C(defaultGradient, v7);
      }
      *(_QWORD *)(v10 + 40) = v16;
      defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
      if ( defaultGradient )
      {
        UnityEngine_Gradient__set_colorKeys(defaultGradient, (UnityEngine_GradientColorKey_array *)v5, 0LL);
        defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
        if ( defaultGradient )
        {
          UnityEngine_Gradient__set_alphaKeys(defaultGradient, (UnityEngine_GradientAlphaKey_array *)v10, 0LL);
          v1 = OutlineEffectSettings_TypeInfo;
          goto LABEL_17;
        }
      }
    }
LABEL_21:
    sub_1C22094(defaultGradient, v7);
  }
LABEL_17:
  if ( !v1->_2.cctor_finished )
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

  if ( (byte_4BD7FB4 & 1) == 0 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FB4 = 1;
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


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultVertexScale(const MethodInfo *method)
{
  OutlineEffectSettings_c *v1; // x0
  float *p_x; // x8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD7FB3 & 1) == 0 )
  {
    sub_1C21E38(&OutlineEffectSettings_TypeInfo);
    byte_4BD7FB3 = 1;
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