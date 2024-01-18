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

  if ( (byte_4187816 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_RenderTexture___TypeInfo, method);
    sub_B2C35C(&float___TypeInfo, v7);
    byte_4187816 = 1;
  }
  v23.fields.m_YMin = 0.25195;
  v23.fields.m_Width = 1.0;
  v23.fields.m_XMin = 0.0;
  v23.fields.m_Height = 1.0;
  v22 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v23, v2, v3, v4, v5, (const MethodInfo *)&v22);
  this->fields._Rect = v22;
  *(_OWORD *)&this->fields._thickness = xmmword_31A1A90;
  this->fields._iteration = 4;
  this->fields._color = UnityEngine_Color__get_white(0LL);
  this->fields._particleColor = UnityEngine_Color__get_white(0LL);
  v8 = (struct UnityEngine_RenderTexture_array *)sub_B2C374(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._renderTextures,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct System_Single_array *)sub_B2C374(float___TypeInfo, 10LL);
  this->fields._weights = v15;
  sub_B2C2F8(
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
  __int64 Temporary_35374428; // x0
  __int64 v27; // x1
  UnityEngine_Texture_o *v28; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v30; // x21
  struct UnityEngine_RenderTexture_o *v31; // x8
  int v32; // w22
  System_Int32_array **v33; // x20
  int v34; // w23
  unsigned __int64 v35; // x27
  __int64 v36; // x28
  int v37; // w8
  int v38; // w9
  UnityEngine_Texture_o *v39; // x21
  struct UnityEngine_RenderTexture_array *renderTextures; // x24
  int32_t format; // w0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Material_o *v48; // x24
  unsigned __int64 v49; // x23
  __int64 v50; // x24
  struct UnityEngine_RenderTexture_array *v51; // x8
  UnityEngine_Material_o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct UnityEngine_RenderTexture_array *v59; // x8
  UnityEngine_RenderTexture_o *v60; // x21
  UnityEngine_Material_o *v61; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v63; // x20
  bool HasProperty_40688736; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v69; // x8
  int32_t v70; // w21
  int32_t v71; // w22
  UnityEngine_Texture2D_o *v72; // x20
  struct UnityEngine_RenderTexture_o *v73; // x8
  int v74; // w21
  int v75; // w0
  float v76; // s4
  float v77; // s5
  float v78; // s6
  float v79; // s7
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v81; // x8
  unsigned __int64 v82; // x23
  UnityEngine_Object_o *v83; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v85; // x8
  unsigned __int64 v86; // x22
  UnityEngine_Object_o *v87; // x20
  __int64 v88; // x0
  __int64 v89; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v90; // [xsp+0h] [xbp-F0h] BYREF
  MethodInfo methoda; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v92; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v93; // 0:x0.8
  UnityEngine_Rect_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4187815 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Graphics_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Texture2D_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_16100/*"_Weights"*/, v6);
    sub_B2C35C(&StringLiteral_16086/*"_Threshold"*/, v7);
    sub_B2C35C(&StringLiteral_16002/*"_Intensity"*/, v8);
    sub_B2C35C(&StringLiteral_16139/*"_customColor0"*/, v9);
    sub_B2C35C(&StringLiteral_16048/*"_Rect"*/, v10);
    sub_B2C35C(&StringLiteral_16083/*"_Thickness"*/, v11);
    sub_B2C35C(&StringLiteral_16028/*"_Offset"*/, v12);
    byte_4187815 = 1;
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
    v94.fields.m_XMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v14, (const MethodInfo *)&this->fields._Rect);
    m_XMin = v94.fields.m_XMin;
    v95.fields.m_XMin = UnityEngine_Rect__get_yMin(v94, (const MethodInfo *)&this->fields._Rect);
    v20 = v95.fields.m_XMin;
    v96.fields.m_XMin = UnityEngine_Rect__get_xMax(v95, (const MethodInfo *)&this->fields._Rect);
    v21 = v96.fields.m_XMin;
    v97.fields.w = UnityEngine_Rect__get_yMax(v96, (const MethodInfo *)&this->fields._Rect);
    v97.fields.x = m_XMin;
    v97.fields.y = v20;
    v97.fields.z = v21;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Vector4___ctor(v97, v22, v23, v24, v25, &methoda);
    if ( !material )
      goto LABEL_88;
    *(_QWORD *)&v98.fields.x = methoda.methodPointer;
    *(_QWORD *)&v98.fields.z = methoda.invoker_method;
    UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_16048/*"_Rect"*/, v98, 0LL);
    Temporary_35374428 = (__int64)this->fields._material;
    if ( !Temporary_35374428 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_35374428,
      (System_String_o *)StringLiteral_16083/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    Temporary_35374428 = (__int64)this->fields._material;
    if ( !Temporary_35374428 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_35374428,
      (System_String_o *)StringLiteral_16086/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    Temporary_35374428 = (__int64)this->fields._material;
    if ( !Temporary_35374428 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_35374428,
      (System_String_o *)StringLiteral_16002/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    Temporary_35374428 = (__int64)this->fields._material;
    if ( !Temporary_35374428 )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)Temporary_35374428,
      (System_String_o *)StringLiteral_16028/*"_Offset"*/,
      this->fields._offset,
      0LL);
    Temporary_35374428 = (__int64)this->fields._material;
    if ( !Temporary_35374428 )
      goto LABEL_88;
    UnityEngine_Material__SetFloatArray_40692068(
      (UnityEngine_Material_o *)Temporary_35374428,
      (System_String_o *)StringLiteral_16100/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v28 = this->fields._texture;
    rt0 = this->fields._rt0;
    v30 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_40665984(v28, rt0, v30, 0, 0LL);
    Temporary_35374428 = (__int64)this->fields._rt0;
    if ( !Temporary_35374428 )
      goto LABEL_88;
    Temporary_35374428 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_35374428 + 376LL))(
                           Temporary_35374428,
                           *(_QWORD *)(*(_QWORD *)Temporary_35374428 + 384LL));
    v31 = this->fields._rt0;
    if ( !v31 )
      goto LABEL_88;
    v32 = Temporary_35374428;
    Temporary_35374428 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v31->klass->vtable._6_get_height.method)(
                           this->fields._rt0,
                           v31->klass->vtable._7_set_height.methodPtr);
    v33 = (System_Int32_array **)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v34 = Temporary_35374428;
      v35 = 0LL;
      v36 = 32LL;
      while ( 1 )
      {
        v37 = v32 >= 0 ? v32 : v32 + 1;
        v38 = v34 >= 0 ? v34 : v34 + 1;
        v39 = (UnityEngine_Texture_o *)v33;
        if ( v34 < 32 || v32 < 32 )
          break;
        Temporary_35374428 = (__int64)this->fields._rt0;
        if ( !Temporary_35374428 )
          goto LABEL_88;
        renderTextures = this->fields._renderTextures;
        v32 = v37 >> 1;
        v34 = v38 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)Temporary_35374428, 0LL);
        Temporary_35374428 = (__int64)UnityEngine_RenderTexture__GetTemporary_35374428(v32, v34, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_88;
        v33 = (System_Int32_array **)Temporary_35374428;
        if ( Temporary_35374428 )
        {
          Temporary_35374428 = sub_B2C41C(Temporary_35374428, renderTextures->obj.klass->_1.element_class);
          if ( !Temporary_35374428 )
          {
            v89 = sub_B2C454(0LL);
            sub_B2C400(v89, 0LL);
          }
        }
        if ( v35 >= renderTextures->max_length )
          goto LABEL_89;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v36) = (Il2CppClass *)v33;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)renderTextures + v36), v33, v42, v43, v44, v45, v46, v47);
        v48 = this->fields._material;
        if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        }
        UnityEngine_Graphics__Blit_40665984(v39, (UnityEngine_RenderTexture_o *)v33, v48, 1, 0LL);
        ++v35;
        v36 += 8LL;
        if ( (__int64)v35 >= this->fields._iteration )
        {
          v39 = (UnityEngine_Texture_o *)v33;
          break;
        }
      }
      if ( (int)v35 - 2 >= 0 )
      {
        v49 = (unsigned int)v35 - 2LL;
        v50 = 8LL * (unsigned int)v35 + 16;
        while ( 1 )
        {
          v51 = this->fields._renderTextures;
          if ( !v51 )
            break;
          if ( v49 >= v51->max_length )
            goto LABEL_89;
          v33 = *(System_Int32_array ***)((char *)&v51->obj.klass + v50);
          v52 = this->fields._material;
          if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          }
          UnityEngine_Graphics__Blit_40665984(v39, (UnityEngine_RenderTexture_o *)v33, v52, 2, 0LL);
          v59 = this->fields._renderTextures;
          if ( !v59 )
            break;
          if ( v49 >= v59->max_length )
            goto LABEL_89;
          *(Il2CppClass **)((char *)&v59->obj.klass + v50) = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)v59 + v50), 0LL, v53, v54, v55, v56, v57, v58);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v39, 0LL);
          --v49;
          v50 -= 8LL;
          v39 = (UnityEngine_Texture_o *)v33;
          if ( (v49 & 0x80000000) != 0 )
            goto LABEL_52;
        }
