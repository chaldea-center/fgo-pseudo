void FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  Il2CppClass *v8; // x0
  struct UnityEngine_RenderTexture_array *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Single_array *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596F527 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_RenderTexture___TypeInfo);
    sub_2213A60(&float___TypeInfo);
    byte_596F527 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  v8 = UnityEngine_RenderTexture___TypeInfo;
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_E9BF60;
  *(_OWORD *)&this->fields._thickness = xmmword_E9CF00;
  this->fields._color = _Q0;
  this->fields._particleColor = _Q0;
  v9 = (struct UnityEngine_RenderTexture_array *)sub_2213B20(v8, 6);
  this->fields._renderTextures = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._renderTextures,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (struct System_Single_array *)sub_2213B20(float___TypeInfo, 10);
  this->fields._weights = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._weights, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void FGOEdgeBlur__Awake(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  FGOEdgeBlur__Initialize(this, method);
}


// local variable allocation has failed, the output may be wrong!
void FGOEdgeBlur__Blur(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isInitialized; // w8
  UnityEngine_Object_o *texture; // x20
  __int64 v6; // x1
  __int64 material; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Texture_o *v10; // x20
  UnityEngine_RenderTexture_o *rt0; // x21
  UnityEngine_Material_o *v12; // x22
  struct UnityEngine_RenderTexture_o *v13; // x8
  int32_t v14; // w22
  __int64 v15; // x2
  UnityEngine_Texture_o *v16; // x20
  int32_t v17; // w23
  unsigned __int64 v18; // x27
  __int64 v19; // x28
  int v20; // w8
  int v21; // w9
  unsigned int *renderTextures; // x24
  int32_t format; // w0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_RenderTexture_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Material_o *v34; // x24
  unsigned __int64 v35; // x23
  struct UnityEngine_RenderTexture_array *v36; // x8
  UnityEngine_Material_o *v37; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct UnityEngine_RenderTexture_array *v44; // x8
  Il2CppClass **v45; // x0
  bool v46; // cc
  UnityEngine_RenderTexture_o *v47; // x21
  UnityEngine_Material_o *v48; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v50; // x20
  bool HasProperty_83277340; // w0
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  __int64 v56; // x1
  __int64 v57; // x2
  struct UnityEngine_Texture2D_o **p_currentScreen; // x20
  UnityEngine_Object_o *currentScreen; // x21
  __int64 v60; // x2
  UnityEngine_Object_o *v61; // x21
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct UnityEngine_RenderTexture_o *v68; // x8
  int32_t v69; // w22
  int32_t v70; // w23
  UnityEngine_Texture2D_o *v71; // x21
  struct UnityEngine_RenderTexture_o *v72; // x8
  int v73; // w22
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v82; // x24
  UnityEngine_Object_o *v83; // x22
  UnityEngine_ParticleSystem_ShapeModule_o v84; // x0
  __int64 v85; // x2
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  il2cpp_array_size_t v87; // x8
  unsigned __int64 v88; // x22
  UnityEngine_Object_o *v89; // x20
  UnityEngine_ParticleSystem_MainModule_o v90; // x0
  UnityEngine_ParticleSystem_MainModule_o v91; // x0
  __int64 v92; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v93; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v94; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v95; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_Vector4_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o particleColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596F526 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Graphics_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    sub_2213A60(&StringLiteral_17069/*"_Weights"*/);
    sub_2213A60(&StringLiteral_17029/*"_Threshold"*/);
    sub_2213A60(&StringLiteral_16898/*"_Intensity"*/);
    sub_2213A60(&StringLiteral_17216/*"_customColor0"*/);
    sub_2213A60(&StringLiteral_16972/*"_Rect"*/);
    sub_2213A60(&StringLiteral_17026/*"_Thickness"*/);
    sub_2213A60(&StringLiteral_16934/*"_Offset"*/);
    byte_596F526 = 1;
  }
  isInitialized = this->fields._isInitialized;
  m_ParticleSystem = 0;
  v95 = 0;
  if ( !isInitialized )
    FGOEdgeBlur__Initialize(this, method);
  texture = (UnityEngine_Object_o *)this->fields._texture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(texture, 0, 0) )
  {
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    v97.fields.y = this->fields._Rect.fields.m_YMin;
    v97.fields.x = this->fields._Rect.fields.m_XMin;
    v97.fields.w = this->fields._Rect.fields.m_Height + v97.fields.y;
    v97.fields.z = this->fields._Rect.fields.m_Width + v97.fields.x;
    UnityEngine_Material__SetVector((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16972/*"_Rect"*/, v97, 0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_17026/*"_Thickness"*/,
      this->fields._thickness,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_17029/*"_Threshold"*/,
      this->fields._threshold,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16898/*"_Intensity"*/,
      this->fields._intensity,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16934/*"_Offset"*/,
      this->fields._offset,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloatArray_83285888(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_17069/*"_Weights"*/,
      this->fields._weights,
      0);
    v10 = this->fields._texture;
    rt0 = this->fields._rt0;
    v12 = this->fields._material;
    if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v8, v9);
    UnityEngine_Graphics__Blit_83243812(v10, rt0, v12, 0, 0);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_88;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v13 = this->fields._rt0;
    if ( !v13 )
      goto LABEL_88;
    v14 = material;
    material = (__int64)((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v13->klass->vtable._6_get_height.methodPtr)(
                          v13,
                          this->fields._rt0,
                          v13->klass->vtable._6_get_height.method);
    v16 = (UnityEngine_Texture_o *)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v17 = material;
      v18 = 0;
      v19 = 8;
      while ( 1 )
      {
        v20 = v14 >= 0 ? v14 : v14 + 1;
        v21 = v17 >= 0 ? v17 : v17 + 1;
        if ( v14 < 32 || v17 < 32 )
          break;
        material = (__int64)this->fields._rt0;
        if ( !material )
          goto LABEL_88;
        renderTextures = (unsigned int *)this->fields._renderTextures;
        v14 = v20 >> 1;
        v17 = v21 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)material, 0);
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_83342324(v14, v17, 0, format, 0);
        if ( !renderTextures )
          goto LABEL_88;
        v30 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_2213BB4(material, *(_QWORD *)(*(_QWORD *)renderTextures + 64LL));
          if ( !material )
          {
            v92 = sub_2213D00(0, v31);
            sub_2213BA0(v92, 0);
          }
        }
        if ( v18 >= renderTextures[6] )
          goto LABEL_89;
        *(_QWORD *)&renderTextures[2 * v18 + 8] = v30;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&renderTextures[v19],
          (int32_t)v30,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        v34 = this->fields._material;
        if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v32, v33);
        UnityEngine_Graphics__Blit_83243812(v16, v30, v34, 1, 0);
        ++v18;
        v19 += 2;
        v16 = (UnityEngine_Texture_o *)v30;
        if ( (__int64)v18 >= this->fields._iteration )
          goto LABEL_38;
      }
      v30 = (UnityEngine_RenderTexture_o *)v16;
