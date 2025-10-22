void FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  struct UnityEngine_RenderTexture_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Single_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C55ADB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_RenderTexture___TypeInfo);
    sub_1C3E564(&float___TypeInfo);
    byte_4C55ADB = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_C11D80;
  *(_OWORD *)&this->fields._thickness = xmmword_C13710;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v8 = (struct UnityEngine_RenderTexture_array *)sub_1C3E60C(UnityEngine_RenderTexture___TypeInfo, 6);
  this->fields._renderTextures = v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._renderTextures, (int32_t)v8, v9, v10);
  v11 = (struct System_Single_array *)sub_1C3E60C(float___TypeInfo, 10);
  this->fields._weights = v11;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._weights, (int32_t)v11, v12, v13);
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
  UnityEngine_Texture_o *v11; // x20
  int32_t v12; // w22
  unsigned __int64 v13; // x27
  __int64 v14; // x28
  int v15; // w8
  int v16; // w9
  unsigned int *renderTextures; // x24
  int32_t format; // w0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_RenderTexture_o *v21; // x23
  UnityEngine_Material_o *v22; // x24
  unsigned __int64 v23; // x23
  struct UnityEngine_RenderTexture_array *v24; // x8
  UnityEngine_RenderTexture_o *v25; // x21
  UnityEngine_Material_o *v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UnityEngine_RenderTexture_array *v29; // x8
  Il2CppClass **v30; // x0
  bool v31; // cc
  UnityEngine_RenderTexture_o *v32; // x20
  UnityEngine_Material_o *v33; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v35; // x20
  bool HasProperty_71207700; // w0
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_Texture2D_o **p_currentScreen; // x20
  UnityEngine_Object_o *currentScreen; // x21
  UnityEngine_Object_o *v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct UnityEngine_RenderTexture_o *v46; // x8
  int32_t v47; // w22
  int32_t v48; // w23
  UnityEngine_Texture2D_o *v49; // x21
  struct UnityEngine_RenderTexture_o *v50; // x8
  int v51; // w22
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v56; // x24
  UnityEngine_Object_o *v57; // x22
  UnityEngine_ParticleSystem_ShapeModule_o v58; // x0
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  il2cpp_array_size_t v60; // x8
  unsigned __int64 v61; // x22
  UnityEngine_Object_o *v62; // x20
  UnityEngine_ParticleSystem_MainModule_o v63; // x0
  __int64 v64; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v65; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v66; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v67; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_Vector4_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C55ADA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Graphics_TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Texture2D_TypeInfo);
    sub_1C3E564(&StringLiteral_16422/*"_Weights"*/);
    sub_1C3E564(&StringLiteral_16387/*"_Threshold"*/);
    sub_1C3E564(&StringLiteral_16258/*"_Intensity"*/);
    sub_1C3E564(&StringLiteral_16554/*"_customColor0"*/);
    sub_1C3E564(&StringLiteral_16331/*"_Rect"*/);
    sub_1C3E564(&StringLiteral_16384/*"_Thickness"*/);
    sub_1C3E564(&StringLiteral_16293/*"_Offset"*/);
    byte_4C55ADA = 1;
  }
  m_ParticleSystem = 0;
  v67 = 0;
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
    v69.fields.x = this->fields._Rect.fields.m_XMin;
    v69.fields.y = this->fields._Rect.fields.m_YMin;
    v69.fields.w = v69.fields.y + this->fields._Rect.fields.m_Height;
    v69.fields.z = v69.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16331/*"_Rect"*/, v69, 0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16384/*"_Thickness"*/,
      this->fields._thickness,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16387/*"_Threshold"*/,
      this->fields._threshold,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16258/*"_Intensity"*/,
      this->fields._intensity,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16293/*"_Offset"*/,
      this->fields._offset,
      0);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Material__SetFloatArray_71211936(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16422/*"_Weights"*/,
      this->fields._weights,
      0);
    v6 = this->fields._texture;
    rt0 = this->fields._rt0;
    v8 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_71187088(v6, rt0, v8, 0, 0);
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
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_71249868(v10, v12, 0, format, 0);
        if ( !renderTextures )
          goto LABEL_88;
        v21 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1C3E6A0(material, *(_QWORD *)(*(_QWORD *)renderTextures + 64LL));
          if ( !material )
          {
            v64 = sub_1C3E7E4(0);
            sub_1C3E68C(v64, 0);
          }
        }
        if ( v13 >= renderTextures[6] )
          goto LABEL_89;
        *(_QWORD *)&renderTextures[v14] = v21;
        sub_1C3E508((CGThumbnailListItem_o *)&renderTextures[v14], (int32_t)v21, v19, v20);
        v22 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        UnityEngine_Graphics__Blit_71187088(v11, v21, v22, 1, 0);
        ++v13;
        v14 += 2;
        v11 = (UnityEngine_Texture_o *)v21;
        if ( (__int64)v13 >= this->fields._iteration )
        {
          v11 = (UnityEngine_Texture_o *)v21;
          break;
        }
      }
      if ( (int)v13 - 2 >= 0 )
      {
        v23 = (unsigned int)(v13 - 2);
        while ( 1 )
        {
          v24 = this->fields._renderTextures;
          if ( !v24 )
            goto LABEL_88;
          if ( v23 >= LODWORD(v24->max_length) )
            goto LABEL_89;
          v25 = v24->m_Items[v23];
          v26 = this->fields._material;
          if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          UnityEngine_Graphics__Blit_71187088(v11, v25, v26, 2, 0);
          v29 = this->fields._renderTextures;
          if ( !v29 )
            goto LABEL_88;
          if ( v23 >= LODWORD(v29->max_length) )
            goto LABEL_89;
          v30 = &v29->obj.klass + v23;
          v30[4] = 0;
          sub_1C3E508((CGThumbnailListItem_o *)(v30 + 4), 0, v27, v28);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v11, 0);
          v31 = (__int64)v23-- <= 0;
          v11 = (UnityEngine_Texture_o *)v25;
          if ( v31 )
            goto LABEL_49;
        }
      }
    }
    v25 = (UnityEngine_RenderTexture_o *)v11;
