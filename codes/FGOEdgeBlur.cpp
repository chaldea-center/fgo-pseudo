void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct UnityEngine_RenderTexture_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Single_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UnityEngine_Rect_o v26; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7AAC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_RenderTexture___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&float___TypeInfo, v9, v10, v11);
    byte_42E7AAC = 1;
  }
  v27.fields.m_YMin = 0.25195;
  v27.fields.m_Width = 1.0;
  v27.fields.m_XMin = 0.0;
  v27.fields.m_Height = 1.0;
  v26 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v27, v4, v5, v6, v7, (const MethodInfo *)&v26);
  this->fields._Rect = v26;
  *(_OWORD *)&this->fields._thickness = xmmword_32A1F90;
  this->fields._iteration = 4;
  this->fields._color = UnityEngine_Color__get_white(0LL);
  this->fields._particleColor = UnityEngine_Color__get_white(0LL);
  v12 = (struct UnityEngine_RenderTexture_array *)sub_B5D5DC(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._renderTextures,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct System_Single_array *)sub_B5D5DC(float___TypeInfo, 10LL);
  this->fields._weights = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._weights,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall FGOEdgeBlur__Awake(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  FGOEdgeBlur__Initialize(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGOEdgeBlur__Blur(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UnityEngine_Object_o *texture; // x20
  int v36; // s0
  UnityEngine_Material_o *material; // x20
  float m_XMin; // s8
  float v42; // s9
  float v43; // s10
  float v44; // s4
  float v45; // s5
  float v46; // s6
  float v47; // s7
  __int64 Temporary_35679768; // x0
  __int64 v49; // x1
  UnityEngine_Texture_o *v50; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v52; // x21
  struct UnityEngine_RenderTexture_o *v53; // x8
  int v54; // w22
  System_Int32_array **v55; // x20
  int v56; // w23
  unsigned __int64 v57; // x27
  __int64 v58; // x28
  int v59; // w8
  int v60; // w9
  UnityEngine_Texture_o *v61; // x21
  struct UnityEngine_RenderTexture_array *renderTextures; // x24
  int32_t format; // w0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Material_o *v70; // x24
  unsigned __int64 v71; // x23
  __int64 v72; // x24
  struct UnityEngine_RenderTexture_array *v73; // x8
  UnityEngine_Material_o *v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct UnityEngine_RenderTexture_array *v81; // x8
  UnityEngine_RenderTexture_o *v82; // x21
  UnityEngine_Material_o *v83; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v85; // x20
  bool HasProperty_41623368; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v91; // x8
  int32_t v92; // w21
  int32_t v93; // w22
  UnityEngine_Texture2D_o *v94; // x20
  struct UnityEngine_RenderTexture_o *v95; // x8
  int v96; // w21
  int v97; // w0
  float v98; // s4
  float v99; // s5
  float v100; // s6
  float v101; // s7
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v103; // x8
  unsigned __int64 v104; // x23
  UnityEngine_Object_o *v105; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v107; // x8
  unsigned __int64 v108; // x22
  UnityEngine_Object_o *v109; // x20
  __int64 v110; // x0
  __int64 v111; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v112; // [xsp+0h] [xbp-F0h] BYREF
  MethodInfo methoda; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v114; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v115; // 0:x0.8
  UnityEngine_Rect_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v122; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7AAB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Graphics_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Texture2D_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16292/*"_Weights"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16278/*"_Threshold"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16194/*"_Intensity"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16332/*"_customColor0"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_16240/*"_Rect"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_16275/*"_Thickness"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_16220/*"_Offset"*/, v32, v33, v34);
    byte_42E7AAB = 1;
  }
  *(_QWORD *)&methoda.slot = 0LL;
  methoda.genericMethod = 0LL;
  if ( !this->fields._isInitialized )
    FGOEdgeBlur__Initialize(this, method);
  texture = (UnityEngine_Object_o *)this->fields._texture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(texture, 0LL, 0LL) )
  {
    material = this->fields._material;
    v116.fields.m_XMin = UnityEngine_Rect__get_xMin(
                           *(UnityEngine_Rect_o *)&v36,
                           (const MethodInfo *)&this->fields._Rect);
    m_XMin = v116.fields.m_XMin;
    v117.fields.m_XMin = UnityEngine_Rect__get_yMin(v116, (const MethodInfo *)&this->fields._Rect);
    v42 = v117.fields.m_XMin;
    v118.fields.m_XMin = UnityEngine_Rect__get_xMax(v117, (const MethodInfo *)&this->fields._Rect);
    v43 = v118.fields.m_XMin;
    v119.fields.w = UnityEngine_Rect__get_yMax(v118, (const MethodInfo *)&this->fields._Rect);
    v119.fields.x = m_XMin;
    v119.fields.y = v42;
    v119.fields.z = v43;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v119, v44, v45, v46, v47, &methoda);
    if ( !material )
      goto LABEL_88;
    *(_QWORD *)&v120.fields.x = methoda.methodPointer;
    *(_QWORD *)&v120.fields.z = methoda.invoker_method;
    UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_16240/*"_Rect"*/, v120, 0LL);
    Temporary_35679768 = (__int64)this->fields._material;
    if ( !Temporary_35679768 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_35679768,
      (System_String_o *)StringLiteral_16275/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    Temporary_35679768 = (__int64)this->fields._material;
    if ( !Temporary_35679768 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_35679768,
      (System_String_o *)StringLiteral_16278/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    Temporary_35679768 = (__int64)this->fields._material;
    if ( !Temporary_35679768 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_35679768,
      (System_String_o *)StringLiteral_16194/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    Temporary_35679768 = (__int64)this->fields._material;
    if ( !Temporary_35679768 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_35679768,
      (System_String_o *)StringLiteral_16220/*"_Offset"*/,
      this->fields._offset,
      0LL);
    Temporary_35679768 = (__int64)this->fields._material;
    if ( !Temporary_35679768 )
      goto LABEL_88;
    UnityEngine_Material__SetFloatArray_41626700(
      (UnityEngine_Material_o *)Temporary_35679768,
      (System_String_o *)StringLiteral_16292/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v50 = this->fields._texture;
    rt0 = this->fields._rt0;
    v52 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_41600616(v50, rt0, v52, 0, 0LL);
    Temporary_35679768 = (__int64)this->fields._rt0;
    if ( !Temporary_35679768 )
      goto LABEL_88;
    Temporary_35679768 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_35679768 + 376LL))(
                           Temporary_35679768,
                           *(_QWORD *)(*(_QWORD *)Temporary_35679768 + 384LL));
    v53 = this->fields._rt0;
    if ( !v53 )
      goto LABEL_88;
    v54 = Temporary_35679768;
    Temporary_35679768 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v53->klass->vtable._6_get_height.method)(
                           this->fields._rt0,
                           v53->klass->vtable._7_set_height.methodPtr);
    v55 = (System_Int32_array **)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v56 = Temporary_35679768;
      v57 = 0LL;
      v58 = 32LL;
      while ( 1 )
      {
        v59 = v54 >= 0 ? v54 : v54 + 1;
        v60 = v56 >= 0 ? v56 : v56 + 1;
        v61 = (UnityEngine_Texture_o *)v55;
        if ( v56 < 32 || v54 < 32 )
          break;
        Temporary_35679768 = (__int64)this->fields._rt0;
        if ( !Temporary_35679768 )
          goto LABEL_88;
        renderTextures = this->fields._renderTextures;
        v54 = v59 >> 1;
        v56 = v60 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)Temporary_35679768, 0LL);
        Temporary_35679768 = (__int64)UnityEngine_RenderTexture__GetTemporary_35679768(v54, v56, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_88;
        v55 = (System_Int32_array **)Temporary_35679768;
        if ( Temporary_35679768 )
        {
          Temporary_35679768 = sub_B5D684(Temporary_35679768, renderTextures->obj.klass->_1.element_class);
          if ( !Temporary_35679768 )
          {
            v111 = sub_B5D6BC(0LL);
            sub_B5D668(v111, 0LL);
          }
        }
        if ( v57 >= renderTextures->max_length )
          goto LABEL_89;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v58) = (Il2CppClass *)v55;
        sub_B5D560((BattleServantConfConponent_o *)((char *)renderTextures + v58), v55, v64, v65, v66, v67, v68, v69);
        v70 = this->fields._material;
        if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        }
        UnityEngine_Graphics__Blit_41600616(v61, (UnityEngine_RenderTexture_o *)v55, v70, 1, 0LL);
        ++v57;
        v58 += 8LL;
        if ( (__int64)v57 >= this->fields._iteration )
        {
          v61 = (UnityEngine_Texture_o *)v55;
          break;
        }
      }
      if ( (int)v57 - 2 >= 0 )
      {
        v71 = (unsigned int)v57 - 2LL;
        v72 = 8LL * (unsigned int)v57 + 16;
        while ( 1 )
        {
          v73 = this->fields._renderTextures;
          if ( !v73 )
            break;
          if ( v71 >= v73->max_length )
            goto LABEL_89;
          v55 = *(System_Int32_array ***)((char *)&v73->obj.klass + v72);
          v74 = this->fields._material;
          if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          }
          UnityEngine_Graphics__Blit_41600616(v61, (UnityEngine_RenderTexture_o *)v55, v74, 2, 0LL);
          v81 = this->fields._renderTextures;
          if ( !v81 )
            break;
          if ( v71 >= v81->max_length )
            goto LABEL_89;
          *(Il2CppClass **)((char *)&v81->obj.klass + v72) = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)((char *)v81 + v72), 0LL, v75, v76, v77, v78, v79, v80);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v61, 0LL);
          --v71;
          v72 -= 8LL;
          v61 = (UnityEngine_Texture_o *)v55;
          if ( (v71 & 0x80000000) != 0 )
            goto LABEL_52;
        }