LABEL_88:
        sub_B2C434(Temporary_35374428, v27);
      }
      v33 = (System_Int32_array **)v39;
    }
LABEL_52:
    v60 = this->fields._rt0;
    v61 = this->fields._material;
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit_40665984((UnityEngine_Texture_o *)v33, v60, v61, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v33, 0LL);
    drawShader = this->fields._drawShader;
    v63 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v63, drawShader, 0LL);
    if ( !v63 )
      goto LABEL_88;
    UnityEngine_Material__set_mainTexture(v63, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_40688736 = UnityEngine_Material__HasProperty_40688736(v63, (System_String_o *)StringLiteral_16139/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_40688736 )
      UnityEngine_Material__SetColor(v63, (System_String_o *)StringLiteral_16139/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v63, *(UnityEngine_Color_o *)&r, 0LL);
    Temporary_35374428 = (__int64)this->fields._renderer;
    if ( !Temporary_35374428 )
      goto LABEL_88;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Temporary_35374428, v63, 0LL);
    Temporary_35374428 = (__int64)this->fields._rt0;
    if ( !Temporary_35374428 )
      goto LABEL_88;
    Temporary_35374428 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_35374428 + 376LL))(
                           Temporary_35374428,
                           *(_QWORD *)(*(_QWORD *)Temporary_35374428 + 384LL));
    v69 = this->fields._rt0;
    if ( !v69 )
      goto LABEL_88;
    v70 = Temporary_35374428;
    v71 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v69->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v69->klass->vtable._7_set_height.methodPtr);
    v72 = (UnityEngine_Texture2D_o *)sub_B2C42C(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35417272(v72, v70, v71, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    Temporary_35374428 = (__int64)this->fields._rt0;
    if ( !Temporary_35374428 )
      goto LABEL_88;
    Temporary_35374428 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Temporary_35374428 + 376LL))(
                           Temporary_35374428,
                           *(_QWORD *)(*(_QWORD *)Temporary_35374428 + 384LL));
    v73 = this->fields._rt0;
    if ( !v73 )
      goto LABEL_88;
    v74 = Temporary_35374428;
    v75 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v73->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v73->klass->vtable._7_set_height.methodPtr);
    v99.fields.m_Width = (float)v74;
    v99.fields.m_Height = (float)v75;
    v99.fields.m_XMin = 0.0;
    v99.fields.m_YMin = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v99, v76, v77, v78, v79, &methoda);
    if ( !v72 )
      goto LABEL_88;
    *(_QWORD *)&v100.fields.m_XMin = methoda.methodPointer;
    *(_QWORD *)&v100.fields.m_Width = methoda.invoker_method;
    UnityEngine_Texture2D__ReadPixels_35419472(v72, v100, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_35419296(v72, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v81 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v81 >= 1 )
      {
        v82 = 0LL;
        while ( v82 < (unsigned int)v81 )
        {
          v83 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v82];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_35374428 = UnityEngine_Object__op_Equality(v83, 0LL, 0LL);
          if ( (Temporary_35374428 & 1) == 0 )
          {
            if ( !v83 )
              goto LABEL_88;
            *(UnityEngine_ParticleSystem_ShapeModule_o *)&methoda.slot = UnityEngine_ParticleSystem__get_shape(
                                                                           (UnityEngine_ParticleSystem_o *)v83,
                                                                           0LL);
            v92.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.slot;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v92, v72, 0LL);
          }
          LODWORD(v81) = shapeSettingParticles->max_length;
          if ( (__int64)++v82 >= (int)v81 )
            goto LABEL_76;
        }