LABEL_49:
    v32 = this->fields._rt0;
    v33 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_71187088((UnityEngine_Texture_o *)v25, v32, v33, 3, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(v25, 0);
    drawShader = this->fields._drawShader;
    v35 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v35, drawShader, 0);
    if ( !v35 )
      goto LABEL_88;
    UnityEngine_Material__set_mainTexture(v35, (UnityEngine_Texture_o *)this->fields._rt0, 0);
    HasProperty_71207700 = UnityEngine_Material__HasProperty_71207700(v35, (System_String_o *)StringLiteral_16554/*"_customColor0"*/, 0);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_71207700 )
      UnityEngine_Material__SetColor(v35, (System_String_o *)StringLiteral_16554/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0);
    else
      UnityEngine_Material__set_color(v35, *(UnityEngine_Color_o *)&r, 0);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_88;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v35, 0);
    p_currentScreen = &this->fields.currentScreen;
    currentScreen = (UnityEngine_Object_o *)this->fields.currentScreen;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentScreen, 0, 0) )
    {
      v43 = (UnityEngine_Object_o *)*p_currentScreen;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v43, 0);
      *p_currentScreen = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.currentScreen, 0, v44, v45);
    }
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_88;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v46 = this->fields._rt0;
    if ( !v46 )
      goto LABEL_88;
    v47 = material;
    v48 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v46->klass->vtable._6_get_height.methodPtr)(
                          v46,
                          this->fields._rt0,
                          v46->klass->vtable._6_get_height.method);
    v49 = (UnityEngine_Texture2D_o *)sub_1C3E7B0(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71229588(v49, v47, v48, 3, 0, 0, 0);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v50 = this->fields._rt0) == 0)
      || (v51 = material,
          material = (__int64)((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *__return_ptr, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v50->klass->vtable._6_get_height.methodPtr)(
                                v50,
                                this->fields._rt0,
                                v50->klass->vtable._6_get_height.method),
          !v49) )
    {
LABEL_88:
      sub_1C3E7C0(material, v4);
    }
    v70.fields.m_Height = (float)(int)material;
    v70.fields.m_Width = (float)v51;
    v70.fields.m_XMin = 0.0;
    v70.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_71232052(v49, v70, 0, 0, 0);
    UnityEngine_Texture2D__Apply_71231632(v49, 0);
    UnityEngine_RenderTexture__set_active(0, 0);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      max_length = shapeSettingParticles->max_length;
      if ( (int)max_length >= 1 )
      {
        v56 = 0;
        while ( v56 < (unsigned int)max_length )
        {
          v57 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v56];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v57, 0, 0);
          if ( (material & 1) == 0 )
          {
            if ( !v57 )
              goto LABEL_88;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v57, 0).fields.m_ParticleSystem;
            v58.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v58, v49, 0);
          }
          LODWORD(max_length) = shapeSettingParticles->max_length;
          if ( (__int64)++v56 >= (int)max_length )
            goto LABEL_77;
        }
LABEL_89:
        sub_1C3E7C8(material, v4);
      }
    }
