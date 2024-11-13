void __fastcall OutlineEffectSettings___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct OutlineEffectSettings_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_StaticFields *v4; // x8
  float z; // s1
  UnityEngine_Vector3_c *v6; // x9
  OutlineEffectSettings_c *v7; // x8
  struct UnityEngine_Vector3_StaticFields *v8; // x10
  struct OutlineEffectSettings_StaticFields *v9; // x11
  float v10; // s1
  struct UnityEngine_Vector3_StaticFields *v11; // x10
  struct OutlineEffectSettings_StaticFields *v12; // x11
  float v13; // s1
  struct UnityEngine_Vector3_StaticFields *v14; // x9
  struct OutlineEffectSettings_StaticFields *v15; // x10
  float v16; // s1
  struct OutlineEffectSettings_StaticFields *v17; // x9
  struct OutlineEffectSettings_StaticFields *v18; // x8

  if ( (byte_4B11D50 & 1) == 0 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v1, v2);
    byte_4B11D50 = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v1, v2);
    byte_4B109C1 = 1;
  }
  static_fields = OutlineEffectSettings_TypeInfo->static_fields;
  v4 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v4->zeroVector.fields.z;
  *(_QWORD *)&static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x = *(_QWORD *)&v4->zeroVector.fields.x;
  static_fields->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z = z;
  v6 = UnityEngine_Vector3_TypeInfo;
  v7 = OutlineEffectSettings_TypeInfo;
  v8 = UnityEngine_Vector3_TypeInfo->static_fields;
  v9 = OutlineEffectSettings_TypeInfo->static_fields;
  v10 = v8->zeroVector.fields.z;
  *(_QWORD *)&v9->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x = *(_QWORD *)&v8->zeroVector.fields.x;
  v9->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z = v10;
  v11 = v6->static_fields;
  v12 = v7->static_fields;
  v13 = v11->zeroVector.fields.z;
  *(_QWORD *)&v12->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x = *(_QWORD *)&v11->zeroVector.fields.x;
  v12->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z = v13;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v1, v2);
    v6 = UnityEngine_Vector3_TypeInfo;
    v7 = OutlineEffectSettings_TypeInfo;
    byte_4B109C6 = 1;
  }
  v14 = v6->static_fields;
  v15 = v7->static_fields;
  v16 = v14->oneVector.fields.z;
  *(_QWORD *)&v15->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x = *(_QWORD *)&v14->oneVector.fields.x;
  v15->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z = v16;
  v17 = v7->static_fields;
  *(_QWORD *)&v17->_DefaultVertexScale_k__BackingField.fields.x = 0x3F8000003E4CCCCDLL;
  v17->_DefaultVertexScale_k__BackingField.fields.z = 1.0;
  v18 = v7->static_fields;
  *(_QWORD *)&v18->_DefaultVertexOffset_k__BackingField.fields.x = 1017370378LL;
  v18->_DefaultVertexOffset_k__BackingField.fields.z = 0.0;
}


void __fastcall OutlineEffectSettings___ctor(OutlineEffectSettings_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  OutlineEffectSettings_c *v4; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v7; // x8
  __int64 v8; // d4
  float v9; // s5
  UnityEngine_Vector3_c *v10; // x8
  struct UnityEngine_Vector3_StaticFields *v11; // x9
  float v12; // s1
  struct UnityEngine_Vector3_StaticFields *v13; // x9
  float v14; // s1
  struct UnityEngine_Vector3_StaticFields *v15; // x8
  __int64 v16; // d1
  float v17; // s2

  if ( (byte_4B11D4F & 1) == 0 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, method, v2);
    byte_4B11D4F = 1;
  }
  *(_OWORD *)&this->fields.thickness = xmmword_BD2060;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, method);
  if ( !byte_4B11D5C )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, method, v2);
    byte_4B11D5C = 1;
  }
  v4 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, method);
    v4 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v4->static_fields;
  z = static_fields->_DefaultVertexScale_k__BackingField.fields.z;
  *(_QWORD *)&this->fields.vertexScale.fields.x = *(_QWORD *)&static_fields->_DefaultVertexScale_k__BackingField.fields.x;
  this->fields.vertexScale.fields.z = z;
  if ( !byte_4B11D5D )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, method, v2);
    v4 = OutlineEffectSettings_TypeInfo;
    byte_4B11D5D = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    v4 = OutlineEffectSettings_TypeInfo;
  }
  v7 = v4->static_fields;
  v8 = *(_QWORD *)&v7->_DefaultVertexOffset_k__BackingField.fields.x;
  v9 = v7->_DefaultVertexOffset_k__BackingField.fields.z;
  *(_OWORD *)&this->fields.fullscreenUVScaleX = xmmword_BD39D0;
  this->fields.gaussianSilhouetteR = (struct UnityEngine_Color_o)xmmword_BD3C60;
  this->fields.gaussianSilhouetteG = (struct UnityEngine_Color_o)xmmword_BD3B80;
  this->fields.gaussianSilhouetteB = (struct UnityEngine_Color_o)xmmword_BD2430;
  *(_QWORD *)&this->fields.vertexOffset.fields.x = v8;
  this->fields.vertexOffset.fields.z = v9;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C6 = 1;
  }
  v10 = UnityEngine_Vector3_TypeInfo;
  v11 = UnityEngine_Vector3_TypeInfo->static_fields;
  v12 = v11->oneVector.fields.z;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleR.fields.x = *(_QWORD *)&v11->oneVector.fields.x;
  this->fields.gaussianSilhouetteScaleR.fields.z = v12;
  v13 = v10->static_fields;
  v14 = v13->oneVector.fields.z;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleG.fields.x = *(_QWORD *)&v13->oneVector.fields.x;
  this->fields.gaussianSilhouetteScaleG.fields.z = v14;
  v15 = v10->static_fields;
  v16 = *(_QWORD *)&v15->oneVector.fields.x;
  v17 = v15->oneVector.fields.z;
  *(_OWORD *)&this->fields.gaussianBloomIntensity = xmmword_BD2BB0;
  *(_QWORD *)&this->fields.gaussianBloomSigma = 0x1B40200000LL;
  *(_QWORD *)&this->fields.gaussianSilhouetteScaleB.fields.x = v16;
  this->fields.gaussianSilhouetteScaleB.fields.z = v17;
  this->fields.contrast = 0.7;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


