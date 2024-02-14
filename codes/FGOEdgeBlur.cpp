void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  __int64 v7; // x1
  struct UnityEngine_RenderTexture_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Single_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UnityEngine_Rect_o v22; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42141AB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_RenderTexture___TypeInfo, method);
    sub_B0D8A4(&float___TypeInfo, v7);
    byte_42141AB = 1;
  }
  v23.fields.m_YMin = 0.25195;
  v23.fields.m_Width = 1.0;
  v23.fields.m_XMin = 0.0;
  v23.fields.m_Height = 1.0;
  v22 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v23, v2, v3, v4, v5, (const MethodInfo *)&v22);
  this->fields._Rect = v22;
  *(_OWORD *)&this->fields._thickness = xmmword_3203620;
  this->fields._iteration = 4;
  this->fields._color = UnityEngine_Color__get_white(0LL);
  this->fields._particleColor = UnityEngine_Color__get_white(0LL);
  v8 = (struct UnityEngine_RenderTexture_array *)sub_B0D8BC(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._renderTextures,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct System_Single_array *)sub_B0D8BC(float___TypeInfo, 10LL);
  this->fields._weights = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._weights,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *texture; // x20
  int v14; // s0
  UnityEngine_Material_o *material; // x20
  float m_XMin; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s7
  __int64 Temporary_34994808; // x0
  UnityEngine_Texture_o *v27; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v29; // x21
  struct UnityEngine_RenderTexture_o *v30; // x8
  int v31; // w22
  System_Int32_array **v32; // x20
  int v33; // w23
  unsigned __int64 v34; // x27
  __int64 v35; // x28
  int v36; // w8
  int v37; // w9
  UnityEngine_Texture_o *v38; // x21
  struct UnityEngine_RenderTexture_array *renderTextures; // x24
  int32_t format; // w0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Material_o *v47; // x24
  unsigned __int64 v48; // x23
  __int64 v49; // x24
  struct UnityEngine_RenderTexture_array *v50; // x8
  UnityEngine_Material_o *v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UnityEngine_RenderTexture_array *v58; // x8
  UnityEngine_RenderTexture_o *v59; // x21
  UnityEngine_Material_o *v60; // x22
  UnityEngine_Shader_o *drawShader; // x21
  __int64 v62; // x1
  __int64 v63; // x2
  UnityEngine_Material_o *v64; // x20
  bool HasProperty_40813076; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v70; // x8
  int32_t v71; // w21
  int32_t v72; // w22
  __int64 v73; // x1
  __int64 v74; // x2
  UnityEngine_Texture2D_o *v75; // x20
  struct UnityEngine_RenderTexture_o *v76; // x8
  int v77; // w21
  int v78; // w0
  float v79; // s4
  float v80; // s5
  float v81; // s6
  float v82; // s7
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v84; // x8
  unsigned __int64 v85; // x23
  UnityEngine_Object_o *v86; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v88; // x8
  unsigned __int64 v89; // x22
  UnityEngine_Object_o *v90; // x20
  __int64 v91; // x0
  __int64 v92; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v93; // [xsp+0h] [xbp-F0h] BYREF
  MethodInfo methoda; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v95; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v96; // 0:x0.8
  UnityEngine_Rect_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42141AA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Graphics_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Texture2D_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_16148/*"_Weights"*/, v6);
    sub_B0D8A4(&StringLiteral_16134/*"_Threshold"*/, v7);
    sub_B0D8A4(&StringLiteral_16050/*"_Intensity"*/, v8);
    sub_B0D8A4(&StringLiteral_16187/*"_customColor0"*/, v9);
    sub_B0D8A4(&StringLiteral_16096/*"_Rect"*/, v10);
    sub_B0D8A4(&StringLiteral_16131/*"_Thickness"*/, v11);
    sub_B0D8A4(&StringLiteral_16076/*"_Offset"*/, v12);
    byte_42141AA = 1;
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
    v97.fields.m_XMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v14, (const MethodInfo *)&this->fields._Rect);
    m_XMin = v97.fields.m_XMin;
    v98.fields.m_XMin = UnityEngine_Rect__get_yMin(v97, (const MethodInfo *)&this->fields._Rect);
    v20 = v98.fields.m_XMin;
    v99.fields.m_XMin = UnityEngine_Rect__get_xMax(v98, (const MethodInfo *)&this->fields._Rect);
    v21 = v99.fields.m_XMin;
    v100.fields.w = UnityEngine_Rect__get_yMax(v99, (const MethodInfo *)&this->fields._Rect);
    v100.fields.x = m_XMin;
    v100.fields.y = v20;
    v100.fields.z = v21;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v100, v22, v23, v24, v25, &methoda);
    if ( !material )
      goto LABEL_88;
    *(_QWORD *)&v101.fields.x = methoda.methodPointer;
    *(_QWORD *)&v101.fields.z = methoda.invoker_method;
    UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_16096/*"_Rect"*/, v101, 0LL);
    Temporary_34994808 = (__int64)this->fields._material;
    if ( !Temporary_34994808 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_34994808,
      (System_String_o *)StringLiteral_16131/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    Temporary_34994808 = (__int64)this->fields._material;
    if ( !Temporary_34994808 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_34994808,
      (System_String_o *)StringLiteral_16134/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    Temporary_34994808 = (__int64)this->fields._material;
    if ( !Temporary_34994808 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_34994808,
      (System_String_o *)StringLiteral_16050/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    Temporary_34994808 = (__int64)this->fields._material;
    if ( !Temporary_34994808 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_34994808,
      (System_String_o *)StringLiteral_16076/*"_Offset"*/,
      this->fields._offset,
      0LL);
    Temporary_34994808 = (__int64)this->fields._material;
    if ( !Temporary_34994808 )
      goto LABEL_88;
    UnityEngine_Material__SetFloatArray_40816408(
      (UnityEngine_Material_o *)Temporary_34994808,
      (System_String_o *)StringLiteral_16148/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v27 = this->fields._texture;
    rt0 = this->fields._rt0;
    v29 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_40790324(v27, rt0, v29, 0, 0LL);
    Temporary_34994808 = (__int64)this->fields._rt0;
    if ( !Temporary_34994808 )
      goto LABEL_88;
    Temporary_34994808 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_34994808 + 376LL))(
                           Temporary_34994808,
                           *(_QWORD *)(*(_QWORD *)Temporary_34994808 + 384LL));
    v30 = this->fields._rt0;
    if ( !v30 )
      goto LABEL_88;
    v31 = Temporary_34994808;
    Temporary_34994808 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v30->klass->vtable._6_get_height.method)(
                           this->fields._rt0,
                           v30->klass->vtable._7_set_height.methodPtr);
    v32 = (System_Int32_array **)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v33 = Temporary_34994808;
      v34 = 0LL;
      v35 = 32LL;
      while ( 1 )
      {
        v36 = v31 >= 0 ? v31 : v31 + 1;
        v37 = v33 >= 0 ? v33 : v33 + 1;
        v38 = (UnityEngine_Texture_o *)v32;
        if ( v33 < 32 || v31 < 32 )
          break;
        Temporary_34994808 = (__int64)this->fields._rt0;
        if ( !Temporary_34994808 )
          goto LABEL_88;
        renderTextures = this->fields._renderTextures;
        v31 = v36 >> 1;
        v33 = v37 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)Temporary_34994808, 0LL);
        Temporary_34994808 = (__int64)UnityEngine_RenderTexture__GetTemporary_34994808(v31, v33, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_88;
        v32 = (System_Int32_array **)Temporary_34994808;
        if ( Temporary_34994808 )
        {
          Temporary_34994808 = sub_B0D964(Temporary_34994808, renderTextures->obj.klass->_1.element_class);
          if ( !Temporary_34994808 )
          {
            v92 = sub_B0D99C(0LL);
            sub_B0D948(v92, 0LL);
          }
        }
        if ( v34 >= renderTextures->max_length )
          goto LABEL_89;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v35) = (Il2CppClass *)v32;
        sub_B0D840((BattleServantConfConponent_o *)((char *)renderTextures + v35), v32, v41, v42, v43, v44, v45, v46);
        v47 = this->fields._material;
        if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        }
        UnityEngine_Graphics__Blit_40790324(v38, (UnityEngine_RenderTexture_o *)v32, v47, 1, 0LL);
        ++v34;
        v35 += 8LL;
        if ( (__int64)v34 >= this->fields._iteration )
        {
          v38 = (UnityEngine_Texture_o *)v32;
          break;
        }
      }
      if ( (int)v34 - 2 >= 0 )
      {
        v48 = (unsigned int)v34 - 2LL;
        v49 = 8LL * (unsigned int)v34 + 16;
        while ( 1 )
        {
          v50 = this->fields._renderTextures;
          if ( !v50 )
            break;
          if ( v48 >= v50->max_length )
            goto LABEL_89;
          v32 = *(System_Int32_array ***)((char *)&v50->obj.klass + v49);
          v51 = this->fields._material;
          if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          }
          UnityEngine_Graphics__Blit_40790324(v38, (UnityEngine_RenderTexture_o *)v32, v51, 2, 0LL);
          v58 = this->fields._renderTextures;
          if ( !v58 )
            break;
          if ( v48 >= v58->max_length )
            goto LABEL_89;
          *(Il2CppClass **)((char *)&v58->obj.klass + v49) = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)((char *)v58 + v49), 0LL, v52, v53, v54, v55, v56, v57);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v38, 0LL);
          --v48;
          v49 -= 8LL;
          v38 = (UnityEngine_Texture_o *)v32;
          if ( (v48 & 0x80000000) != 0 )
            goto LABEL_52;
        }
