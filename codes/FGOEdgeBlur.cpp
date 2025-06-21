void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_RenderTexture_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Single_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B1B2E1 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_RenderTexture___TypeInfo, method);
    sub_1BCAFF8(&float___TypeInfo, v3);
    byte_4B1B2E1 = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_BE1DA0;
  *(_OWORD *)&this->fields._thickness = xmmword_BE3660;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v9 = (struct UnityEngine_RenderTexture_array *)sub_1BCB0A0(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._renderTextures, (int32_t)v9, v10, v11);
  v12 = (struct System_Single_array *)sub_1BCB0A0(float___TypeInfo, 10LL);
  this->fields._weights = v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._weights, (int32_t)v12, v13, v14);
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
  __int64 v14; // x1
  __int64 material; // x0
  UnityEngine_Texture_o *v16; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v18; // x21
  struct UnityEngine_RenderTexture_o *v19; // x8
  int v20; // w21
  __int64 v21; // x2
  UnityEngine_Texture_o *v22; // x20
  int v23; // w22
  unsigned __int64 v24; // x27
  __int64 v25; // x28
  int v26; // w8
  int v27; // w9
  struct UnityEngine_RenderTexture_array *renderTextures; // x24
  int32_t format; // w0
  const MethodInfo *v30; // x3
  UnityEngine_RenderTexture_o *v31; // x23
  UnityEngine_Material_o *v32; // x24
  unsigned __int64 v33; // x23
  struct UnityEngine_RenderTexture_array *v34; // x8
  UnityEngine_RenderTexture_o *v35; // x21
  UnityEngine_Material_o *v36; // x22
  const MethodInfo *v37; // x3
  struct UnityEngine_RenderTexture_array *v38; // x8
  Il2CppClass **v39; // x0
  bool v40; // cc
  UnityEngine_RenderTexture_o *v41; // x20
  UnityEngine_Material_o *v42; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v44; // x20
  bool HasProperty_70002212; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v50; // x8
  int32_t v51; // w21
  int32_t v52; // w22
  UnityEngine_Texture2D_o *v53; // x20
  struct UnityEngine_RenderTexture_o *v54; // x8
  int v55; // w21
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v57; // x8
  unsigned __int64 v58; // x23
  UnityEngine_Object_o *v59; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v61; // x8
  unsigned __int64 v62; // x22
  UnityEngine_Object_o *v63; // x20
  __int64 v64; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v65; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v66; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v67; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v69; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v70; // 0:x0.8
  UnityEngine_Vector4_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1B2E0 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Graphics_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Material_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_Texture2D_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_16276/*"_Weights"*/, v6);
    sub_1BCAFF8(&StringLiteral_16241/*"_Threshold"*/, v7);
    sub_1BCAFF8(&StringLiteral_16112/*"_Intensity"*/, v8);
    sub_1BCAFF8(&StringLiteral_16408/*"_customColor0"*/, v9);
    sub_1BCAFF8(&StringLiteral_16185/*"_Rect"*/, v10);
    sub_1BCAFF8(&StringLiteral_16238/*"_Thickness"*/, v11);
    sub_1BCAFF8(&StringLiteral_16147/*"_Offset"*/, v12);
    byte_4B1B2E0 = 1;
  }
  m_ParticleSystem = 0LL;
  v67 = 0LL;
  if ( !this->fields._isInitialized )
    FGOEdgeBlur__Initialize(this, method);
  texture = (UnityEngine_Object_o *)this->fields._texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(texture, 0LL, 0LL) )
  {
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    v71.fields.x = this->fields._Rect.fields.m_XMin;
    v71.fields.y = this->fields._Rect.fields.m_YMin;
    v71.fields.w = v71.fields.y + this->fields._Rect.fields.m_Height;
    v71.fields.z = v71.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16185/*"_Rect"*/,
      v71,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16238/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16241/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16112/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16147/*"_Offset"*/,
      this->fields._offset,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloatArray_70006448(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16276/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v16 = this->fields._texture;
    rt0 = this->fields._rt0;
    v18 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_69981600(v16, rt0, v18, 0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v19 = this->fields._rt0;
    if ( !v19 )
      goto LABEL_82;
    v20 = material;
    material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v19->klass->vtable._6_get_height.method)(
                 this->fields._rt0,
                 v19->klass->vtable._7_set_height.methodPtr);
    v22 = (UnityEngine_Texture_o *)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v23 = material;
      v24 = 0LL;
      v25 = 32LL;
      while ( 1 )
      {
        v26 = v20 >= 0 ? v20 : v20 + 1;
        v27 = v23 >= 0 ? v23 : v23 + 1;
        if ( v23 < 32 || v20 < 32 )
          break;
        material = (__int64)this->fields._rt0;
        if ( !material )
          goto LABEL_82;
        renderTextures = this->fields._renderTextures;
        v20 = v26 >> 1;
        v23 = v27 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)material, 0LL);
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_70044380(v20, v23, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_82;
        v31 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1BCB134(material, renderTextures->obj.klass->_1.element_class);
          if ( !material )
          {
            v64 = sub_1BCB278(0LL);
            sub_1BCB120(v64, 0LL);
          }
        }
        if ( v24 >= renderTextures->max_length )
          goto LABEL_83;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v25) = (Il2CppClass *)v31;
        sub_1BCAF9C((CGThumbnailListItem_o *)((char *)renderTextures + v25), (int32_t)v31, v21, v30);
        v32 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        UnityEngine_Graphics__Blit_69981600(v22, v31, v32, 1, 0LL);
        ++v24;
        v25 += 8LL;
        v22 = (UnityEngine_Texture_o *)v31;
        if ( (__int64)v24 >= this->fields._iteration )
        {
          v22 = (UnityEngine_Texture_o *)v31;
          break;
        }
      }
      if ( (int)v24 - 2 >= 0 )
      {
        v33 = (unsigned int)(v24 - 2);
        while ( 1 )
        {
          v34 = this->fields._renderTextures;
          if ( !v34 )
            goto LABEL_82;
          if ( v33 >= v34->max_length )
            goto LABEL_83;
          v35 = v34->m_Items[v33];
          v36 = this->fields._material;
          if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          UnityEngine_Graphics__Blit_69981600(v22, v35, v36, 2, 0LL);
          v38 = this->fields._renderTextures;
          if ( !v38 )
            goto LABEL_82;
          if ( v33 >= v38->max_length )
            goto LABEL_83;
          v39 = &v38->obj.klass + v33;
          v39[4] = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 4), 0, v21, v37);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v22, 0LL);
          v40 = (__int64)v33-- <= 0;
          v22 = (UnityEngine_Texture_o *)v35;
          if ( v40 )
            goto LABEL_49;
        }
      }
    }
    v35 = (UnityEngine_RenderTexture_o *)v22;
