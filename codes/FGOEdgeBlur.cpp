void FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  struct UnityEngine_RenderTexture_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Single_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D2F768 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_RenderTexture___TypeInfo);
    sub_1C93AD4(&float___TypeInfo);
    byte_4D2F768 = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_D007A0;
  *(_OWORD *)&this->fields._thickness = xmmword_D02190;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v8 = (struct UnityEngine_RenderTexture_array *)sub_1C93B7C(UnityEngine_RenderTexture___TypeInfo, 6);
  this->fields._renderTextures = v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._renderTextures, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (struct System_Single_array *)sub_1C93B7C(float___TypeInfo, 10);
  this->fields._weights = v15;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._weights, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void FGOEdgeBlur__Awake(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  FGOEdgeBlur__Initialize(this, method);
}


void FGOEdgeBlur__Blur(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x20
  __int64 v4; // x1
  __int64 material; // x0
  UnityEngine_Texture_o *v6; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v8; // x21
  struct UnityEngine_RenderTexture_o *v9; // x8
  int32_t v10; // w21
  UnityEngine_Texture_o *v11; // x20
  int32_t v12; // w22
  unsigned __int64 v13; // x27
  __int64 v14; // x28
  int v15; // w8
  int v16; // w9
  unsigned int *renderTextures; // x24
  int32_t format; // w0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_RenderTexture_o *v25; // x23
  UnityEngine_Material_o *v26; // x24
  unsigned __int64 v27; // x23
  struct UnityEngine_RenderTexture_array *v28; // x8
  UnityEngine_RenderTexture_o *v29; // x21
  UnityEngine_Material_o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct UnityEngine_RenderTexture_array *v37; // x8
  Il2CppClass **v38; // x0
  bool v39; // cc
  UnityEngine_RenderTexture_o *v40; // x20
  UnityEngine_Material_o *v41; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v43; // x20
  bool HasProperty_71985380; // w0
  struct UnityEngine_Texture2D_o **p_currentScreen; // x20
  UnityEngine_Object_o *currentScreen; // x21
  UnityEngine_Object_o *v50; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct UnityEngine_RenderTexture_o *v57; // x8
  int32_t v58; // w22
  int32_t v59; // w23
  UnityEngine_Texture2D_o *v60; // x21
  struct UnityEngine_RenderTexture_o *v61; // x8
  int v62; // w22
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v71; // x24
  UnityEngine_Object_o *v72; // x22
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  il2cpp_array_size_t v74; // x8
  unsigned __int64 v75; // x22
  UnityEngine_Object_o *v76; // x20
  __int64 v77; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v78; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v79; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v80; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_Vector4_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2F767 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Graphics_TypeInfo);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_Texture2D_TypeInfo);
    sub_1C93AD4(&StringLiteral_16515/*"_Weights"*/);
    sub_1C93AD4(&StringLiteral_16479/*"_Threshold"*/);
    sub_1C93AD4(&StringLiteral_16349/*"_Intensity"*/);
    sub_1C93AD4(&StringLiteral_16647/*"_customColor0"*/);
    sub_1C93AD4(&StringLiteral_16422/*"_Rect"*/);
    sub_1C93AD4(&StringLiteral_16476/*"_Thickness"*/);
    sub_1C93AD4(&StringLiteral_16384/*"_Offset"*/);
    byte_4D2F767 = 1;
  }
  m_ParticleSystem = 0;
  v80 = 0;
  if ( !this->fields._isInitialized )
    FGOEdgeBlur__Initialize(this, method);
  texture = (UnityEngine_Object_o *)this->fields._texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(texture, 0, 0) )
  {
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    v82.fields.x = this->fields._Rect.fields.m_XMin;
    v82.fields.y = this->fields._Rect.fields.m_YMin;
    v82.fields.w = v82.fields.y + this->fields._Rect.fields.m_Height;
    v82.fields.z = v82.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16422/*"_Rect"*/, v82, 0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16476/*"_Thickness"*/,
      this->fields._thickness,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16479/*"_Threshold"*/,
      this->fields._threshold,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16349/*"_Intensity"*/,
      this->fields._intensity,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16384/*"_Offset"*/,
      this->fields._offset,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloatArray_71989616(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16515/*"_Weights"*/,
      this->fields._weights,
      0);
    v6 = this->fields._texture;
    rt0 = this->fields._rt0;
    v8 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_71964672(v6, rt0, v8, 0, 0);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_88;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v9 = this->fields._rt0;
    if ( !v9 )
      goto LABEL_88;
    v10 = material;
    material = (__int64)((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v9->klass->vtable._6_get_height.methodPtr)(
                          v9,
                          this->fields._rt0,
                          v9->klass->vtable._6_get_height.method);
    v11 = (UnityEngine_Texture_o *)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v12 = material;
      v13 = 0;
      v14 = 8;
      while ( 1 )
      {
        v15 = v10 >= 0 ? v10 : v10 + 1;
        v16 = v12 >= 0 ? v12 : v12 + 1;
        if ( v12 < 32 || v10 < 32 )
          break;
        material = (__int64)this->fields._rt0;
        if ( !material )
          goto LABEL_88;
        renderTextures = (unsigned int *)this->fields._renderTextures;
        v10 = v15 >> 1;
        v12 = v16 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)material, 0);
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_72027580(v10, v12, 0, format, 0);
        if ( !renderTextures )
          goto LABEL_88;
        v25 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1C93C10(material, *(_QWORD *)(*(_QWORD *)renderTextures + 64LL));
          if ( !material )
          {
            v77 = sub_1C93D50(0);
            sub_1C93BFC(v77, 0);
          }
        }
        if ( v13 >= renderTextures[6] )
          goto LABEL_89;
        *(_QWORD *)&renderTextures[v14] = v25;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&renderTextures[v14], (int32_t)v25, v19, v20, v21, v22, v23, v24);
        v26 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        UnityEngine_Graphics__Blit_71964672(v11, v25, v26, 1, 0);
        ++v13;
        v14 += 2;
        v11 = (UnityEngine_Texture_o *)v25;
        if ( (__int64)v13 >= this->fields._iteration )
        {
          v11 = (UnityEngine_Texture_o *)v25;
          break;
        }
      }
      if ( (int)v13 - 2 >= 0 )
      {
        v27 = (unsigned int)(v13 - 2);
        while ( 1 )
        {
          v28 = this->fields._renderTextures;
          if ( !v28 )
            goto LABEL_88;
          if ( v27 >= LODWORD(v28->max_length) )
            goto LABEL_89;
          v29 = v28->m_Items[v27];
          v30 = this->fields._material;
          if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          UnityEngine_Graphics__Blit_71964672(v11, v29, v30, 2, 0);
          v37 = this->fields._renderTextures;
          if ( !v37 )
            goto LABEL_88;
          if ( v27 >= LODWORD(v37->max_length) )
            goto LABEL_89;
          v38 = &v37->obj.klass + v27;
          v38[4] = 0;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v38 + 4), 0, v31, v32, v33, v34, v35, v36);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v11, 0);
          v39 = (__int64)v27-- <= 0;
          v11 = (UnityEngine_Texture_o *)v29;
          if ( v39 )
            goto LABEL_49;
        }
      }
    }
    v29 = (UnityEngine_RenderTexture_o *)v11;