LABEL_88:
        sub_B0D97C(Temporary_34994808);
      }
      v32 = (System_Int32_array **)v38;
    }
LABEL_52:
    v59 = this->fields._rt0;
    v60 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_40790324((UnityEngine_Texture_o *)v32, v59, v60, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v32, 0LL);
    drawShader = this->fields._drawShader;
    v64 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v62, v63);
    UnityEngine_Material___ctor(v64, drawShader, 0LL);
    if ( !v64 )
      goto LABEL_88;
    UnityEngine_Material__set_mainTexture(v64, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_40813076 = UnityEngine_Material__HasProperty_40813076(v64, (System_String_o *)StringLiteral_16187/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_40813076 )
      UnityEngine_Material__SetColor(v64, (System_String_o *)StringLiteral_16187/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v64, *(UnityEngine_Color_o *)&r, 0LL);
    Temporary_34994808 = (__int64)this->fields._renderer;
    if ( !Temporary_34994808 )
      goto LABEL_88;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Temporary_34994808, v64, 0LL);
    Temporary_34994808 = (__int64)this->fields._rt0;
    if ( !Temporary_34994808 )
      goto LABEL_88;
    Temporary_34994808 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_34994808 + 376LL))(
                           Temporary_34994808,
                           *(_QWORD *)(*(_QWORD *)Temporary_34994808 + 384LL));
    v70 = this->fields._rt0;
    if ( !v70 )
      goto LABEL_88;
    v71 = Temporary_34994808;
    v72 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v70->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v70->klass->vtable._7_set_height.methodPtr);
    v75 = (UnityEngine_Texture2D_o *)sub_B0D974(UnityEngine_Texture2D_TypeInfo, v73, v74);
    UnityEngine_Texture2D___ctor_35037652(v75, v71, v72, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    Temporary_34994808 = (__int64)this->fields._rt0;
    if ( !Temporary_34994808 )
      goto LABEL_88;
    Temporary_34994808 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_34994808 + 376LL))(
                           Temporary_34994808,
                           *(_QWORD *)(*(_QWORD *)Temporary_34994808 + 384LL));
    v76 = this->fields._rt0;
    if ( !v76 )
      goto LABEL_88;
    v77 = Temporary_34994808;
    v78 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v76->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v76->klass->vtable._7_set_height.methodPtr);
    v102.fields.m_Width = (float)v77;
    v102.fields.m_Height = (float)v78;
    v102.fields.m_XMin = 0.0;
    v102.fields.m_YMin = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v102, v79, v80, v81, v82, &methoda);
    if ( !v75 )
      goto LABEL_88;
    *(_QWORD *)&v103.fields.m_XMin = methoda.methodPointer;
    *(_QWORD *)&v103.fields.m_Width = methoda.invoker_method;
    UnityEngine_Texture2D__ReadPixels_35039852(v75, v103, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_35039676(v75, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v84 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v84 >= 1 )
      {
        v85 = 0LL;
        while ( v85 < (unsigned int)v84 )
        {
          v86 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v85];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_34994808 = UnityEngine_Object__op_Equality(v86, 0LL, 0LL);
          if ( (Temporary_34994808 & 1) == 0 )
          {
            if ( !v86 )
              goto LABEL_88;
            *(UnityEngine_ParticleSystem_ShapeModule_o *)&methoda.slot = UnityEngine_ParticleSystem__get_shape(
                                                                           (UnityEngine_ParticleSystem_o *)v86,
                                                                           0LL);
            v95.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.slot;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v95, v75, 0LL);
          }
          LODWORD(v84) = shapeSettingParticles->max_length;
          if ( (__int64)++v85 >= (int)v84 )
            goto LABEL_76;
        }