LABEL_89:
        v88 = sub_B2C460(Temporary_35374428);
        sub_B2C400(v88, 0LL);
      }
    }
LABEL_76:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v85 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v85 >= 1 )
      {
        v86 = 0LL;
        while ( v86 < (unsigned int)v85 )
        {
          v87 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v86];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Temporary_35374428 = UnityEngine_Object__op_Equality(v87, 0LL, 0LL);
          if ( (Temporary_35374428 & 1) == 0 )
          {
            if ( !v87 )
              goto LABEL_88;
            methoda.genericMethod = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v87, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(
              (UnityEngine_ParticleSystem_MinMaxGradient_o *)&methoda,
              this->fields._particleColor,
              0LL);
            v93.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&methoda.genericMethod;
            *(_QWORD *)&v90.fields.m_ColorMax.fields.b = methoda.rgctx_data;
            *(_OWORD *)&v90.fields.m_GradientMax = *(_OWORD *)&methoda.name;
            *(_OWORD *)&v90.fields.m_ColorMin.fields.b = *(_OWORD *)&methoda.return_type;
            *(_OWORD *)&v90.fields.m_Mode = *(_OWORD *)&methoda.methodPointer;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v93, &v90, 0LL);
          }
          LODWORD(v85) = colorSettingParticles->max_length;
          if ( (__int64)++v86 >= (int)v85 )
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
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x8
  int max_length; // w8
  unsigned int v12; // w9
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x8
  int v14; // w8
  unsigned int v15; // w9
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v26; // x8
  int32_t v27; // w20
  int32_t v28; // w21
  UnityEngine_RenderTexture_o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  intptr_t v36; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x10
  struct UnityEngine_Renderer_o *v46; // x1
  struct UnityEngine_Renderer_o **p_renderer; // x19
  __int64 v48; // x0
  System_RuntimeTypeHandle_o v49; // 0:w0.4

  if ( (byte_4187814 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Material_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_RenderTexture_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Renderer_var, v5);
    sub_B2C35C(&UnityEngine_Renderer_TypeInfo, v6);
    sub_B2C35C(&System_Type_TypeInfo, v7);
    byte_4187814 = 1;
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
          v12 = 0;
          while ( v12 < max_length )
          {
            if ( (int)++v12 >= max_length )
              goto LABEL_13;
          }
LABEL_32:
          v48 = sub_B2C460(v9);
          sub_B2C400(v48, 0LL);
        }
      }
