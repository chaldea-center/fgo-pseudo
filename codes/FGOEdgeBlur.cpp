void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  __int64 v7; // x1
  __int64 v8; // x2
  struct UnityEngine_RenderTexture_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x2
  struct System_Single_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UnityEngine_Rect_o v24; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FAD8C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_RenderTexture___TypeInfo, method);
    sub_B16FFC(&float___TypeInfo, v7);
    byte_40FAD8C = 1;
  }
  v25.fields.m_YMin = 0.25195;
  v25.fields.m_Width = 1.0;
  v25.fields.m_XMin = 0.0;
  v25.fields.m_Height = 1.0;
  v24 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v25, v2, v3, v4, v5, (const MethodInfo *)&v24);
  this->fields._Rect = v24;
  *(_OWORD *)&this->fields._thickness = xmmword_3136D90;
  this->fields._iteration = 4;
  this->fields._color = UnityEngine_Color__get_white(0LL);
  this->fields._particleColor = UnityEngine_Color__get_white(0LL);
  v9 = (struct UnityEngine_RenderTexture_array *)sub_B17014(UnityEngine_RenderTexture___TypeInfo, 6LL, v8);
  this->fields._renderTextures = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._renderTextures,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v17 = (struct System_Single_array *)sub_B17014(float___TypeInfo, 10LL, v16);
  this->fields._weights = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._weights,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  UnityEngine_Material_o *v26; // x0
  UnityEngine_Material_o *v27; // x0
  UnityEngine_Material_o *v28; // x0
  UnityEngine_Material_o *v29; // x0
  UnityEngine_Material_o *v30; // x0
  UnityEngine_Texture_o *v31; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v33; // x21
  struct UnityEngine_RenderTexture_o *v34; // x0
  int v35; // w0
  struct UnityEngine_RenderTexture_o *v36; // x8
  int v37; // w22
  UnityEngine_RenderTexture_o *Temporary_34868996; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_Int32_array **v41; // x20
  int v42; // w23
  unsigned __int64 v43; // x27
  __int64 v44; // x28
  int v45; // w8
  int v46; // w9
  UnityEngine_Texture_o *v47; // x21
  UnityEngine_RenderTexture_o *v48; // x0
  struct UnityEngine_RenderTexture_array *renderTextures; // x24
  int32_t format; // w0
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_Material_o *v56; // x24
  unsigned __int64 v57; // x23
  __int64 v58; // x24
  struct UnityEngine_RenderTexture_array *v59; // x8
  UnityEngine_Material_o *v60; // x22
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct UnityEngine_RenderTexture_array *v66; // x8
  UnityEngine_RenderTexture_o *v67; // x21
  UnityEngine_Material_o *v68; // x22
  UnityEngine_Shader_o *drawShader; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  UnityEngine_Material_o *v74; // x20
  bool HasProperty_40721564; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Renderer_o *renderer; // x0
  struct UnityEngine_RenderTexture_o *v81; // x0
  int32_t v82; // w0
  struct UnityEngine_RenderTexture_o *v83; // x8
  int32_t v84; // w21
  int32_t v85; // w22
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  UnityEngine_Texture2D_o *v90; // x20
  struct UnityEngine_RenderTexture_o *v91; // x0
  int v92; // w0
  struct UnityEngine_RenderTexture_o *v93; // x8
  int v94; // w21
  int v95; // w0
  float v96; // s4
  float v97; // s5
  float v98; // s6
  float v99; // s7
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v101; // x8
  unsigned __int64 v102; // x23
  UnityEngine_Object_o *v103; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v105; // x8
  unsigned __int64 v106; // x22
  UnityEngine_Object_o *v107; // x20
  UnityEngine_ParticleSystem_MinMaxGradient_o v108; // [xsp+0h] [xbp-F0h] BYREF
  MethodInfo methoda; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v110; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v111; // 0:x0.8
  UnityEngine_Rect_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FAD8B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Graphics_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Texture2D_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_16037, v6);
    sub_B16FFC(&StringLiteral_16023, v7);
    sub_B16FFC(&StringLiteral_15939, v8);
    sub_B16FFC(&StringLiteral_16076, v9);
    sub_B16FFC(&StringLiteral_15985, v10);
    sub_B16FFC(&StringLiteral_16020, v11);
    sub_B16FFC(&StringLiteral_15965, v12);
    byte_40FAD8B = 1;
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
    v112.fields.m_XMin = UnityEngine_Rect__get_xMin(
                           *(UnityEngine_Rect_o *)&v14,
                           (const MethodInfo *)&this->fields._Rect);
    m_XMin = v112.fields.m_XMin;
    v113.fields.m_XMin = UnityEngine_Rect__get_yMin(v112, (const MethodInfo *)&this->fields._Rect);
    v20 = v113.fields.m_XMin;
    v114.fields.m_XMin = UnityEngine_Rect__get_xMax(v113, (const MethodInfo *)&this->fields._Rect);
    v21 = v114.fields.m_XMin;
    v115.fields.w = UnityEngine_Rect__get_yMax(v114, (const MethodInfo *)&this->fields._Rect);
    v115.fields.x = m_XMin;
    v115.fields.y = v20;
    v115.fields.z = v21;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v115, v22, v23, v24, v25, &methoda);
    if ( !material )
      goto LABEL_88;
    *(_QWORD *)&v116.fields.x = methoda.methodPointer;
    *(_QWORD *)&v116.fields.z = methoda.invoker_method;
    UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_15985, v116, 0LL);
    v26 = this->fields._material;
    if ( !v26 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(v26, (System_String_o *)StringLiteral_16020, this->fields._thickness, 0LL);
    v27 = this->fields._material;
    if ( !v27 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(v27, (System_String_o *)StringLiteral_16023, this->fields._threshold, 0LL);
    v28 = this->fields._material;
    if ( !v28 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(v28, (System_String_o *)StringLiteral_15939, this->fields._intensity, 0LL);
    v29 = this->fields._material;
    if ( !v29 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(v29, (System_String_o *)StringLiteral_15965, this->fields._offset, 0LL);
    v30 = this->fields._material;
    if ( !v30 )
      goto LABEL_88;
    UnityEngine_Material__SetFloatArray_40724896(
      v30,
      (System_String_o *)StringLiteral_16037,
      this->fields._weights,
      0LL);
    v31 = this->fields._texture;
    rt0 = this->fields._rt0;
    v33 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_40698812(v31, rt0, v33, 0, 0LL);
    v34 = this->fields._rt0;
    if ( !v34 )
      goto LABEL_88;
    v35 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v34->klass->vtable._4_get_width.method)(
            v34,
            v34->klass->vtable._5_set_width.methodPtr);
    v36 = this->fields._rt0;
    if ( !v36 )
      goto LABEL_88;
    v37 = v35;
    Temporary_34868996 = (UnityEngine_RenderTexture_o *)((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v36->klass->vtable._6_get_height.method)(
                                                          this->fields._rt0,
                                                          v36->klass->vtable._7_set_height.methodPtr);
    v41 = (System_Int32_array **)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v42 = (int)Temporary_34868996;
      v43 = 0LL;
      v44 = 32LL;
      while ( 1 )
      {
        v45 = v37 >= 0 ? v37 : v37 + 1;
        v46 = v42 >= 0 ? v42 : v42 + 1;
        v47 = (UnityEngine_Texture_o *)v41;
        if ( v42 < 32 || v37 < 32 )
          break;
        v48 = this->fields._rt0;
        if ( !v48 )
          goto LABEL_88;
        renderTextures = this->fields._renderTextures;
        v37 = v45 >> 1;
        v42 = v46 >> 1;
        format = UnityEngine_RenderTexture__get_format(v48, 0LL);
        Temporary_34868996 = UnityEngine_RenderTexture__GetTemporary_34868996(v37, v42, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_88;
        v41 = (System_Int32_array **)Temporary_34868996;
        if ( Temporary_34868996 )
        {
          Temporary_34868996 = (UnityEngine_RenderTexture_o *)sub_B170BC(
                                                                Temporary_34868996,
                                                                renderTextures->obj.klass->_1.element_class);
          if ( !Temporary_34868996 )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( v43 >= renderTextures->max_length )
          goto LABEL_89;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v44) = (Il2CppClass *)v41;
        sub_B16F98((BattleServantConfConponent_o *)((char *)renderTextures + v44), v41, v40, v51, v52, v53, v54, v55);
        v56 = this->fields._material;
        if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        }
        UnityEngine_Graphics__Blit_40698812(v47, (UnityEngine_RenderTexture_o *)v41, v56, 1, 0LL);
        ++v43;
        v44 += 8LL;
        if ( (__int64)v43 >= this->fields._iteration )
        {
          v47 = (UnityEngine_Texture_o *)v41;
          break;
        }
      }
      if ( (int)v43 - 2 >= 0 )
      {
        v57 = (unsigned int)v43 - 2LL;
        v58 = 8LL * (unsigned int)v43 + 16;
        while ( 1 )
        {
          v59 = this->fields._renderTextures;
          if ( !v59 )
            break;
          if ( v57 >= v59->max_length )
            goto LABEL_89;
          v41 = *(System_Int32_array ***)((char *)&v59->obj.klass + v58);
          v60 = this->fields._material;
          if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          }
          UnityEngine_Graphics__Blit_40698812(v47, (UnityEngine_RenderTexture_o *)v41, v60, 2, 0LL);
          v66 = this->fields._renderTextures;
          if ( !v66 )
            break;
          if ( v57 >= v66->max_length )
            goto LABEL_89;
          *(Il2CppClass **)((char *)&v66->obj.klass + v58) = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)((char *)v66 + v58), 0LL, v40, v61, v62, v63, v64, v65);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v47, 0LL);
          --v57;
          v58 -= 8LL;
          v47 = (UnityEngine_Texture_o *)v41;
          if ( (v57 & 0x80000000) != 0 )
            goto LABEL_52;
        }
LABEL_88:
        sub_B170D4();
      }
      v41 = (System_Int32_array **)v47;
    }
