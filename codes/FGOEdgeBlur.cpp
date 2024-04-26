void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  struct UnityEngine_RenderTexture_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Single_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UnityEngine_Rect_o v21; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435098D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_RenderTexture___TypeInfo);
    sub_B70694(&float___TypeInfo);
    byte_435098D = 1;
  }
  v22.fields.m_YMin = 0.25195;
  v22.fields.m_Width = 1.0;
  v22.fields.m_XMin = 0.0;
  v22.fields.m_Height = 1.0;
  v21 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v22, v2, v3, v4, v5, (const MethodInfo *)&v21);
  this->fields._Rect = v21;
  *(_OWORD *)&this->fields._thickness = xmmword_32E9B60;
  this->fields._iteration = 4;
  this->fields._color = UnityEngine_Color__get_white(0LL);
  this->fields._particleColor = UnityEngine_Color__get_white(0LL);
  v7 = (struct UnityEngine_RenderTexture_array *)sub_B706AC(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._renderTextures,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (struct System_Single_array *)sub_B706AC(float___TypeInfo, 10LL);
  this->fields._weights = v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._weights,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  UnityEngine_Object_o *texture; // x20
  int v4; // s0
  UnityEngine_Material_o *material; // x20
  float m_XMin; // s8
  float v10; // s9
  float v11; // s10
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  __int64 Temporary_36126740; // x0
  __int64 v17; // x1
  UnityEngine_Texture_o *v18; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v20; // x21
  struct UnityEngine_RenderTexture_o *v21; // x8
  int v22; // w22
  System_Int32_array **v23; // x20
  int v24; // w23
  unsigned __int64 v25; // x27
  __int64 v26; // x28
  int v27; // w8
  int v28; // w9
  UnityEngine_Texture_o *v29; // x21
  struct UnityEngine_RenderTexture_array *renderTextures; // x24
  int32_t format; // w0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Material_o *v38; // x24
  unsigned __int64 v39; // x23
  __int64 v40; // x24
  struct UnityEngine_RenderTexture_array *v41; // x8
  UnityEngine_Material_o *v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UnityEngine_RenderTexture_array *v49; // x8
  UnityEngine_RenderTexture_o *v50; // x21
  UnityEngine_Material_o *v51; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v53; // x20
  bool HasProperty_41121140; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v59; // x8
  int32_t v60; // w21
  int32_t v61; // w22
  UnityEngine_Texture2D_o *v62; // x20
  struct UnityEngine_RenderTexture_o *v63; // x8
  int v64; // w21
  int v65; // w0
  float v66; // s4
  float v67; // s5
  float v68; // s6
  float v69; // s7
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v71; // x8
  unsigned __int64 v72; // x23
  UnityEngine_Object_o *v73; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v75; // x8
  unsigned __int64 v76; // x22
  UnityEngine_Object_o *v77; // x20
  __int64 v78; // x0
  __int64 v79; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v80; // [xsp+0h] [xbp-F0h] BYREF
  MethodInfo methoda; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v82; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v83; // 0:x0.8
  UnityEngine_Rect_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435098C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Graphics_TypeInfo);
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_Texture2D_TypeInfo);
    sub_B70694(&StringLiteral_16336/*"_Weights"*/);
    sub_B70694(&StringLiteral_16319/*"_Threshold"*/);
    sub_B70694(&StringLiteral_16229/*"_Intensity"*/);
    sub_B70694(&StringLiteral_16376/*"_customColor0"*/);
    sub_B70694(&StringLiteral_16279/*"_Rect"*/);
    sub_B70694(&StringLiteral_16316/*"_Thickness"*/);
    sub_B70694(&StringLiteral_16256/*"_Offset"*/);
    byte_435098C = 1;
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
    v84.fields.m_XMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v4, (const MethodInfo *)&this->fields._Rect);
    m_XMin = v84.fields.m_XMin;
    v85.fields.m_XMin = UnityEngine_Rect__get_yMin(v84, (const MethodInfo *)&this->fields._Rect);
    v10 = v85.fields.m_XMin;
    v86.fields.m_XMin = UnityEngine_Rect__get_xMax(v85, (const MethodInfo *)&this->fields._Rect);
    v11 = v86.fields.m_XMin;
    v87.fields.w = UnityEngine_Rect__get_yMax(v86, (const MethodInfo *)&this->fields._Rect);
    v87.fields.x = m_XMin;
    v87.fields.y = v10;
    v87.fields.z = v11;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v87, v12, v13, v14, v15, &methoda);
    if ( !material )
      goto LABEL_88;
    *(_QWORD *)&v88.fields.x = methoda.methodPointer;
    *(_QWORD *)&v88.fields.z = methoda.invoker_method;
    UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_16279/*"_Rect"*/, v88, 0LL);
    Temporary_36126740 = (__int64)this->fields._material;
    if ( !Temporary_36126740 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_36126740,
      (System_String_o *)StringLiteral_16316/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    Temporary_36126740 = (__int64)this->fields._material;
    if ( !Temporary_36126740 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_36126740,
      (System_String_o *)StringLiteral_16319/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    Temporary_36126740 = (__int64)this->fields._material;
    if ( !Temporary_36126740 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_36126740,
      (System_String_o *)StringLiteral_16229/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    Temporary_36126740 = (__int64)this->fields._material;
    if ( !Temporary_36126740 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_36126740,
      (System_String_o *)StringLiteral_16256/*"_Offset"*/,
      this->fields._offset,
      0LL);
    Temporary_36126740 = (__int64)this->fields._material;
    if ( !Temporary_36126740 )
      goto LABEL_88;
    UnityEngine_Material__SetFloatArray_41125004(
      (UnityEngine_Material_o *)Temporary_36126740,
      (System_String_o *)StringLiteral_16336/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v18 = this->fields._texture;
    rt0 = this->fields._rt0;
    v20 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_41098388(v18, rt0, v20, 0, 0LL);
    Temporary_36126740 = (__int64)this->fields._rt0;
    if ( !Temporary_36126740 )
      goto LABEL_88;
    Temporary_36126740 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_36126740 + 376LL))(
                           Temporary_36126740,
                           *(_QWORD *)(*(_QWORD *)Temporary_36126740 + 384LL));
    v21 = this->fields._rt0;
    if ( !v21 )
      goto LABEL_88;
    v22 = Temporary_36126740;
    Temporary_36126740 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v21->klass->vtable._6_get_height.method)(
                           this->fields._rt0,
                           v21->klass->vtable._7_set_height.methodPtr);
    v23 = (System_Int32_array **)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v24 = Temporary_36126740;
      v25 = 0LL;
      v26 = 32LL;
      while ( 1 )
      {
        v27 = v22 >= 0 ? v22 : v22 + 1;
        v28 = v24 >= 0 ? v24 : v24 + 1;
        v29 = (UnityEngine_Texture_o *)v23;
        if ( v24 < 32 || v22 < 32 )
          break;
        Temporary_36126740 = (__int64)this->fields._rt0;
        if ( !Temporary_36126740 )
          goto LABEL_88;
        renderTextures = this->fields._renderTextures;
        v22 = v27 >> 1;
        v24 = v28 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)Temporary_36126740, 0LL);
        Temporary_36126740 = (__int64)UnityEngine_RenderTexture__GetTemporary_36126740(v22, v24, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_88;
        v23 = (System_Int32_array **)Temporary_36126740;
        if ( Temporary_36126740 )
        {
          Temporary_36126740 = sub_B70754(Temporary_36126740, renderTextures->obj.klass->_1.element_class);
          if ( !Temporary_36126740 )
          {
            v79 = sub_B7078C(0LL);
            sub_B70738(v79, 0LL);
          }
        }
        if ( v25 >= renderTextures->max_length )
          goto LABEL_89;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v26) = (Il2CppClass *)v23;
        sub_B70630((BattleServantConfConponent_o *)((char *)renderTextures + v26), v23, v32, v33, v34, v35, v36, v37);
        v38 = this->fields._material;
        if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        }
        UnityEngine_Graphics__Blit_41098388(v29, (UnityEngine_RenderTexture_o *)v23, v38, 1, 0LL);
        ++v25;
        v26 += 8LL;
        if ( (__int64)v25 >= this->fields._iteration )
        {
          v29 = (UnityEngine_Texture_o *)v23;
          break;
        }
      }
      if ( (int)v25 - 2 >= 0 )
      {
        v39 = (unsigned int)v25 - 2LL;
        v40 = 8LL * (unsigned int)v25 + 16;
        while ( 1 )
        {
          v41 = this->fields._renderTextures;
          if ( !v41 )
            break;
          if ( v39 >= v41->max_length )
            goto LABEL_89;
          v23 = *(System_Int32_array ***)((char *)&v41->obj.klass + v40);
          v42 = this->fields._material;
          if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          }
          UnityEngine_Graphics__Blit_41098388(v29, (UnityEngine_RenderTexture_o *)v23, v42, 2, 0LL);
          v49 = this->fields._renderTextures;
          if ( !v49 )
            break;
          if ( v39 >= v49->max_length )
            goto LABEL_89;
          *(Il2CppClass **)((char *)&v49->obj.klass + v40) = 0LL;
          sub_B70630((BattleServantConfConponent_o *)((char *)v49 + v40), 0LL, v43, v44, v45, v46, v47, v48);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v29, 0LL);
          --v39;
          v40 -= 8LL;
          v29 = (UnityEngine_Texture_o *)v23;
          if ( (v39 & 0x80000000) != 0 )
            goto LABEL_52;
        }