OutlineEffectSettings_o *__fastcall OutlineEffectSettings__get_Default(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance_object; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  UnityEngine_Gradient_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  OutlineEffectSettings_c *v16; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x8
  float z; // s1
  struct OutlineEffectSettings_StaticFields *v19; // x8
  Il2CppClass *v20; // d1
  float v21; // s2
  struct OutlineEffectSettings_StaticFields *v22; // x8
  float v23; // s1
  struct OutlineEffectSettings_StaticFields *v24; // x8
  float v25; // s1
  struct OutlineEffectSettings_StaticFields *v26; // x8
  float v27; // s1
  _BOOL4 v28; // w8
  struct OutlineEffectSettings_StaticFields *v29; // x9
  float v30; // s1
  _BOOL4 v31; // w8
  struct OutlineEffectSettings_StaticFields *v32; // x9
  float v33; // s1
  struct OutlineEffectSettings_StaticFields *v34; // x8
  Il2CppClass *v35; // d4
  float v36; // s5

  if ( (byte_4B11D4E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Gradient_TypeInfo, v1, v2);
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___, v5, v6);
    byte_4B11D4E = 1;
  }
  Instance_object = UnityEngine_ScriptableObject__CreateInstance_object_((const MethodInfo_2FB147C *)Method_UnityEngine_ScriptableObject_CreateInstance_OutlineEffectSettings___);
  v11 = (UnityEngine_Gradient_o *)sub_1BCAA2C(UnityEngine_Gradient_TypeInfo, v8, v9, v10);
  UnityEngine_Gradient___ctor(v11, 0LL);
  if ( !Instance_object )
    sub_1BCAA3C(v12, v13);
  Instance_object[1].monitor = v11;
  sub_1BCA784(&Instance_object[1].monitor, v11);
  Instance_object[2] = (Il2CppObject)xmmword_BD2060;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v14);
  if ( !byte_4B11D5D )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v14, v15);
    byte_4B11D5D = 1;
  }
  v16 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v14);
    v16 = OutlineEffectSettings_TypeInfo;
  }
  static_fields = v16->static_fields;
  z = static_fields->_DefaultVertexOffset_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[3].monitor + 4) = *(void **)&static_fields->_DefaultVertexOffset_k__BackingField.fields.x;
  *((float *)&Instance_object[4].klass + 1) = z;
  if ( !byte_4B11D5C )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v14, v15);
    v16 = OutlineEffectSettings_TypeInfo;
    byte_4B11D5C = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = OutlineEffectSettings_TypeInfo;
  }
  v19 = v16->static_fields;
  v20 = *(Il2CppClass **)&v19->_DefaultVertexScale_k__BackingField.fields.x;
  v21 = v19->_DefaultVertexScale_k__BackingField.fields.z;
  *(_OWORD *)&Instance_object[4].monitor = xmmword_BD39D0;
  Instance_object[3].klass = v20;
  *(float *)&Instance_object[3].monitor = v21;
  if ( !byte_4B11D5E )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v14, v15);
    v16 = OutlineEffectSettings_TypeInfo;
    byte_4B11D5E = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = OutlineEffectSettings_TypeInfo;
  }
  v22 = v16->static_fields;
  v23 = v22->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.z;
  *(void **)((char *)&Instance_object[10].monitor + 4) = *(void **)&v22->_DefaultGaussianBloomSilhouetteRed_k__BackingField.fields.x;
  *((float *)&Instance_object[11].klass + 1) = v23;
  if ( !byte_4B11D5F )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v14, v15);
    v16 = OutlineEffectSettings_TypeInfo;
    byte_4B11D5F = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = OutlineEffectSettings_TypeInfo;
  }
  v24 = v16->static_fields;
  v25 = v24->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.z;
  Instance_object[11].monitor = *(void **)&v24->_DefaultGaussianBloomSilhouetteGreen_k__BackingField.fields.x;
  *(float *)&Instance_object[12].klass = v25;
  if ( !byte_4B11D60 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v14, v15);
    v16 = OutlineEffectSettings_TypeInfo;
    byte_4B11D60 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = OutlineEffectSettings_TypeInfo;
  }
  v26 = v16->static_fields;
  v27 = v26->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[12].klass + 4) = *(Il2CppClass **)&v26->_DefaultGaussianBloomSilhouetteBlue_k__BackingField.fields.x;
  *((float *)&Instance_object[12].monitor + 1) = v27;
  if ( !byte_4B11D61 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v14, v15);
    v16 = OutlineEffectSettings_TypeInfo;
    byte_4B11D61 = 1;
  }
  if ( v16->_2.cctor_finished )
  {
    v28 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = OutlineEffectSettings_TypeInfo;
    v28 = byte_4B11D61 == 0;
  }
  v29 = v16->static_fields;
  v30 = v29->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[8].monitor = *(void **)&v29->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *(float *)&Instance_object[9].klass = v30;
  if ( v28 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v14, v15);
    v16 = OutlineEffectSettings_TypeInfo;
    byte_4B11D61 = 1;
  }
  if ( v16->_2.cctor_finished )
  {
    v31 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = OutlineEffectSettings_TypeInfo;
    v31 = byte_4B11D61 == 0;
  }
  v32 = v16->static_fields;
  v33 = v32->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  *(Il2CppClass **)((char *)&Instance_object[9].klass + 4) = *(Il2CppClass **)&v32->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  *((float *)&Instance_object[9].monitor + 1) = v33;
  if ( v31 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v14, v15);
    v16 = OutlineEffectSettings_TypeInfo;
    byte_4B11D61 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = OutlineEffectSettings_TypeInfo;
  }
  v34 = v16->static_fields;
  v35 = *(Il2CppClass **)&v34->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.x;
  v36 = v34->_DefaultGaussianBloomSilhouetteScale_k__BackingField.fields.z;
  Instance_object[13].klass = (Il2CppClass *)0x1B40200000LL;
  *(_OWORD *)&Instance_object[5].monitor = xmmword_BD3C60;
  *(_OWORD *)&Instance_object[6].monitor = xmmword_BD3B80;
  *(_OWORD *)&Instance_object[7].monitor = xmmword_BD2430;
  *(_OWORD *)&Instance_object[13].monitor = xmmword_BD2BB0;
  Instance_object[10].klass = v35;
  *(float *)&Instance_object[10].monitor = v36;
  LODWORD(Instance_object[14].monitor) = 1065353216;
  return (OutlineEffectSettings_o *)Instance_object;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteBlue(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11D49 & 1) == 0 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v1, v2);
    byte_4B11D49 = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1);
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


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteGreen(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11D48 & 1) == 0 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v1, v2);
    byte_4B11D48 = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1);
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


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteRed(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11D47 & 1) == 0 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v1, v2);
    byte_4B11D47 = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1);
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


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultGaussianBloomSilhouetteScale(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11D4A & 1) == 0 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v1, v2);
    byte_4B11D4A = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1);
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