LABEL_52:
    v67 = this->fields._rt0;
    v68 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_40698812((UnityEngine_Texture_o *)v41, v67, v68, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v41, 0LL);
    drawShader = this->fields._drawShader;
    v74 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v70, v71, v72, v73);
    UnityEngine_Material___ctor(v74, drawShader, 0LL);
    if ( !v74 )
      goto LABEL_88;
    UnityEngine_Material__set_mainTexture(v74, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_40721564 = UnityEngine_Material__HasProperty_40721564(v74, (System_String_o *)StringLiteral_16076, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_40721564 )
      UnityEngine_Material__SetColor(v74, (System_String_o *)StringLiteral_16076, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v74, *(UnityEngine_Color_o *)&r, 0LL);
    renderer = this->fields._renderer;
    if ( !renderer )
      goto LABEL_88;
    UnityEngine_Renderer__set_sharedMaterial(renderer, v74, 0LL);
    v81 = this->fields._rt0;
    if ( !v81 )
      goto LABEL_88;
    v82 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v81->klass->vtable._4_get_width.method)(
            v81,
            v81->klass->vtable._5_set_width.methodPtr);
    v83 = this->fields._rt0;
    if ( !v83 )
      goto LABEL_88;
    v84 = v82;
    v85 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v83->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v83->klass->vtable._7_set_height.methodPtr);
    v90 = (UnityEngine_Texture2D_o *)sub_B170CC(UnityEngine_Texture2D_TypeInfo, v86, v87, v88, v89);
    UnityEngine_Texture2D___ctor_34911796(v90, v84, v85, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    v91 = this->fields._rt0;
    if ( !v91 )
      goto LABEL_88;
    v92 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v91->klass->vtable._4_get_width.method)(
            v91,
            v91->klass->vtable._5_set_width.methodPtr);
    v93 = this->fields._rt0;
    if ( !v93 )
      goto LABEL_88;
    v94 = v92;
    v95 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v93->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v93->klass->vtable._7_set_height.methodPtr);
    v117.fields.m_Width = (float)v94;
    v117.fields.m_Height = (float)v95;
    v117.fields.m_XMin = 0.0;
    v117.fields.m_YMin = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v117, v96, v97, v98, v99, &methoda);
    if ( !v90 )
      goto LABEL_88;
    *(_QWORD *)&v118.fields.m_XMin = methoda.methodPointer;
    *(_QWORD *)&v118.fields.m_Width = methoda.invoker_method;
    UnityEngine_Texture2D__ReadPixels_34913996(v90, v118, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_34913820(v90, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v101 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v101 >= 1 )
      {
        v102 = 0LL;
        while ( v102 < (unsigned int)v101 )
        {
          v103 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v102];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_34868996 = (UnityEngine_RenderTexture_o *)UnityEngine_Object__op_Equality(v103, 0LL, 0LL);
          if ( ((unsigned __int8)Temporary_34868996 & 1) == 0 )
          {
            if ( !v103 )
              goto LABEL_88;
            *(UnityEngine_ParticleSystem_ShapeModule_o *)&methoda.slot = UnityEngine_ParticleSystem__get_shape(
                                                                           (UnityEngine_ParticleSystem_o *)v103,
                                                                           0LL);
            v110.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.slot;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v110, v90, 0LL);
          }
          LODWORD(v101) = shapeSettingParticles->max_length;
          if ( (__int64)++v102 >= (int)v101 )
            goto LABEL_76;
        }