LABEL_89:
        v91 = sub_B0D9A8(Temporary_34994808);
        sub_B0D948(v91, 0LL);
      }
    }
LABEL_76:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v88 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v88 >= 1 )
      {
        v89 = 0LL;
        while ( v89 < (unsigned int)v88 )
        {
          v90 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v89];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_34994808 = UnityEngine_Object__op_Equality(v90, 0LL, 0LL);
          if ( (Temporary_34994808 & 1) == 0 )
          {
            if ( !v90 )
              goto LABEL_88;
            methoda.genericMethod = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v90, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(
              (UnityEngine_ParticleSystem_MinMaxGradient_o *)&methoda,
              this->fields._particleColor,
              0LL);
            v96.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.genericMethod;
            *(_QWORD *)&v93.fields.m_ColorMax.fields.b = methoda.rgctx_data;
            *(_OWORD *)&v93.fields.m_GradientMax = *(_OWORD *)&methoda.name;
            *(_OWORD *)&v93.fields.m_ColorMin.fields.b = *(_OWORD *)&methoda.return_type;
            *(_OWORD *)&v93.fields.m_Mode = *(_OWORD *)&methoda.methodPointer;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v96, &v93, 0LL);
          }
          LODWORD(v88) = colorSettingParticles->max_length;
          if ( (__int64)++v89 >= (int)v88 )
            return;
        }
        goto LABEL_89;
      }
    }
  }
}