LABEL_49:
    v41 = this->fields._rt0;
    v42 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_69981600((UnityEngine_Texture_o *)v35, v41, v42, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(v35, 0LL);
    drawShader = this->fields._drawShader;
    v44 = (UnityEngine_Material_o *)sub_1BCB244(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v44, drawShader, 0LL);
    if ( !v44 )
      goto LABEL_82;
    UnityEngine_Material__set_mainTexture(v44, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_70002212 = UnityEngine_Material__HasProperty_70002212(v44, (System_String_o *)StringLiteral_16408/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_70002212 )
      UnityEngine_Material__SetColor(v44, (System_String_o *)StringLiteral_16408/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v44, *(UnityEngine_Color_o *)&r, 0LL);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v44, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v50 = this->fields._rt0;
    if ( !v50 )
      goto LABEL_82;
    v51 = material;
    v52 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v50->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v50->klass->vtable._7_set_height.methodPtr);
    v53 = (UnityEngine_Texture2D_o *)sub_1BCB244(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_70024100(v53, v51, v52, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v54 = this->fields._rt0) == 0LL)
      || (v55 = material,
          material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v54->klass->vtable._6_get_height.method)(
                       this->fields._rt0,
                       v54->klass->vtable._7_set_height.methodPtr),
          !v53) )
    {
LABEL_82:
      sub_1BCB254(material, v14);
    }
    v72.fields.m_Height = (float)(int)material;
    v72.fields.m_Width = (float)v55;
    v72.fields.m_XMin = 0.0;
    v72.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_70026564(v53, v72, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_70026144(v53, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v57 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v57 >= 1 )
      {
        v58 = 0LL;
        while ( v58 < (unsigned int)v57 )
        {
          v59 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v58];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v59, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v59 )
              goto LABEL_82;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v59, 0LL).fields.m_ParticleSystem;
            v69.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v69, v53, 0LL);
          }
          LODWORD(v57) = shapeSettingParticles->max_length;
          if ( (__int64)++v58 >= (int)v57 )
            goto LABEL_71;
        }