LABEL_38:
      v35 = (unsigned int)(v18 - 2);
      if ( (int)v18 - 2 >= 0 )
      {
        while ( 1 )
        {
          v36 = this->fields._renderTextures;
          if ( !v36 )
            break;
          if ( v35 >= LODWORD(v36->max_length) )
            goto LABEL_89;
          v37 = this->fields._material;
          v16 = (UnityEngine_Texture_o *)v36->m_Items[v35];
          if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v6, v15);
          UnityEngine_Graphics__Blit_83243812(
            (UnityEngine_Texture_o *)v30,
            (UnityEngine_RenderTexture_o *)v16,
            v37,
            2,
            0);
          v44 = this->fields._renderTextures;
          if ( !v44 )
            break;
          if ( v35 >= LODWORD(v44->max_length) )
            goto LABEL_89;
          v45 = &v44->obj.klass + v35;
          v45[4] = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), 0, v38, v39, v40, v41, v42, v43);
          UnityEngine_RenderTexture__ReleaseTemporary(v30, 0);
          v46 = (__int64)v35-- <= 0;
          v30 = (UnityEngine_RenderTexture_o *)v16;
          if ( v46 )
            goto LABEL_49;
        }
LABEL_88:
        sub_2213CDC(material, v6);
      }
      v16 = (UnityEngine_Texture_o *)v30;
    }