LABEL_77:
    this->fields.currentScreen = v49;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.currentScreen, (int32_t)v49, v52, v53);
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v60 = colorSettingParticles->max_length;
      if ( (int)v60 >= 1 )
      {
        v61 = 0;
        while ( v61 < (unsigned int)v60 )
        {
          v62 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v61];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v62, 0, 0);
          if ( (material & 1) == 0 )
          {
            if ( !v62 )
              goto LABEL_88;
            v67 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v62, 0).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v66, this->fields._particleColor, 0);
            v63.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v67;
            v65 = v66;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v63, &v65, 0);
          }
          LODWORD(v60) = colorSettingParticles->max_length;
          if ( (__int64)++v61 >= (int)v60 )
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
  __int64 v5; // x1
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x8
  int max_length; // w8
  unsigned int v8; // w9
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x8
  int v10; // w8
  unsigned int v11; // w9
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v18; // x8
  int32_t v19; // w20
  int32_t v20; // w21
  UnityEngine_RenderTexture_o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppType *v24; // x20
  System_RuntimeTypeHandle_o v25; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Renderer_c *v30; // x9
  __int64 naturalAligment; // x10
  struct UnityEngine_Renderer_o *v32; // x11
  int32_t v33; // w1
  struct UnityEngine_Renderer_o **p_renderer; // x8

  if ( (byte_4C55AD9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C3E564(&UnityEngine_Renderer_var);
    sub_1C3E564(&UnityEngine_Renderer_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    byte_4C55AD9 = 1;
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
          v8 = 0;
          while ( v8 < max_length )
          {
            if ( (int)++v8 >= max_length )
              goto LABEL_12;
          }
LABEL_36:
          sub_1C3E7C8(v4, v5);
        }
      }
LABEL_12:
      colorSettingParticles = this->fields._colorSettingParticles;
      if ( colorSettingParticles )
      {
        v10 = colorSettingParticles->max_length;
        if ( v10 >= 1 )
        {
          v11 = 0;
          while ( v11 < v10 )
          {
            if ( (int)++v11 >= v10 )
              goto LABEL_17;
          }
          goto LABEL_36;
        }
      }
LABEL_17:
      edgeShader = this->fields._edgeShader;
      v13 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v13, edgeShader, 0);
      this->fields._material = v13;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._material, (int32_t)v13, v14, v15);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))material->klass[1]._1.image)(
                                                 material,
                                                 material->klass[1]._1.gc_desc),
            (v18 = this->fields._texture) == 0) )
      {
        sub_1C3E7C0(material, v16);
      }
      v19 = (int)material;
      v20 = (unsigned int)((_QWORD *(__fastcall *)(struct UnityEngine_Texture_o *__return_ptr, struct UnityEngine_Texture_o *, const MethodInfo *))v18->klass->vtable._6_get_height.methodPtr)(
                            v18,
                            this->fields._texture,
                            v18->klass->vtable._6_get_height.method);
      v21 = (UnityEngine_RenderTexture_o *)sub_1C3E7B0(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_71248252(v21, v19, v20, 0, 0, 0);
      this->fields._rt0 = v21;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields._rt0, (int32_t)v21, v22, v23);
      v24 = UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v25.fields.value = (intptr_t)v24;
      TypeFromHandle = System_Type__GetTypeFromHandle(v25, 0);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0);
      if ( Component )
      {
        v30 = UnityEngine_Renderer_TypeInfo;
        naturalAligment = UnityEngine_Renderer_TypeInfo->_2.naturalAligment;
        if ( Component->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_Renderer_TypeInfo )
            v32 = (struct UnityEngine_Renderer_o *)Component;
          else
            v32 = 0;
        }
        else
        {
          v32 = 0;
        }
        this->fields._renderer = v32;
        p_renderer = &this->fields._renderer;
        if ( Component->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[naturalAligment - 1] == v30 )
            v33 = (int)Component;
          else
            v33 = 0;
        }
        else
        {
          v33 = 0;
        }
      }
      else
      {
        v33 = 0;
        this->fields._renderer = 0;
        p_renderer = &this->fields._renderer;
      }
      sub_1C3E508((CGThumbnailListItem_o *)p_renderer, v33, v28, v29);
      this->fields._isInitialized = 1;
    }
  }
}


void FGOEdgeBlur__OnDestroy(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UnityEngine_RenderTexture_o **p_rt0; // x20
  UnityEngine_Object_o *rt0; // x21
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_currentScreen; // x19
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_Texture2D_o *currentScreen; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C55AD8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55AD8 = 1;
  }
  this->fields._material = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._material, 0, v2, v3);
  p_rt0 = &this->fields._rt0;
  rt0 = (UnityEngine_Object_o *)this->fields._rt0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rt0, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)*p_rt0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v7, 0);
    *p_rt0 = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._rt0, 0, v8, v9);
  }
  currentScreen = this->fields.currentScreen;
  p_currentScreen = (CGThumbnailListItem_o *)&this->fields.currentScreen;
  v11 = (UnityEngine_Object_o *)currentScreen;
  LOBYTE(p_currentScreen[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_currentScreen->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(klass, 0);
    p_currentScreen->klass = 0;
    sub_1C3E508(p_currentScreen, 0, v14, v15);
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
          sub_1C3E7C8(this, method);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
        {
          sub_1C3E7C0(transform, method);
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
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields._texture = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._texture, (int32_t)value, (int32_t)method, v3);
  FGOEdgeBlur__Blur(this, v5);
}


void FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}