LABEL_89:
        sub_B17100(Temporary_34868996, v39, v40);
        sub_B170A0();
      }
    }
LABEL_76:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v105 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v105 >= 1 )
      {
        v106 = 0LL;
        while ( v106 < (unsigned int)v105 )
        {
          v107 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v106];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_34868996 = (UnityEngine_RenderTexture_o *)UnityEngine_Object__op_Equality(v107, 0LL, 0LL);
          if ( ((unsigned __int8)Temporary_34868996 & 1) == 0 )
          {
            if ( !v107 )
              goto LABEL_88;
            methoda.genericMethod = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v107, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(
              (UnityEngine_ParticleSystem_MinMaxGradient_o *)&methoda,
              this->fields._particleColor,
              0LL);
            v111.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.genericMethod;
            *(_QWORD *)&v108.fields.m_ColorMax.fields.b = methoda.rgctx_data;
            *(_OWORD *)&v108.fields.m_GradientMax = *(_OWORD *)&methoda.name;
            *(_OWORD *)&v108.fields.m_ColorMin.fields.b = *(_OWORD *)&methoda.return_type;
            *(_OWORD *)&v108.fields.m_Mode = *(_OWORD *)&methoda.methodPointer;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v111, &v108, 0LL);
          }
          LODWORD(v105) = colorSettingParticles->max_length;
          if ( (__int64)++v106 >= (int)v105 )
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
  __int64 v12; // x3
  __int64 v13; // x4
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x8
  int max_length; // w8
  unsigned int v16; // w9
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x8
  int v18; // w8
  unsigned int v19; // w9
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v29; // x0
  int32_t v30; // w0
  struct UnityEngine_Texture_o *v31; // x8
  int32_t v32; // w20
  int32_t v33; // w21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  UnityEngine_RenderTexture_o *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  intptr_t v45; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x10
  struct UnityEngine_Renderer_o *v55; // x1
  struct UnityEngine_Renderer_o **p_renderer; // x19
  System_RuntimeTypeHandle_o v57; // 0:w0.4

  if ( (byte_40FAD8A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Material_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_RenderTexture_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Renderer_var, v5);
    sub_B16FFC(&UnityEngine_Renderer_TypeInfo, v6);
    sub_B16FFC(&System_Type_TypeInfo, v7);
    byte_40FAD8A = 1;
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
          v16 = 0;
          while ( v16 < max_length )
          {
            if ( (int)++v16 >= max_length )
              goto LABEL_13;
          }
LABEL_32:
          sub_B17100(v9, v10, v11);
          sub_B170A0();
        }
      }