LABEL_88:
        sub_B7076C(Temporary_36126740, v17);
      }
      v23 = (System_Int32_array **)v29;
    }
LABEL_52:
    v50 = this->fields._rt0;
    v51 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_41098388((UnityEngine_Texture_o *)v23, v50, v51, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v23, 0LL);
    drawShader = this->fields._drawShader;
    v53 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v53, drawShader, 0LL);
    if ( !v53 )
      goto LABEL_88;
    UnityEngine_Material__set_mainTexture(v53, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_41121140 = UnityEngine_Material__HasProperty_41121140(v53, (System_String_o *)StringLiteral_16376/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_41121140 )
      UnityEngine_Material__SetColor(v53, (System_String_o *)StringLiteral_16376/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v53, *(UnityEngine_Color_o *)&r, 0LL);
    Temporary_36126740 = (__int64)this->fields._renderer;
    if ( !Temporary_36126740 )
      goto LABEL_88;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Temporary_36126740, v53, 0LL);
    Temporary_36126740 = (__int64)this->fields._rt0;
    if ( !Temporary_36126740 )
      goto LABEL_88;
    Temporary_36126740 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_36126740 + 376LL))(
                           Temporary_36126740,
                           *(_QWORD *)(*(_QWORD *)Temporary_36126740 + 384LL));
    v59 = this->fields._rt0;
    if ( !v59 )
      goto LABEL_88;
    v60 = Temporary_36126740;
    v61 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v59->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v59->klass->vtable._7_set_height.methodPtr);
    v62 = (UnityEngine_Texture2D_o *)sub_B70764(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_36169752(v62, v60, v61, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    Temporary_36126740 = (__int64)this->fields._rt0;
    if ( !Temporary_36126740 )
      goto LABEL_88;
    Temporary_36126740 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_36126740 + 376LL))(
                           Temporary_36126740,
                           *(_QWORD *)(*(_QWORD *)Temporary_36126740 + 384LL));
    v63 = this->fields._rt0;
    if ( !v63 )
      goto LABEL_88;
    v64 = Temporary_36126740;
    v65 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v63->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v63->klass->vtable._7_set_height.methodPtr);
    v89.fields.m_Width = (float)v64;
    v89.fields.m_Height = (float)v65;
    v89.fields.m_XMin = 0.0;
    v89.fields.m_YMin = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v89, v66, v67, v68, v69, &methoda);
    if ( !v62 )
      goto LABEL_88;
    *(_QWORD *)&v90.fields.m_XMin = methoda.methodPointer;
    *(_QWORD *)&v90.fields.m_Width = methoda.invoker_method;
    UnityEngine_Texture2D__ReadPixels_36171952(v62, v90, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_36171776(v62, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v71 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v71 >= 1 )
      {
        v72 = 0LL;
        while ( v72 < (unsigned int)v71 )
        {
          v73 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v72];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_36126740 = UnityEngine_Object__op_Equality(v73, 0LL, 0LL);
          if ( (Temporary_36126740 & 1) == 0 )
          {
            if ( !v73 )
              goto LABEL_88;
            *(UnityEngine_ParticleSystem_ShapeModule_o *)&methoda.slot = UnityEngine_ParticleSystem__get_shape(
                                                                           (UnityEngine_ParticleSystem_o *)v73,
                                                                           0LL);
            v82.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.slot;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v82, v62, 0LL);
          }
          LODWORD(v71) = shapeSettingParticles->max_length;
          if ( (__int64)++v72 >= (int)v71 )
            goto LABEL_76;
        }