LABEL_88:
        sub_B5D69C(Temporary_35679768, v49);
      }
      v55 = (System_Int32_array **)v61;
    }
LABEL_52:
    v82 = this->fields._rt0;
    v83 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_41600616((UnityEngine_Texture_o *)v55, v82, v83, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v55, 0LL);
    drawShader = this->fields._drawShader;
    v85 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v85, drawShader, 0LL);
    if ( !v85 )
      goto LABEL_88;
    UnityEngine_Material__set_mainTexture(v85, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_41623368 = UnityEngine_Material__HasProperty_41623368(v85, (System_String_o *)StringLiteral_16332/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_41623368 )
      UnityEngine_Material__SetColor(v85, (System_String_o *)StringLiteral_16332/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v85, *(UnityEngine_Color_o *)&r, 0LL);
    Temporary_35679768 = (__int64)this->fields._renderer;
    if ( !Temporary_35679768 )
      goto LABEL_88;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Temporary_35679768, v85, 0LL);
    Temporary_35679768 = (__int64)this->fields._rt0;
    if ( !Temporary_35679768 )
      goto LABEL_88;
    Temporary_35679768 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_35679768 + 376LL))(
                           Temporary_35679768,
                           *(_QWORD *)(*(_QWORD *)Temporary_35679768 + 384LL));
    v91 = this->fields._rt0;
    if ( !v91 )
      goto LABEL_88;
    v92 = Temporary_35679768;
    v93 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v91->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v91->klass->vtable._7_set_height.methodPtr);
    v94 = (UnityEngine_Texture2D_o *)sub_B5D694(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35722716(v94, v92, v93, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    Temporary_35679768 = (__int64)this->fields._rt0;
    if ( !Temporary_35679768 )
      goto LABEL_88;
    Temporary_35679768 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_35679768 + 376LL))(
                           Temporary_35679768,
                           *(_QWORD *)(*(_QWORD *)Temporary_35679768 + 384LL));
    v95 = this->fields._rt0;
    if ( !v95 )
      goto LABEL_88;
    v96 = Temporary_35679768;
    v97 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v95->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v95->klass->vtable._7_set_height.methodPtr);
    v121.fields.m_Width = (float)v96;
    v121.fields.m_Height = (float)v97;
    v121.fields.m_XMin = 0.0;
    v121.fields.m_YMin = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v121, v98, v99, v100, v101, &methoda);
    if ( !v94 )
      goto LABEL_88;
    *(_QWORD *)&v122.fields.m_XMin = methoda.methodPointer;
    *(_QWORD *)&v122.fields.m_Width = methoda.invoker_method;
    UnityEngine_Texture2D__ReadPixels_35724916(v94, v122, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_35724740(v94, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v103 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v103 >= 1 )
      {
        v104 = 0LL;
        while ( v104 < (unsigned int)v103 )
        {
          v105 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v104];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_35679768 = UnityEngine_Object__op_Equality(v105, 0LL, 0LL);
          if ( (Temporary_35679768 & 1) == 0 )
          {
            if ( !v105 )
              goto LABEL_88;
            *(UnityEngine_ParticleSystem_ShapeModule_o *)&methoda.slot = UnityEngine_ParticleSystem__get_shape(
                                                                           (UnityEngine_ParticleSystem_o *)v105,
                                                                           0LL);
            v114.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.slot;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v114, v94, 0LL);
          }
          LODWORD(v103) = shapeSettingParticles->max_length;
          if ( (__int64)++v104 >= (int)v103 )
            goto LABEL_76;
        }