LABEL_13:
      colorSettingParticles = this->fields._colorSettingParticles;
      if ( colorSettingParticles )
      {
        v18 = colorSettingParticles->max_length;
        if ( v18 >= 1 )
        {
          v19 = 0;
          while ( v19 < v18 )
          {
            if ( (int)++v19 >= v18 )
              goto LABEL_18;
          }
          goto LABEL_32;
        }
      }
LABEL_18:
      edgeShader = this->fields._edgeShader;
      v21 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v10, v11, v12, v13);
      UnityEngine_Material___ctor(v21, edgeShader, 0LL);
      this->fields._material = v21;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._material,
        (System_Int32_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL), (v29 = this->fields._texture) == 0LL)
        || (v30 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v29->klass->vtable._4_get_width.method)(
                    v29,
                    v29->klass->vtable._5_set_width.methodPtr),
            (v31 = this->fields._texture) == 0LL) )
      {
        sub_B170D4();
      }
      v32 = v30;
      v33 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v31->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v31->klass->vtable._7_set_height.methodPtr);
      v38 = (UnityEngine_RenderTexture_o *)sub_B170CC(UnityEngine_RenderTexture_TypeInfo, v34, v35, v36, v37);
      UnityEngine_RenderTexture___ctor_34867812(v38, v32, v33, 0, 0, 0LL);
      this->fields._rt0 = v38;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._rt0,
        (System_Int32_array **)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      v45 = (int)UnityEngine_Renderer_var;
      if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Type_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      }
      v57.fields.value = v45;
      TypeFromHandle = System_Type__GetTypeFromHandle(v57, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component
        && (v54 = *(&UnityEngine_Renderer_TypeInfo->_2.bitflags2 + 1),
            *(&Component->klass->_2.bitflags2 + 1) >= (unsigned int)v54) )
      {
        if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[v54 - 1] == UnityEngine_Renderer_TypeInfo )
          v55 = (struct UnityEngine_Renderer_o *)Component;
        else
          v55 = 0LL;
      }
      else
      {
        v55 = 0LL;
      }
      this->fields._renderer = v55;
      p_renderer = &this->fields._renderer;
      sub_B16F98((BattleServantConfConponent_o *)p_renderer, (System_Int32_array **)v55, v48, v49, v50, v51, v52, v53);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._material, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields._rt0 = 0LL;
  v8 = (FGOEdgeBlur_o *)((char *)v8 + 152);
  sub_B16F98((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v3; // x2
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x19
  int max_length; // w8
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x20
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  shapeSettingParticles = this->fields._shapeSettingParticles;
  if ( shapeSettingParticles )
  {
    max_length = shapeSettingParticles->max_length;
    if ( max_length >= 1 )
    {
      z = p.fields.z;
      y = p.fields.y;
      x = p.fields.x;
      v9 = 0LL;
      do
      {
        if ( (unsigned int)v9 >= max_length )
        {
          sub_B17100(this, method, v3);
          sub_B170A0();
        }
        v10 = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v9];
        if ( !v10 || (transform = UnityEngine_Component__get_transform(v10, 0LL)) == 0LL )
          sub_B170D4();
        v12.fields.x = x;
        v12.fields.y = y;
        v12.fields.z = z;
        UnityEngine_Transform__set_localPosition(transform, v12, 0LL);
        max_length = shapeSettingParticles->max_length;
        ++v9;
      }
      while ( (int)v9 < max_length );
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
  sub_B16F98(
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