LABEL_89:
        v78 = sub_B70798(Temporary_36126740);
        sub_B70738(v78, 0LL);
      }
    }
LABEL_76:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v75 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v75 >= 1 )
      {
        v76 = 0LL;
        while ( v76 < (unsigned int)v75 )
        {
          v77 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v76];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_36126740 = UnityEngine_Object__op_Equality(v77, 0LL, 0LL);
          if ( (Temporary_36126740 & 1) == 0 )
          {
            if ( !v77 )
              goto LABEL_88;
            methoda.genericMethod = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v77, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(
              (UnityEngine_ParticleSystem_MinMaxGradient_o *)&methoda,
              this->fields._particleColor,
              0LL);
            v83.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.genericMethod;
            *(_QWORD *)&v80.fields.m_ColorMax.fields.b = methoda.rgctx_data;
            *(_OWORD *)&v80.fields.m_GradientMax = *(_OWORD *)&methoda.name;
            *(_OWORD *)&v80.fields.m_ColorMin.fields.b = *(_OWORD *)&methoda.return_type;
            *(_OWORD *)&v80.fields.m_Mode = *(_OWORD *)&methoda.methodPointer;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v83, &v80, 0LL);
          }
          LODWORD(v75) = colorSettingParticles->max_length;
          if ( (__int64)++v76 >= (int)v75 )
            return;
        }
        goto LABEL_89;
      }
    }
  }
}