LABEL_89:
        v110 = sub_B5D6C8(Temporary_35679768);
        sub_B5D668(v110, 0LL);
      }
    }
LABEL_76:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v107 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v107 >= 1 )
      {
        v108 = 0LL;
        while ( v108 < (unsigned int)v107 )
        {
          v109 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v108];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_35679768 = UnityEngine_Object__op_Equality(v109, 0LL, 0LL);
          if ( (Temporary_35679768 & 1) == 0 )
          {
            if ( !v109 )
              goto LABEL_88;
            methoda.genericMethod = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v109, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(
              (UnityEngine_ParticleSystem_MinMaxGradient_o *)&methoda,
              this->fields._particleColor,
              0LL);
            v115.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.genericMethod;
            *(_QWORD *)&v112.fields.m_ColorMax.fields.b = methoda.rgctx_data;
            *(_OWORD *)&v112.fields.m_GradientMax = *(_OWORD *)&methoda.name;
            *(_OWORD *)&v112.fields.m_ColorMin.fields.b = *(_OWORD *)&methoda.return_type;
            *(_OWORD *)&v112.fields.m_Mode = *(_OWORD *)&methoda.methodPointer;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v115, &v112, 0LL);
          }
          LODWORD(v107) = colorSettingParticles->max_length;
          if ( (__int64)++v108 >= (int)v107 )
            return;
        }
        goto LABEL_89;
      }
    }
  }
}