LABEL_49:
    v40 = this->fields._rt0;
    v41 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_71964672((UnityEngine_Texture_o *)v29, v40, v41, 3, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v29, 0);
    drawShader = this->fields._drawShader;
    v43 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v43, drawShader, 0);
    if ( !v43 )
      goto LABEL_88;
    UnityEngine_Material__set_mainTexture(v43, (UnityEngine_Texture_o *)this->fields._rt0, 0);
    HasProperty_71985380 = UnityEngine_Material__HasProperty_71985380(v43, (System_String_o *)StringLiteral_16647/*"_customColor0"*/, 0);
    color = this->fields._color;
    if ( HasProperty_71985380 )
      UnityEngine_Material__SetColor(v43, (System_String_o *)StringLiteral_16647/*"_customColor0"*/, color, 0);
    else
      UnityEngine_Material__set_color(v43, color, 0);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v43, 0);
    p_currentScreen = &this->fields.currentScreen;
    currentScreen = (UnityEngine_Object_o *)this->fields.currentScreen;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentScreen, 0, 0) )
    {
      v50 = (UnityEngine_Object_o *)*p_currentScreen;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v50, 0);
      *p_currentScreen = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.currentScreen, 0, v51, v52, v53, v54, v55, v56);
    }
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_88;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v57 = this->fields._rt0;
    if ( !v57 )
      goto LABEL_88;
    v58 = material;
    v59 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v57->klass->vtable._6_get_height.methodPtr)(
                          v57,
                          this->fields._rt0,
                          v57->klass->vtable._6_get_height.method);
    v60 = (UnityEngine_Texture2D_o *)sub_1C93D20(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_72007300(v60, v58, v59, 3, 0, 0, 0);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v61 = this->fields._rt0) == 0)
      || (v62 = material,
          material = (__int64)((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v61->klass->vtable._6_get_height.methodPtr)(
                                v61,
                                this->fields._rt0,
                                v61->klass->vtable._6_get_height.method),
          !v60) )
    {
LABEL_88:
      sub_1C93D2C(material, v4);
    }
    v84.fields.m_Height = (float)(int)material;
    v84.fields.m_Width = (float)v62;
    v84.fields.m_XMin = 0.0;
    v84.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_72009764(v60, v84, 0, 0, 0);
    UnityEngine_Texture2D__Apply_72009344(v60, 0);
    UnityEngine_RenderTexture__set_active(0, 0);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      max_length = shapeSettingParticles->max_length;
      if ( (int)max_length >= 1 )
      {
        v71 = 0;
        while ( v71 < (unsigned int)max_length )
        {
          v72 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v71];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v72, 0, 0);
          if ( (material & 1) == 0 )
          {
            if ( !v72 )
              goto LABEL_88;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v72, 0).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(
              (UnityEngine_ParticleSystem_ShapeModule_o)&m_ParticleSystem,
              v60,
              0);
          }
          LODWORD(max_length) = shapeSettingParticles->max_length;
          if ( (__int64)++v71 >= (int)max_length )
            goto LABEL_77;
        }