void __fastcall FGOEdgeBlur__Initialize(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *texture; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x8
  int max_length; // w8
  unsigned int v14; // w9
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x8
  int v16; // w8
  unsigned int v17; // w9
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v27; // x8
  int32_t v28; // w20
  int32_t v29; // w21
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_RenderTexture_o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  intptr_t v39; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x10
  struct UnityEngine_Renderer_o *v49; // x1
  struct UnityEngine_Renderer_o **p_renderer; // x19
  __int64 v51; // x0
  System_RuntimeTypeHandle_o v52; // 0:w0.4

  if ( (byte_42141A9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_RenderTexture_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Renderer_var, v5);
    sub_B0D8A4(&UnityEngine_Renderer_TypeInfo, v6);
    sub_B0D8A4(&System_Type_TypeInfo, v7);
    byte_42141A9 = 1;
  }
  if ( !this->fields._isInitialized )
  {
    texture = (UnityEngine_Object_o *)this->fields._texture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Equality(texture, 0LL, 0LL);
    if ( !v9 )
    {
      shapeSettingParticles = this->fields._shapeSettingParticles;
      if ( shapeSettingParticles )
      {
        max_length = shapeSettingParticles->max_length;
        if ( max_length >= 1 )
        {
          v14 = 0;
          while ( v14 < max_length )
          {
            if ( (int)++v14 >= max_length )
              goto LABEL_13;
          }
LABEL_32:
          v51 = sub_B0D9A8(v9);
          sub_B0D948(v51, 0LL);
        }
      }
LABEL_13:
      colorSettingParticles = this->fields._colorSettingParticles;
      if ( colorSettingParticles )
      {
        v16 = colorSettingParticles->max_length;
        if ( v16 >= 1 )
        {
          v17 = 0;
          while ( v17 < v16 )
          {
            if ( (int)++v17 >= v16 )
              goto LABEL_18;
          }
          goto LABEL_32;
        }
      }
LABEL_18:
      edgeShader = this->fields._edgeShader;
      v19 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v10, v11);
      UnityEngine_Material___ctor(v19, edgeShader, 0LL);
      this->fields._material = v19;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields._material,
        (System_Int32_array **)v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v27 = this->fields._texture) == 0LL) )
      {
        sub_B0D97C(material);
      }
      v28 = (int)material;
      v29 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v27->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v27->klass->vtable._7_set_height.methodPtr);
      v32 = (UnityEngine_RenderTexture_o *)sub_B0D974(UnityEngine_RenderTexture_TypeInfo, v30, v31);
      UnityEngine_RenderTexture___ctor_34993624(v32, v28, v29, 0, 0, 0LL);
      this->fields._rt0 = v32;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields._rt0,
        (System_Int32_array **)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v39 = (int)UnityEngine_Renderer_var;
      if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Type_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      }
      v52.fields.value = v39;
      TypeFromHandle = System_Type__GetTypeFromHandle(v52, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component
        && (v48 = *(&UnityEngine_Renderer_TypeInfo->_2.bitflags2 + 1),
            *(&Component->klass->_2.bitflags2 + 1) >= (unsigned int)v48) )
      {
        if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[v48 - 1] == UnityEngine_Renderer_TypeInfo )
          v49 = (struct UnityEngine_Renderer_o *)Component;
        else
          v49 = 0LL;
      }
      else
      {
        v49 = 0LL;
      }
      this->fields._renderer = v49;
      p_renderer = &this->fields._renderer;
      sub_B0D840((BattleServantConfConponent_o *)p_renderer, (System_Int32_array **)v49, v42, v43, v44, v45, v46, v47);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._material, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields._rt0 = 0LL;
  v8 = (FGOEdgeBlur_o *)((char *)v8 + 152);
  sub_B0D840((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
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
          v10 = sub_B0D9A8(this);
          sub_B0D948(v10, 0LL);
        }
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_B0D97C(transform);
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
  sub_B0D840(
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