void __fastcall FGOEdgeBlur__Initialize(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Object_o *texture; // x20
  _BOOL8 v21; // x0
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x8
  int max_length; // w8
  unsigned int v24; // w9
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x8
  int v26; // w8
  unsigned int v27; // w9
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v38; // x8
  int32_t v39; // w20
  int32_t v40; // w21
  UnityEngine_RenderTexture_o *v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  intptr_t v48; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x10
  struct UnityEngine_Renderer_o *v58; // x1
  struct UnityEngine_Renderer_o **p_renderer; // x19
  __int64 v60; // x0
  System_RuntimeTypeHandle_o v61; // 0:w0.4

  if ( (byte_42E7AAA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_RenderTexture_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Renderer_var, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Renderer_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Type_TypeInfo, v17, v18, v19);
    byte_42E7AAA = 1;
  }
  if ( !this->fields._isInitialized )
  {
    texture = (UnityEngine_Object_o *)this->fields._texture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = UnityEngine_Object__op_Equality(texture, 0LL, 0LL);
    if ( !v21 )
    {
      shapeSettingParticles = this->fields._shapeSettingParticles;
      if ( shapeSettingParticles )
      {
        max_length = shapeSettingParticles->max_length;
        if ( max_length >= 1 )
        {
          v24 = 0;
          while ( v24 < max_length )
          {
            if ( (int)++v24 >= max_length )
              goto LABEL_13;
          }
LABEL_32:
          v60 = sub_B5D6C8(v21);
          sub_B5D668(v60, 0LL);
        }
      }
LABEL_13:
      colorSettingParticles = this->fields._colorSettingParticles;
      if ( colorSettingParticles )
      {
        v26 = colorSettingParticles->max_length;
        if ( v26 >= 1 )
        {
          v27 = 0;
          while ( v27 < v26 )
          {
            if ( (int)++v27 >= v26 )
              goto LABEL_18;
          }
          goto LABEL_32;
        }
      }
LABEL_18:
      edgeShader = this->fields._edgeShader;
      v29 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v29, edgeShader, 0LL);
      this->fields._material = v29;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._material,
        (System_Int32_array **)v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v38 = this->fields._texture) == 0LL) )
      {
        sub_B5D69C(material, v36);
      }
      v39 = (int)material;
      v40 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v38->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v38->klass->vtable._7_set_height.methodPtr);
      v41 = (UnityEngine_RenderTexture_o *)sub_B5D694(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_35678584(v41, v39, v40, 0, 0, 0LL);
      this->fields._rt0 = v41;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._rt0,
        (System_Int32_array **)v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      v48 = (int)UnityEngine_Renderer_var;
      if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Type_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      }
      v61.fields.value = v48;
      TypeFromHandle = System_Type__GetTypeFromHandle(v61, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component
        && (v57 = *(&UnityEngine_Renderer_TypeInfo->_2.bitflags2 + 1),
            *(&Component->klass->_2.bitflags2 + 1) >= (unsigned int)v57) )
      {
        if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[v57 - 1] == UnityEngine_Renderer_TypeInfo )
          v58 = (struct UnityEngine_Renderer_o *)Component;
        else
          v58 = 0LL;
      }
      else
      {
        v58 = 0LL;
      }
      this->fields._renderer = v58;
      p_renderer = &this->fields._renderer;
      sub_B5D560((BattleServantConfConponent_o *)p_renderer, (System_Int32_array **)v58, v51, v52, v53, v54, v55, v56);
      *((_BYTE *)p_renderer + 32) = 1;
    }
  }
}