LABEL_49:
    v47 = this->fields._rt0;
    v48 = this->fields._material;
    if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v6, v15);
    UnityEngine_Graphics__Blit_83243812(v16, v47, v48, 3, 0);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v16, 0);
    drawShader = this->fields._drawShader;
    v50 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v50, drawShader, 0);
    if ( !v50 )
      goto LABEL_88;
    UnityEngine_Material__set_mainTexture(v50, (UnityEngine_Texture_o *)this->fields._rt0, 0);
    HasProperty_83277340 = UnityEngine_Material__HasProperty_83277340(v50, (System_String_o *)StringLiteral_17216/*"_customColor0"*/, 0);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_83277340 )
      UnityEngine_Material__SetColor(v50, (System_String_o *)StringLiteral_17216/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0);
    else
      UnityEngine_Material__set_color(v50, *(UnityEngine_Color_o *)&r, 0);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v50, 0);
    p_currentScreen = &this->fields.currentScreen;
    currentScreen = (UnityEngine_Object_o *)this->fields.currentScreen;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56, v57);
    if ( UnityEngine_Object__op_Inequality(currentScreen, 0, 0) )
    {
      v61 = (UnityEngine_Object_o *)*p_currentScreen;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v60);
      UnityEngine_Object__Destroy_83459800(v61, 0);
      *p_currentScreen = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.currentScreen, 0, v62, v63, v64, v65, v66, v67);
    }
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_88;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v68 = this->fields._rt0;
    if ( !v68 )
      goto LABEL_88;
    v69 = material;
    v70 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v68->klass->vtable._6_get_height.methodPtr)(
                          v68,
                          this->fields._rt0,
                          v68->klass->vtable._6_get_height.method);
    v71 = (UnityEngine_Texture2D_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_83318760(v71, v69, v70, 3, 0, 0, 0);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_88;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v72 = this->fields._rt0;
    if ( !v72 )
      goto LABEL_88;
    v73 = material;
    material = (__int64)((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v72->klass->vtable._6_get_height.methodPtr)(
                          v72,
                          this->fields._rt0,
                          v72->klass->vtable._6_get_height.method);
    if ( !v71 )
      goto LABEL_88;
    v98.fields.m_Height = (float)(int)material;
    v98.fields.m_Width = (float)v73;
    v98.fields.m_XMin = 0.0;
    v98.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_83321100(v71, v98, 0, 0, 0);
    UnityEngine_Texture2D__Apply_83320824(v71, 0);
    UnityEngine_RenderTexture__set_active(0, 0);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      max_length = shapeSettingParticles->max_length;
      if ( (int)max_length >= 1 )
      {
        v82 = 0;
        while ( v82 < (unsigned int)max_length )
        {
          v83 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v82];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v74);
          material = UnityEngine_Object__op_Equality(v83, 0, 0);
          if ( (material & 1) == 0 )
          {
            if ( !v83 )
              goto LABEL_88;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v83, 0).fields.m_ParticleSystem;
            v84.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v84, v71, 0);
          }
          LODWORD(max_length) = shapeSettingParticles->max_length;
          if ( (__int64)++v82 >= (int)max_length )
            goto LABEL_77;
        }
LABEL_89:
        sub_2213CE4(material);
      }
    }