void __fastcall FGOEdgeBlur__Initialize(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x20
  _BOOL8 v4; // x0
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x8
  int max_length; // w8
  unsigned int v7; // w9
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x8
  int v9; // w8
  unsigned int v10; // w9
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v21; // x8
  int32_t v22; // w20
  int32_t v23; // w21
  UnityEngine_RenderTexture_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  intptr_t v31; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x10
  struct UnityEngine_Renderer_o *v41; // x1
  struct UnityEngine_Renderer_o **p_renderer; // x19
  __int64 v43; // x0
  System_RuntimeTypeHandle_o v44; // 0:w0.4

  if ( (byte_435098B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_RenderTexture_TypeInfo);
    sub_B70694(&UnityEngine_Renderer_var);
    sub_B70694(&UnityEngine_Renderer_TypeInfo);
    sub_B70694(&System_Type_TypeInfo);
    byte_435098B = 1;
  }
  if ( !this->fields._isInitialized )
  {
    texture = (UnityEngine_Object_o *)this->fields._texture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = UnityEngine_Object__op_Equality(texture, 0LL, 0LL);
    if ( !v4 )
    {
      shapeSettingParticles = this->fields._shapeSettingParticles;
      if ( shapeSettingParticles )
      {
        max_length = shapeSettingParticles->max_length;
        if ( max_length >= 1 )
        {
          v7 = 0;
          while ( v7 < max_length )
          {
            if ( (int)++v7 >= max_length )
              goto LABEL_13;
          }
LABEL_32:
          v43 = sub_B70798(v4);
          sub_B70738(v43, 0LL);
        }
      }
LABEL_13:
      colorSettingParticles = this->fields._colorSettingParticles;
      if ( colorSettingParticles )
      {
        v9 = colorSettingParticles->max_length;
        if ( v9 >= 1 )
        {
          v10 = 0;
          while ( v10 < v9 )
          {
            if ( (int)++v10 >= v9 )
              goto LABEL_18;
          }
          goto LABEL_32;
        }
      }
LABEL_18:
      edgeShader = this->fields._edgeShader;
      v12 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v12, edgeShader, 0LL);
      this->fields._material = v12;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._material,
        (System_Int32_array **)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v21 = this->fields._texture) == 0LL) )
      {
        sub_B7076C(material, v19);
      }
      v22 = (int)material;
      v23 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v21->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v21->klass->vtable._7_set_height.methodPtr);
      v24 = (UnityEngine_RenderTexture_o *)sub_B70764(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_36125556(v24, v22, v23, 0, 0, 0LL);
      this->fields._rt0 = v24;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._rt0,
        (System_Int32_array **)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      v31 = (int)UnityEngine_Renderer_var;
      if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Type_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      }
      v44.fields.value = v31;
      TypeFromHandle = System_Type__GetTypeFromHandle(v44, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component
        && (v40 = *(&UnityEngine_Renderer_TypeInfo->_2.bitflags2 + 1),
            *(&Component->klass->_2.bitflags2 + 1) >= (unsigned int)v40) )
      {
        if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[v40 - 1] == UnityEngine_Renderer_TypeInfo )
          v41 = (struct UnityEngine_Renderer_o *)Component;
        else
          v41 = 0LL;
      }
      else
      {
        v41 = 0LL;
      }
      this->fields._renderer = v41;
      p_renderer = &this->fields._renderer;
      sub_B70630((BattleServantConfConponent_o *)p_renderer, (System_Int32_array **)v41, v34, v35, v36, v37, v38, v39);
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields._material, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields._rt0 = 0LL;
  v8 = (FGOEdgeBlur_o *)((char *)v8 + 152);
  sub_B70630((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
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
          v10 = sub_B70798(this);
          sub_B70738(v10, 0LL);
        }
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_B7076C(transform, method);
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
  sub_B70630(
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