void __fastcall FGOEdgeBlur__OnDestroy(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FGOEdgeBlur_o *v8; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = this;
  this->fields._material = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._material, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields._rt0 = 0LL;
  v8 = (FGOEdgeBlur_o *)((char *)v8 + 152);
  sub_B5D560((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LOBYTE(v8->fields._texture) = 0;
}


UnityEngine_Color_o __fastcall FGOEdgeBlur__get_Color(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._color.fields.r;
  g = this->fields._color.fields.g;
  b = this->fields._color.fields.b;
  a = this->fields._color.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


int32_t __fastcall FGOEdgeBlur__get_Level(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  return this->fields._iteration;
}


UnityEngine_Color_o __fastcall FGOEdgeBlur__get_ParticleColor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._particleColor.fields.r;
  g = this->fields._particleColor.fields.g;
  b = this->fields._particleColor.fields.b;
  a = this->fields._particleColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_Rect_o __fastcall FGOEdgeBlur__get_Rect(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields._Rect.fields.m_XMin;
  m_YMin = this->fields._Rect.fields.m_YMin;
  m_Width = this->fields._Rect.fields.m_Width;
  m_Height = this->fields._Rect.fields.m_Height;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


UnityEngine_Texture_o *__fastcall FGOEdgeBlur__get_Texture(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  return this->fields._texture;
}


float __fastcall FGOEdgeBlur__get_Thickness(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  return this->fields._thickness;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGOEdgeBlur__setMaskImagePosition(
        FGOEdgeBlur_o *this,
        UnityEngine_Vector3_o p,
        const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x19
  int max_length; // w8
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v8; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v10; // x0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  shapeSettingParticles = this->fields._shapeSettingParticles;
  if ( shapeSettingParticles )
  {
    max_length = shapeSettingParticles->max_length;
    if ( max_length >= 1 )
    {
      z = p.fields.z;
      y = p.fields.y;
      x = p.fields.x;
      v8 = 0LL;
      do
      {
        if ( (unsigned int)v8 >= max_length )
        {
          v10 = sub_B5D6C8(this);
          sub_B5D668(v10, 0LL);
        }
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_B5D69C(transform, method);
        }
        v11.fields.x = x;
        v11.fields.y = y;
        v11.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v11, 0LL);
        max_length = shapeSettingParticles->max_length;
        ++v8;
      }
      while ( (int)v8 < max_length );
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGOEdgeBlur__set_Color(FGOEdgeBlur_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  this->fields._color = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGOEdgeBlur__set_Level(FGOEdgeBlur_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iteration = value;
  FGOEdgeBlur__Blur(this, *(const MethodInfo **)&value);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGOEdgeBlur__set_ParticleColor(
        FGOEdgeBlur_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._particleColor = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGOEdgeBlur__set_Rect(FGOEdgeBlur_o *this, UnityEngine_Rect_o value, const MethodInfo *method)
{
  this->fields._Rect = value;
  FGOEdgeBlur__Blur(this, method);
}


void __fastcall FGOEdgeBlur__set_Texture(FGOEdgeBlur_o *this, UnityEngine_Texture_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this->fields._texture = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._texture,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  FGOEdgeBlur__Blur(this, v9);
}


void __fastcall FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}