LABEL_77:
    this->fields.currentScreen = v71;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentScreen,
      (int32_t)v71,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v87 = colorSettingParticles->max_length;
      if ( (int)v87 >= 1 )
      {
        v88 = 0;
        while ( v88 < (unsigned int)v87 )
        {
          v89 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v88];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v85);
          material = UnityEngine_Object__op_Equality(v89, 0, 0);
          if ( (material & 1) == 0 )
          {
            if ( !v89 )
              goto LABEL_88;
            v90.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v89, 0).fields.m_ParticleSystem;
            particleColor = this->fields._particleColor;
            v95 = v90.fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v94, particleColor, 0);
            v91.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v95;
            v93 = v94;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v91, &v93, 0);
          }
          LODWORD(v87) = colorSettingParticles->max_length;
          if ( (__int64)++v88 >= (int)v87 )
            return;
        }
        goto LABEL_89;
      }
    }
  }
}


void FGOEdgeBlur__Initialize(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *texture; // x20
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v15; // x8
  int32_t v16; // w20
  int32_t v17; // w21
  UnityEngine_RenderTexture_o *v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppType *v27; // x20
  System_RuntimeTypeHandle_o v28; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  UnityEngine_Renderer_c *v37; // x9
  __int64 naturalAligment; // x10
  struct UnityEngine_Renderer_o *v39; // x11
  int32_t v40; // w1
  struct UnityEngine_Renderer_o **p_renderer; // x8

  if ( (byte_596F525 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_RenderTexture_TypeInfo);
    sub_2213A60(&UnityEngine_Renderer_var);
    sub_2213A60(&UnityEngine_Renderer_TypeInfo);
    byte_596F525 = 1;
  }
  if ( !this->fields._isInitialized )
  {
    texture = (UnityEngine_Object_o *)this->fields._texture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( !UnityEngine_Object__op_Equality(texture, 0, 0) )
    {
      edgeShader = this->fields._edgeShader;
      v6 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v6, edgeShader, 0);
      this->fields._material = v6;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._material, (int32_t)v6, v7, v8, v9, v10, v11, v12);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))material->klass[1]._1.image)(
                                                 material,
                                                 material->klass[1]._1.gc_desc),
            (v15 = this->fields._texture) == 0) )
      {
        sub_2213CDC(material, v13);
      }
      v16 = (int)material;
      v17 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))v15->klass->vtable._6_get_height.methodPtr)(
                            v15,
                            this->fields._texture,
                            v15->klass->vtable._6_get_height.method);
      v18 = (UnityEngine_RenderTexture_o *)sub_2213CCC(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_83340172(v18, v16, v17, 0, 0, 0);
      this->fields._rt0 = v18;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._rt0, (int32_t)v18, v19, v20, v21, v22, v23, v24);
      v27 = UnityEngine_Renderer_var;
      if ( !*(_DWORD *)(qword_59843E0 + 228) )
        j_il2cpp_runtime_class_init_0(qword_59843E0, v25, v26);
      v28.fields.value = (intptr_t)v27;
      TypeFromHandle = System_Type__GetTypeFromHandle(v28, 0);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0);
      if ( Component )
      {
        v37 = UnityEngine_Renderer_TypeInfo;
        naturalAligment = UnityEngine_Renderer_TypeInfo->_2.naturalAligment;
        if ( Component->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_Renderer_TypeInfo )
            v39 = (struct UnityEngine_Renderer_o *)Component;
          else
            v39 = 0;
        }
        else
        {
          v39 = 0;
        }
        this->fields._renderer = v39;
        p_renderer = &this->fields._renderer;
        if ( Component->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[naturalAligment - 1] == v37 )
            v40 = (int)Component;
          else
            v40 = 0;
        }
        else
        {
          v40 = 0;
        }
      }
      else
      {
        v40 = 0;
        this->fields._renderer = 0;
        p_renderer = &this->fields._renderer;
      }
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p_renderer, v40, v31, v32, v33, v34, v35, v36);
      this->fields._isInitialized = 1;
    }
  }
}