LABEL_13:
      colorSettingParticles = this->fields._colorSettingParticles;
      if ( colorSettingParticles )
      {
        v14 = colorSettingParticles->max_length;
        if ( v14 >= 1 )
        {
          v15 = 0;
          while ( v15 < v14 )
          {
            if ( (int)++v15 >= v14 )
              goto LABEL_18;
          }
          goto LABEL_32;
        }
      }
LABEL_18:
      edgeShader = this->fields._edgeShader;
      v17 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v17, edgeShader, 0LL);
      this->fields._material = v17;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields._material,
        (System_Int32_array **)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v26 = this->fields._texture) == 0LL) )
      {
        sub_B2C434(material, v24);
      }
      v27 = (int)material;
      v28 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v26->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v26->klass->vtable._7_set_height.methodPtr);
      v29 = (UnityEngine_RenderTexture_o *)sub_B2C42C(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_35373244(v29, v27, v28, 0, 0, 0LL);
      this->fields._rt0 = v29;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields._rt0,
        (System_Int32_array **)v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v36 = (int)UnityEngine_Renderer_var;
      if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Type_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      }
      v49.fields.value = v36;
      TypeFromHandle = System_Type__GetTypeFromHandle(v49, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component
        && (v45 = *(&UnityEngine_Renderer_TypeInfo->_2.bitflags2 + 1),
            *(&Component->klass->_2.bitflags2 + 1) >= (unsigned int)v45) )
      {
        if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[v45 - 1] == UnityEngine_Renderer_TypeInfo )
          v46 = (struct UnityEngine_Renderer_o *)Component;
        else
          v46 = 0LL;
      }
      else
      {
        v46 = 0LL;
      }
      this->fields._renderer = v46;
      p_renderer = &this->fields._renderer;
      sub_B2C2F8((BattleServantConfConponent_o *)p_renderer, (System_Int32_array **)v46, v39, v40, v41, v42, v43, v44);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._material, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields._rt0 = 0LL;
  v8 = (FGOEdgeBlur_o *)((char *)v8 + 152);
  sub_B2C2F8((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
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
          v10 = sub_B2C460(this);
          sub_B2C400(v10, 0LL);
        }
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_B2C434(transform, method);
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
  sub_B2C2F8(
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