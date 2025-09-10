void FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  struct UnityEngine_RenderTexture_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Single_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C26072 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_RenderTexture___TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    byte_4C26072 = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_C093D0;
  *(_OWORD *)&this->fields._thickness = xmmword_C0AD40;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v8 = (struct UnityEngine_RenderTexture_array *)sub_1C2D538(UnityEngine_RenderTexture___TypeInfo, 6);
  this->fields._renderTextures = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._renderTextures, (int32_t)v8, v9, v10);
  v11 = (struct System_Single_array *)sub_1C2D538(float___TypeInfo, 10);
  this->fields._weights = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._weights, (int32_t)v11, v12, v13);
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
  UnityEngine_Object_o *texture; // x20
  __int64 v4; // x1
  __int64 material; // x0
  UnityEngine_Texture_o *v6; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v8; // x21
  struct UnityEngine_RenderTexture_o *v9; // x8
  int32_t v10; // w21
  __int64 v11; // x2
  UnityEngine_Texture_o *v12; // x20
  int32_t v13; // w22
  unsigned __int64 v14; // x27
  __int64 v15; // x28
  int v16; // w8
  int v17; // w9
  unsigned int *renderTextures; // x24
  int32_t format; // w0
  const MethodInfo *v20; // x3
  UnityEngine_RenderTexture_o *v21; // x23
  UnityEngine_Material_o *v22; // x24
  unsigned __int64 v23; // x23
  struct UnityEngine_RenderTexture_array *v24; // x8
  UnityEngine_RenderTexture_o *v25; // x21
  UnityEngine_Material_o *v26; // x22
  const MethodInfo *v27; // x3
  struct UnityEngine_RenderTexture_array *v28; // x8
  Il2CppClass **v29; // x0
  bool v30; // cc
  UnityEngine_RenderTexture_o *v31; // x20
  UnityEngine_Material_o *v32; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v34; // x20
  bool HasProperty_71029840; // w0
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v40; // x8
  int32_t v41; // w21
  int32_t v42; // w22
  UnityEngine_Texture2D_o *v43; // x20
  struct UnityEngine_RenderTexture_o *v44; // x8
  int v45; // w21
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v48; // x23
  UnityEngine_Object_o *v49; // x21
  UnityEngine_ParticleSystem_ShapeModule_o v50; // x0
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  il2cpp_array_size_t v52; // x8
  unsigned __int64 v53; // x22
  UnityEngine_Object_o *v54; // x20
  UnityEngine_ParticleSystem_MainModule_o v55; // x0
  __int64 v56; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v57; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v58; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v59; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_Vector4_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C26071 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Graphics_TypeInfo);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Texture2D_TypeInfo);
    sub_1C2D490(&StringLiteral_16408/*"_Weights"*/);
    sub_1C2D490(&StringLiteral_16373/*"_Threshold"*/);
    sub_1C2D490(&StringLiteral_16244/*"_Intensity"*/);
    sub_1C2D490(&StringLiteral_16540/*"_customColor0"*/);
    sub_1C2D490(&StringLiteral_16317/*"_Rect"*/);
    sub_1C2D490(&StringLiteral_16370/*"_Thickness"*/);
    sub_1C2D490(&StringLiteral_16279/*"_Offset"*/);
    byte_4C26071 = 1;
  }
  m_ParticleSystem = 0;
  v59 = 0;
  if ( !this->fields._isInitialized )
    FGOEdgeBlur__Initialize(this, method);
  texture = (UnityEngine_Object_o *)this->fields._texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(texture, 0, 0) )
  {
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    v61.fields.x = this->fields._Rect.fields.m_XMin;
    v61.fields.y = this->fields._Rect.fields.m_YMin;
    v61.fields.w = v61.fields.y + this->fields._Rect.fields.m_Height;
    v61.fields.z = v61.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16317/*"_Rect"*/, v61, 0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16370/*"_Thickness"*/,
      this->fields._thickness,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16373/*"_Threshold"*/,
      this->fields._threshold,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16244/*"_Intensity"*/,
      this->fields._intensity,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16279/*"_Offset"*/,
      this->fields._offset,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloatArray_71034076(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16408/*"_Weights"*/,
      this->fields._weights,
      0);
    v6 = this->fields._texture;
    rt0 = this->fields._rt0;
    v8 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_71009228(v6, rt0, v8, 0, 0);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v9 = this->fields._rt0;
    if ( !v9 )
      goto LABEL_82;
    v10 = material;
    material = (__int64)((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v9->klass->vtable._6_get_height.methodPtr)(
                          v9,
                          this->fields._rt0,
                          v9->klass->vtable._6_get_height.method);
    v12 = (UnityEngine_Texture_o *)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v13 = material;
      v14 = 0;
      v15 = 8;
      while ( 1 )
      {
        v16 = v10 >= 0 ? v10 : v10 + 1;
        v17 = v13 >= 0 ? v13 : v13 + 1;
        if ( v13 < 32 || v10 < 32 )
          break;
        material = (__int64)this->fields._rt0;
        if ( !material )
          goto LABEL_82;
        renderTextures = (unsigned int *)this->fields._renderTextures;
        v10 = v16 >> 1;
        v13 = v17 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)material, 0);
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_71072008(v10, v13, 0, format, 0);
        if ( !renderTextures )
          goto LABEL_82;
        v21 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1C2D5CC(material, *(_QWORD *)(*(_QWORD *)renderTextures + 64LL));
          if ( !material )
          {
            v56 = sub_1C2D710(0);
            sub_1C2D5B8(v56, 0);
          }
        }
        if ( v14 >= renderTextures[6] )
          goto LABEL_83;
        *(_QWORD *)&renderTextures[v15] = v21;
        sub_1C2D434((CGThumbnailListItem_o *)&renderTextures[v15], (int32_t)v21, v11, v20);
        v22 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        UnityEngine_Graphics__Blit_71009228(v12, v21, v22, 1, 0);
        ++v14;
        v15 += 2;
        v12 = (UnityEngine_Texture_o *)v21;
        if ( (__int64)v14 >= this->fields._iteration )
        {
          v12 = (UnityEngine_Texture_o *)v21;
          break;
        }
      }
      if ( (int)v14 - 2 >= 0 )
      {
        v23 = (unsigned int)(v14 - 2);
        while ( 1 )
        {
          v24 = this->fields._renderTextures;
          if ( !v24 )
            goto LABEL_82;
          if ( v23 >= LODWORD(v24->max_length) )
            goto LABEL_83;
          v25 = v24->m_Items[v23];
          v26 = this->fields._material;
          if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          UnityEngine_Graphics__Blit_71009228(v12, v25, v26, 2, 0);
          v28 = this->fields._renderTextures;
          if ( !v28 )
            goto LABEL_82;
          if ( v23 >= LODWORD(v28->max_length) )
            goto LABEL_83;
          v29 = &v28->obj.klass + v23;
          v29[4] = 0;
          sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), 0, v11, v27);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v12, 0);
          v30 = (__int64)v23-- <= 0;
          v12 = (UnityEngine_Texture_o *)v25;
          if ( v30 )
            goto LABEL_49;
        }
      }
    }
    v25 = (UnityEngine_RenderTexture_o *)v12;