LABEL_89:
        sub_1C93D34(material);
      }
    }
LABEL_77:
    this->fields.currentScreen = v60;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.currentScreen, (int32_t)v60, v63, v64, v65, v66, v67, v68);
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v74 = colorSettingParticles->max_length;
      if ( (int)v74 >= 1 )
      {
        v75 = 0;
        while ( v75 < (unsigned int)v74 )
        {
          v76 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v75];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v76, 0, 0);
          if ( (material & 1) == 0 )
          {
            if ( !v76 )
              goto LABEL_88;
            v80 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v76, 0).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v79, this->fields._particleColor, 0);
            v78 = v79;
            UnityEngine_ParticleSystem_MainModule__set_startColor(
              (UnityEngine_ParticleSystem_MainModule_o)&v80,
              &v78,
              0);
          }
          LODWORD(v74) = colorSettingParticles->max_length;
          if ( (__int64)++v75 >= (int)v74 )
            return;
        }
        goto LABEL_89;
      }
    }
  }
}


void FGOEdgeBlur__Initialize(FGOEdgeBlur_o *this, const MethodInfo *method)
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v21; // x8
  int32_t v22; // w20
  int32_t v23; // w21
  UnityEngine_RenderTexture_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppType *v31; // x20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  UnityEngine_Renderer_c *v40; // x9
  __int64 naturalAligment; // x10
  struct UnityEngine_Renderer_o *v42; // x11
  int32_t v43; // w1
  struct UnityEngine_Renderer_o **p_renderer; // x8

  if ( (byte_4D2F766 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C93AD4(&UnityEngine_Renderer_var);
    sub_1C93AD4(&UnityEngine_Renderer_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    byte_4D2F766 = 1;
  }
  if ( !this->fields._isInitialized )
  {
    texture = (UnityEngine_Object_o *)this->fields._texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Equality(texture, 0, 0);
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
              goto LABEL_12;
          }
LABEL_36:
          sub_1C93D34(v4);
        }
      }
LABEL_12:
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
              goto LABEL_17;
          }
          goto LABEL_36;
        }
      }