void FGOEdgeBlur__OnDestroy(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  __int64 v10; // x2
  struct UnityEngine_RenderTexture_o **p_rt0; // x20
  UnityEngine_Object_o *rt0; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_Object_c *v22; // x0
  MissionNaviTransitionBoardItem_o *p_currentScreen; // x19
  UnityEngine_Object_o *v24; // x20
  struct UnityEngine_Texture2D_o *currentScreen; // t1
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_596F524 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F524 = 1;
  }
  this->fields._material = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._material, 0, v2, v3, v4, v5, v6, v7);
  p_rt0 = &this->fields._rt0;
  rt0 = (UnityEngine_Object_o *)this->fields._rt0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Inequality(rt0, 0, 0) )
  {
    v15 = (UnityEngine_Object_o *)*p_rt0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    UnityEngine_Object__Destroy_83459800(v15, 0);
    *p_rt0 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._rt0, 0, v16, v17, v18, v19, v20, v21);
  }
  v22 = UnityEngine_Object_TypeInfo;
  currentScreen = this->fields.currentScreen;
  p_currentScreen = (MissionNaviTransitionBoardItem_o *)&this->fields.currentScreen;
  v24 = (UnityEngine_Object_o *)currentScreen;
  LOBYTE(p_currentScreen[-1].fields._BoardType_k__BackingField) = 0;
  if ( !*(&v22->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v22, v13, v14);
  if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_currentScreen->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_currentScreen->klass = 0;
    sub_2213A04(p_currentScreen, 0, v29, v30, v31, v32, v33, v34);
  }
}


UnityEngine_Color_o FGOEdgeBlur__get_Color(FGOEdgeBlur_o *this, const MethodInfo *method)
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


int32_t FGOEdgeBlur__get_Level(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  return this->fields._iteration;
}


UnityEngine_Color_o FGOEdgeBlur__get_ParticleColor(FGOEdgeBlur_o *this, const MethodInfo *method)
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


UnityEngine_Rect_o FGOEdgeBlur__get_Rect(FGOEdgeBlur_o *this, const MethodInfo *method)
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


UnityEngine_Texture_o *FGOEdgeBlur__get_Texture(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  return this->fields._texture;
}


float FGOEdgeBlur__get_Thickness(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  return this->fields._thickness;
}


void FGOEdgeBlur__setMaskImagePosition(FGOEdgeBlur_o *this, UnityEngine_Vector3_o p, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x19
  int max_length; // w8
  float z; // s8
  float y; // s9
  __int64 v7; // x20
  float x; // s10
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  shapeSettingParticles = this->fields._shapeSettingParticles;
  if ( shapeSettingParticles )
  {
    max_length = shapeSettingParticles->max_length;
    if ( max_length >= 1 )
    {
      z = p.fields.z;
      y = p.fields.y;
      v7 = 0;
      x = p.fields.x;
      do
      {
        if ( (unsigned int)v7 >= max_length )
          sub_2213CE4(this);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v7];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
        {
          sub_2213CDC(transform, method);
        }
        v10.fields.x = x;
        v10.fields.y = y;
        v10.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0);
        max_length = shapeSettingParticles->max_length;
        ++v7;
      }
      while ( (int)v7 < max_length );
    }
  }
}


void FGOEdgeBlur__set_Color(FGOEdgeBlur_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  this->fields._color = value;
}


// local variable allocation has failed, the output may be wrong!
void FGOEdgeBlur__set_Level(FGOEdgeBlur_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iteration = value;
  FGOEdgeBlur__Blur(this, *(const MethodInfo **)&value);
}


void FGOEdgeBlur__set_ParticleColor(FGOEdgeBlur_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  this->fields._particleColor = value;
}


void FGOEdgeBlur__set_Rect(FGOEdgeBlur_o *this, UnityEngine_Rect_o value, const MethodInfo *method)
{
  this->fields._Rect = value;
  FGOEdgeBlur__Blur(this, method);
}


void FGOEdgeBlur__set_Texture(FGOEdgeBlur_o *this, UnityEngine_Texture_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields._texture = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._texture,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  FGOEdgeBlur__Blur(this, v9);
}


void FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}