LABEL_49:
    v31 = this->fields._rt0;
    v32 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_71009228((UnityEngine_Texture_o *)v25, v31, v32, 3, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v25, 0);
    drawShader = this->fields._drawShader;
    v34 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v34, drawShader, 0);
    if ( !v34 )
      goto LABEL_82;
    UnityEngine_Material__set_mainTexture(v34, (UnityEngine_Texture_o *)this->fields._rt0, 0);
    HasProperty_71029840 = UnityEngine_Material__HasProperty_71029840(v34, (System_String_o *)StringLiteral_16540/*"_customColor0"*/, 0);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_71029840 )
      UnityEngine_Material__SetColor(v34, (System_String_o *)StringLiteral_16540/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0);
    else
      UnityEngine_Material__set_color(v34, *(UnityEngine_Color_o *)&r, 0);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v34, 0);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v40 = this->fields._rt0;
    if ( !v40 )
      goto LABEL_82;
    v41 = material;
    v42 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v40->klass->vtable._6_get_height.methodPtr)(
                          v40,
                          this->fields._rt0,
                          v40->klass->vtable._6_get_height.method);
    v43 = (UnityEngine_Texture2D_o *)sub_1C2D6DC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71051728(v43, v41, v42, 3, 0, 0, 0);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v44 = this->fields._rt0) == 0)
      || (v45 = material,
          material = (__int64)((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v44->klass->vtable._6_get_height.methodPtr)(
                                v44,
                                this->fields._rt0,
                                v44->klass->vtable._6_get_height.method),
          !v43) )
    {
LABEL_82:
      sub_1C2D6EC(material, v4);
    }
    v62.fields.m_Height = (float)(int)material;
    v62.fields.m_Width = (float)v45;
    v62.fields.m_XMin = 0.0;
    v62.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_71054192(v43, v62, 0, 0, 0);
    UnityEngine_Texture2D__Apply_71053772(v43, 0);
    UnityEngine_RenderTexture__set_active(0, 0);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      max_length = shapeSettingParticles->max_length;
      if ( (int)max_length >= 1 )
      {
        v48 = 0;
        while ( v48 < (unsigned int)max_length )
        {
          v49 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v48];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v49, 0, 0);
          if ( (material & 1) == 0 )
          {
            if ( !v49 )
              goto LABEL_82;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v49, 0).fields.m_ParticleSystem;
            v50.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v50, v43, 0);
          }
          LODWORD(max_length) = shapeSettingParticles->max_length;
          if ( (__int64)++v48 >= (int)max_length )
            goto LABEL_71;
        }
LABEL_83:
        sub_1C2D6F4(material, v4, v11);
      }
    }