LABEL_83:
        sub_1BCB25C(material, v14, v21);
      }
    }
LABEL_71:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v61 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v61 >= 1 )
      {
        v62 = 0LL;
        while ( v62 < (unsigned int)v61 )
        {
          v63 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v62];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v63, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v63 )
              goto LABEL_82;
            v67 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v63, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v66, this->fields._particleColor, 0LL);
            v70.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v67;
            v65 = v66;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v70, &v65, 0LL);
          }
          LODWORD(v61) = colorSettingParticles->max_length;
          if ( (__int64)++v62 >= (int)v61 )
            return;
        }
        goto LABEL_83;
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v24; // x8
  int32_t v25; // w20
  int32_t v26; // w21
  UnityEngine_RenderTexture_o *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  intptr_t v30; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Renderer_c *v35; // x9
  __int64 methodPtr_low; // x10
  struct UnityEngine_Renderer_o *v37; // x11
  int32_t v38; // w1
  struct UnityEngine_Renderer_o **p_renderer; // x8
  System_RuntimeTypeHandle_o v40; // 0:w0.4

  if ( (byte_4B1B2DF & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Material_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_RenderTexture_TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_Renderer_var, v5);
    sub_1BCAFF8(&UnityEngine_Renderer_TypeInfo, v6);
    sub_1BCAFF8(&System_Type_TypeInfo, v7);
    byte_4B1B2DF = 1;
  }
  if ( !this->fields._isInitialized )
  {
    texture = (UnityEngine_Object_o *)this->fields._texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              goto LABEL_12;
          }
LABEL_36:
          sub_1BCB25C(v9, v10, v11);
        }
      }
LABEL_12:
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
              goto LABEL_17;
          }
          goto LABEL_36;
        }
      }
LABEL_17:
      edgeShader = this->fields._edgeShader;
      v19 = (UnityEngine_Material_o *)sub_1BCB244(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v19, edgeShader, 0LL);
      this->fields._material = v19;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._material, (int32_t)v19, v20, v21);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v24 = this->fields._texture) == 0LL) )
      {
        sub_1BCB254(material, v22);
      }
      v25 = (int)material;
      v26 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v24->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v24->klass->vtable._7_set_height.methodPtr);
      v27 = (UnityEngine_RenderTexture_o *)sub_1BCB244(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_70042764(v27, v25, v26, 0, 0, 0LL);
      this->fields._rt0 = v27;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._rt0, (int32_t)v27, v28, v29);
      v30 = (int)UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v40.fields.value = v30;
      TypeFromHandle = System_Type__GetTypeFromHandle(v40, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component )
      {
        v35 = UnityEngine_Renderer_TypeInfo;
        methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_Renderer_TypeInfo )
            v37 = (struct UnityEngine_Renderer_o *)Component;
          else
            v37 = 0LL;
        }
        else
        {
          v37 = 0LL;
        }
        this->fields._renderer = v37;
        p_renderer = &this->fields._renderer;
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == v35 )
            v38 = (int)Component;
          else
            v38 = 0;
        }
        else
        {
          v38 = 0;
        }
      }
      else
      {
        v38 = 0;
        this->fields._renderer = 0LL;
        p_renderer = &this->fields._renderer;
      }
      sub_1BCAF9C((CGThumbnailListItem_o *)p_renderer, v38, v33, v34);
      this->fields._isInitialized = 1;
    }
  }
}


void __fastcall FGOEdgeBlur__OnDestroy(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  FGOEdgeBlur_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  this->fields._material = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._material, 0, v2, v3);
  v4->fields._rt0 = 0LL;
  v4 = (FGOEdgeBlur_o *)((char *)v4 + 160);
  sub_1BCAF9C((CGThumbnailListItem_o *)v4, 0, v5, v6);
  LOBYTE(v4->fields.m_CancellationTokenSource) = 0;
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
      v9 = 0LL;
      do
      {
        if ( (unsigned int)v9 >= max_length )
          sub_1BCB25C(this, method, v3);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v9];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_1BCB254(transform, method);
        }
        v11.fields.x = x;
        v11.fields.y = y;
        v11.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v11, 0LL);
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
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields._texture = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._texture, (int32_t)value, (int32_t)method, v3);
  FGOEdgeBlur__Blur(this, v5);
}


void __fastcall FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}