UnityEngine_Gradient_o *__fastcall OutlineEffectSettings__get_DefaultGradient(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  OutlineEffectSettings_c *v10; // x0
  UnityEngine_Gradient_o *v11; // x19
  __int64 v12; // x1
  OutlineEffectSettings_c *v13; // x0
  struct OutlineEffectSettings_StaticFields *static_fields; // x0
  __int64 v15; // x19
  UnityEngine_Gradient_o *defaultGradient; // x0
  __int64 v17; // x1
  float time; // w8
  struct UnityEngine_Color_o color; // q0
  __int64 v20; // x20
  float v21; // s2
  float v22; // s3
  float v23; // s2
  float v24; // s3
  __int64 v26; // [xsp+0h] [xbp-90h] BYREF
  __int64 methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_GradientColorKey_o method_8; // [xsp+10h] [xbp-80h]
  UnityEngine_GradientColorKey_o method_32; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_GradientColorKey_o method_56; // [xsp+40h] [xbp-50h]
  UnityEngine_GradientColorKey_o method_80; // [xsp+58h] [xbp-38h] BYREF
  UnityEngine_GradientAlphaKey_o v32; // 0:s0.4,4:s1.4
  UnityEngine_GradientAlphaKey_o v33; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11D4D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GradientAlphaKey___TypeInfo, v1, v2);
    sub_1BCA7E0(&UnityEngine_GradientColorKey___TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Gradient_TypeInfo, v6, v7);
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v8, v9);
    byte_4B11D4D = 1;
  }
  v10 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1);
    v10 = OutlineEffectSettings_TypeInfo;
  }
  if ( !v10->static_fields->defaultGradient )
  {
    v11 = (UnityEngine_Gradient_o *)sub_1BCAA2C(UnityEngine_Gradient_TypeInfo, v1, v2, v3);
    UnityEngine_Gradient___ctor(v11, 0LL);
    v13 = OutlineEffectSettings_TypeInfo;
    if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v12);
      v13 = OutlineEffectSettings_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->defaultGradient = v11;
    sub_1BCA784(&static_fields->defaultGradient, v11);
    v15 = sub_1BCA888(UnityEngine_GradientColorKey___TypeInfo, 2LL);
    v34.fields.r = 1.0;
    v34.fields.g = 1.0;
    v34.fields.b = 1.0;
    v34.fields.a = 1.0;
    memset(&method_80, 0, sizeof(method_80));
    UnityEngine_GradientColorKey___ctor(&method_80, v34, 0.0, 0LL);
    if ( v15 )
    {
      method_56 = method_80;
      if ( !*(_DWORD *)(v15 + 24) )
        goto LABEL_20;
      time = method_56.fields.time;
      v35.fields.g = 1.0;
      *(struct UnityEngine_Color_o *)(v15 + 32) = method_56.fields.color;
      v35.fields.r = 1.0;
      v35.fields.b = 1.0;
      v35.fields.a = 1.0;
      *(float *)(v15 + 48) = time;
      memset(&method_32, 0, sizeof(method_32));
      UnityEngine_GradientColorKey___ctor(&method_32, v35, 1.0, 0LL);
      method_8 = method_32;
      if ( *(_DWORD *)(v15 + 24) <= 1u )
        goto LABEL_20;
      color = method_8.fields.color;
      *(float *)(v15 + 68) = method_8.fields.time;
      *(struct UnityEngine_Color_o *)(v15 + 52) = color;
      v20 = sub_1BCA888(UnityEngine_GradientAlphaKey___TypeInfo, 2LL);
      v32.fields.alpha = 1.0;
      v32.fields.time = 0.0;
      methoda = 0LL;
      UnityEngine_GradientAlphaKey___ctor(v32, v21, v22, (const MethodInfo *)&methoda);
      if ( !v20 )
        goto LABEL_21;
      if ( !*(_DWORD *)(v20 + 24)
        || (v33.fields.time = 1.0,
            *(_QWORD *)(v20 + 32) = methoda,
            v33.fields.alpha = 1.0,
            v26 = 0LL,
            UnityEngine_GradientAlphaKey___ctor(v33, v23, v24, (const MethodInfo *)&v26),
            *(_DWORD *)(v20 + 24) <= 1u) )
      {
LABEL_20:
        sub_1BCAA44(defaultGradient, v17);
      }
      *(_QWORD *)(v20 + 40) = v26;
      defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
      if ( defaultGradient )
      {
        UnityEngine_Gradient__set_colorKeys(defaultGradient, (UnityEngine_GradientColorKey_array *)v15, 0LL);
        defaultGradient = OutlineEffectSettings_TypeInfo->static_fields->defaultGradient;
        if ( defaultGradient )
        {
          UnityEngine_Gradient__set_alphaKeys(defaultGradient, (UnityEngine_GradientAlphaKey_array *)v20, 0LL);
          v10 = OutlineEffectSettings_TypeInfo;
          goto LABEL_17;
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(defaultGradient, v17);
  }
LABEL_17:
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v1);
    v10 = OutlineEffectSettings_TypeInfo;
  }
  return v10->static_fields->defaultGradient;
}


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultVertexOffset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11D4C & 1) == 0 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v1, v2);
    byte_4B11D4C = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1);
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


UnityEngine_Vector3_o __fastcall OutlineEffectSettings__get_DefaultVertexScale(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OutlineEffectSettings_c *v3; // x0
  float *p_x; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11D4B & 1) == 0 )
  {
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v1, v2);
    byte_4B11D4B = 1;
  }
  v3 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v1);
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