LABEL_71:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v52 = colorSettingParticles->max_length;
      if ( (int)v52 >= 1 )
      {
        v53 = 0;
        while ( v53 < (unsigned int)v52 )
        {
          v54 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v53];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v54, 0, 0);
          if ( (material & 1) == 0 )
          {
            if ( !v54 )
              goto LABEL_82;
            v59 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v54, 0).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v58, this->fields._particleColor, 0);
            v55.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v59;
            v57 = v58;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v55, &v57, 0);
          }
          LODWORD(v52) = colorSettingParticles->max_length;
          if ( (__int64)++v53 >= (int)v52 )
            return;
        }
        goto LABEL_83;
      }
    }
  }
}


void FGOEdgeBlur__Initialize(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x8
  int max_length; // w8
  unsigned int v9; // w9
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x8
  int v11; // w8
  unsigned int v12; // w9
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v19; // x8
  int32_t v20; // w20
  int32_t v21; // w21
  UnityEngine_RenderTexture_o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppType *v25; // x20
  System_RuntimeTypeHandle_o v26; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Renderer_c *v31; // x9
  __int64 naturalAligment; // x10
  struct UnityEngine_Renderer_o *v33; // x11
  int32_t v34; // w1
  struct UnityEngine_Renderer_o **p_renderer; // x8

  if ( (byte_4C26070 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C2D490(&UnityEngine_Renderer_var);
    sub_1C2D490(&UnityEngine_Renderer_TypeInfo);
    sub_1C2D490(&System_Type_TypeInfo);
    byte_4C26070 = 1;
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
          v9 = 0;
          while ( v9 < max_length )
          {
            if ( (int)++v9 >= max_length )
              goto LABEL_12;
          }
LABEL_36:
          sub_1C2D6F4(v4, v5, v6);
        }
      }
LABEL_12:
      colorSettingParticles = this->fields._colorSettingParticles;
      if ( colorSettingParticles )
      {
        v11 = colorSettingParticles->max_length;
        if ( v11 >= 1 )
        {
          v12 = 0;
          while ( v12 < v11 )
          {
            if ( (int)++v12 >= v11 )
              goto LABEL_17;
          }
          goto LABEL_36;
        }
      }
LABEL_17:
      edgeShader = this->fields._edgeShader;
      v14 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v14, edgeShader, 0);
      this->fields._material = v14;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._material, (int32_t)v14, v15, v16);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))material->klass[1]._1.image)(
                                                 material,
                                                 material->klass[1]._1.gc_desc),
            (v19 = this->fields._texture) == 0) )
      {
        sub_1C2D6EC(material, v17);
      }
      v20 = (int)material;
      v21 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))v19->klass->vtable._6_get_height.methodPtr)(
                            v19,
                            this->fields._texture,
                            v19->klass->vtable._6_get_height.method);
      v22 = (UnityEngine_RenderTexture_o *)sub_1C2D6DC(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_71070392(v22, v20, v21, 0, 0, 0);
      this->fields._rt0 = v22;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields._rt0, (int32_t)v22, v23, v24);
      v25 = UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v26.fields.value = (intptr_t)v25;
      TypeFromHandle = System_Type__GetTypeFromHandle(v26, 0);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0);
      if ( Component )
      {
        v31 = UnityEngine_Renderer_TypeInfo;
        naturalAligment = UnityEngine_Renderer_TypeInfo->_2.naturalAligment;
        if ( Component->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_Renderer_TypeInfo )
            v33 = (struct UnityEngine_Renderer_o *)Component;
          else
            v33 = 0;
        }
        else
        {
          v33 = 0;
        }
        this->fields._renderer = v33;
        p_renderer = &this->fields._renderer;
        if ( Component->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[naturalAligment - 1] == v31 )
            v34 = (int)Component;
          else
            v34 = 0;
        }
        else
        {
          v34 = 0;
        }
      }
      else
      {
        v34 = 0;
        this->fields._renderer = 0;
        p_renderer = &this->fields._renderer;
      }
      sub_1C2D434((CGThumbnailListItem_o *)p_renderer, v34, v29, v30);
      this->fields._isInitialized = 1;
    }
  }
}


void FGOEdgeBlur__OnDestroy(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  FGOEdgeBlur_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  this->fields._material = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._material, 0, v2, v3);
  v4->fields._rt0 = 0;
  v4 = (FGOEdgeBlur_o *)((char *)v4 + 160);
  sub_1C2D434((CGThumbnailListItem_o *)v4, 0, v5, v6);
  LOBYTE(v4->fields.m_CancellationTokenSource) = 0;
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
  __int64 v3; // x2
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x19
  int max_length; // w8
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x20
  UnityEngine_Component_o *transform; // x0
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
      v9 = 0;
      do
      {
        if ( (unsigned int)v9 >= max_length )
          sub_1C2D6F4(this, method, v3);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v9];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
        {
          sub_1C2D6EC(transform, method);
        }
        v11.fields.x = x;
        v11.fields.y = y;
        v11.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v11, 0);
        max_length = shapeSettingParticles->max_length;
        ++v9;
      }
      while ( (int)v9 < max_length );
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
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields._texture = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._texture, (int32_t)value, (int32_t)method, v3);
  FGOEdgeBlur__Blur(this, v5);
}


void FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}