LABEL_17:
      edgeShader = this->fields._edgeShader;
      v12 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v12, edgeShader, 0);
      this->fields._material = v12;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._material, (int32_t)v12, v13, v14, v15, v16, v17, v18);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))material->klass[1]._1.image)(
                                                 material,
                                                 material->klass[1]._1.gc_desc),
            (v21 = this->fields._texture) == 0) )
      {
        sub_1C93D2C(material, v19);
      }
      v22 = (int)material;
      v23 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))v21->klass->vtable._6_get_height.methodPtr)(
                            v21,
                            this->fields._texture,
                            v21->klass->vtable._6_get_height.method);
      v24 = (UnityEngine_RenderTexture_o *)sub_1C93D20(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_72025964(v24, v22, v23, 0, 0, 0);
      this->fields._rt0 = v24;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._rt0, (int32_t)v24, v25, v26, v27, v28, v29, v30);
      v31 = UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v31, 0);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0);
      if ( Component )
      {
        v40 = UnityEngine_Renderer_TypeInfo;
        naturalAligment = UnityEngine_Renderer_TypeInfo->_2.naturalAligment;
        if ( Component->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_Renderer_TypeInfo )
            v42 = (struct UnityEngine_Renderer_o *)Component;
          else
            v42 = 0;
        }
        else
        {
          v42 = 0;
        }
        this->fields._renderer = v42;
        p_renderer = &this->fields._renderer;
        if ( Component->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[naturalAligment - 1] == v40 )
            v43 = (int)Component;
          else
            v43 = 0;
        }
        else
        {
          v43 = 0;
        }
      }
      else
      {
        v43 = 0;
        this->fields._renderer = 0;
        p_renderer = &this->fields._renderer;
      }
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p_renderer, v43, v34, v35, v36, v37, v38, v39);
      this->fields._isInitialized = 1;
    }
  }
}


void FGOEdgeBlur__OnDestroy(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UnityEngine_RenderTexture_o **p_rt0; // x20
  UnityEngine_Object_o *rt0; // x21
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  GrandQuestFolderBoardItem_o *p_currentScreen; // x19
  UnityEngine_Object_o *v19; // x20
  struct UnityEngine_Texture2D_o *currentScreen; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2F765 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F765 = 1;
  }
  this->fields._material = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._material, 0, v2, v3, v4, v5, v6, v7);
  p_rt0 = &this->fields._rt0;
  rt0 = (UnityEngine_Object_o *)this->fields._rt0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rt0, 0, 0) )
  {
    v11 = (UnityEngine_Object_o *)*p_rt0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v11, 0);
    *p_rt0 = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._rt0, 0, v12, v13, v14, v15, v16, v17);
  }
  currentScreen = this->fields.currentScreen;
  p_currentScreen = (GrandQuestFolderBoardItem_o *)&this->fields.currentScreen;
  v19 = (UnityEngine_Object_o *)currentScreen;
  LOBYTE(p_currentScreen[-1].fields._ClosedMessage_k__BackingField) = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_currentScreen->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(klass, 0);
    p_currentScreen->klass = 0;
    sub_1C93A78(p_currentScreen, 0, v22, v23, v24, v25, v26, v27);
  }
}


UnityEngine_Color_o FGOEdgeBlur__get_Color(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = this->fields._color.fields.r;
  result.fields.g = this->fields._color.fields.g;
  result.fields.b = this->fields._color.fields.b;
  result.fields.a = this->fields._color.fields.a;
  return result;
}


int32_t FGOEdgeBlur__get_Level(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  return this->fields._iteration;
}


UnityEngine_Color_o FGOEdgeBlur__get_ParticleColor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = this->fields._particleColor.fields.r;
  result.fields.g = this->fields._particleColor.fields.g;
  result.fields.b = this->fields._particleColor.fields.b;
  result.fields.a = this->fields._particleColor.fields.a;
  return result;
}


UnityEngine_Rect_o FGOEdgeBlur__get_Rect(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.m_XMin = this->fields._Rect.fields.m_XMin;
  result.fields.m_YMin = this->fields._Rect.fields.m_YMin;
  result.fields.m_Width = this->fields._Rect.fields.m_Width;
  result.fields.m_Height = this->fields._Rect.fields.m_Height;
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
  float x; // s10
  __int64 v8; // x20
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
      x = p.fields.x;
      v8 = 0;
      do
      {
        if ( (unsigned int)v8 >= max_length )
          sub_1C93D34(this);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
        {
          sub_1C93D2C(transform, method);
        }
        v10.fields.x = x;
        v10.fields.y = y;
        v10.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0);
        max_length = shapeSettingParticles->max_length;
        ++v8;
      }
      while ( (int)v8 < max_length );
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields._texture = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._texture,
    (int32_t)value,
    (int32_t)method,
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