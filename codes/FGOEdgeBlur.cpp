void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_RenderTexture_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Single_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FDA09 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_RenderTexture___TypeInfo, method);
    sub_1B64A00(&float___TypeInfo, v3);
    byte_49FDA09 = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_BA2F90;
  *(_OWORD *)&this->fields._thickness = xmmword_BA4780;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v9 = (struct UnityEngine_RenderTexture_array *)sub_1B64AA8(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v9;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._renderTextures, (int32_t)v9, v10, v11);
  v12 = (struct System_Single_array *)sub_1B64AA8(float___TypeInfo, 10LL);
  this->fields._weights = v12;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._weights, (int32_t)v12, v13, v14);
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
  UnityEngine_Texture_o *v21; // x20
  int v22; // w22
  unsigned __int64 v23; // x27
  __int64 v24; // x28
  int v25; // w8
  int v26; // w9
  struct UnityEngine_RenderTexture_array *renderTextures; // x24
  int32_t format; // w0
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_RenderTexture_o *v31; // x23
  UnityEngine_Material_o *v32; // x24
  unsigned __int64 v33; // x23
  struct UnityEngine_RenderTexture_array *v34; // x8
  UnityEngine_RenderTexture_o *v35; // x21
  UnityEngine_Material_o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  struct UnityEngine_RenderTexture_array *v39; // x8
  Il2CppClass **v40; // x0
  bool v41; // cc
  UnityEngine_RenderTexture_o *v42; // x20
  UnityEngine_Material_o *v43; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v45; // x20
  bool HasProperty_69003744; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v51; // x8
  int32_t v52; // w21
  int32_t v53; // w22
  UnityEngine_Texture2D_o *v54; // x20
  struct UnityEngine_RenderTexture_o *v55; // x8
  int v56; // w21
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v58; // x8
  unsigned __int64 v59; // x23
  UnityEngine_Object_o *v60; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v62; // x8
  unsigned __int64 v63; // x22
  UnityEngine_Object_o *v64; // x20
  __int64 v65; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v66; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v67; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v68; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v70; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v71; // 0:x0.8
  UnityEngine_Vector4_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FDA08 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Graphics_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Material_TypeInfo, v3);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64A00(&UnityEngine_Texture2D_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_16338/*"_Weights"*/, v6);
    sub_1B64A00(&StringLiteral_16305/*"_Threshold"*/, v7);
    sub_1B64A00(&StringLiteral_16180/*"_Intensity"*/, v8);
    sub_1B64A00(&StringLiteral_16469/*"_customColor0"*/, v9);
    sub_1B64A00(&StringLiteral_16249/*"_Rect"*/, v10);
    sub_1B64A00(&StringLiteral_16302/*"_Thickness"*/, v11);
    sub_1B64A00(&StringLiteral_16214/*"_Offset"*/, v12);
    byte_49FDA08 = 1;
  }
  m_ParticleSystem = 0LL;
  v68 = 0LL;
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
    v72.fields.x = this->fields._Rect.fields.m_XMin;
    v72.fields.y = this->fields._Rect.fields.m_YMin;
    v72.fields.w = v72.fields.y + this->fields._Rect.fields.m_Height;
    v72.fields.z = v72.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16249/*"_Rect"*/,
      v72,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16302/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16305/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16180/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16214/*"_Offset"*/,
      this->fields._offset,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloatArray_69007896(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16338/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v16 = this->fields._texture;
    rt0 = this->fields._rt0;
    v18 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_68983364(v16, rt0, v18, 0, 0LL);
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
    v21 = (UnityEngine_Texture_o *)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v22 = material;
      v23 = 0LL;
      v24 = 32LL;
      while ( 1 )
      {
        v25 = v20 >= 0 ? v20 : v20 + 1;
        v26 = v22 >= 0 ? v22 : v22 + 1;
        if ( v22 < 32 || v20 < 32 )
          break;
        material = (__int64)this->fields._rt0;
        if ( !material )
          goto LABEL_82;
        renderTextures = this->fields._renderTextures;
        v20 = v25 >> 1;
        v22 = v26 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)material, 0LL);
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_69045760(v20, v22, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_82;
        v31 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1B64B3C(material, renderTextures->obj.klass->_1.element_class);
          if ( !material )
          {
            v65 = sub_1B64C80(0LL);
            sub_1B64B28(v65, 0LL);
          }
        }
        if ( v23 >= renderTextures->max_length )
          goto LABEL_83;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v24) = (Il2CppClass *)v31;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)renderTextures + v24), (int32_t)v31, v29, v30);
        v32 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        UnityEngine_Graphics__Blit_68983364(v21, v31, v32, 1, 0LL);
        ++v23;
        v24 += 8LL;
        v21 = (UnityEngine_Texture_o *)v31;
        if ( (__int64)v23 >= this->fields._iteration )
        {
          v21 = (UnityEngine_Texture_o *)v31;
          break;
        }
      }
      if ( (int)v23 - 2 >= 0 )
      {
        v33 = (unsigned int)(v23 - 2);
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
          UnityEngine_Graphics__Blit_68983364(v21, v35, v36, 2, 0LL);
          v39 = this->fields._renderTextures;
          if ( !v39 )
            goto LABEL_82;
          if ( v33 >= v39->max_length )
            goto LABEL_83;
          v40 = &v39->obj.klass + v33;
          v40[4] = 0LL;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v40 + 4), 0, v37, v38);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v21, 0LL);
          v41 = (__int64)v33-- <= 0;
          v21 = (UnityEngine_Texture_o *)v35;
          if ( v41 )
            goto LABEL_49;
        }
      }
    }
    v35 = (UnityEngine_RenderTexture_o *)v21;
LABEL_49:
    v42 = this->fields._rt0;
    v43 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_68983364((UnityEngine_Texture_o *)v35, v42, v43, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(v35, 0LL);
    drawShader = this->fields._drawShader;
    v45 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v45, drawShader, 0LL);
    if ( !v45 )
      goto LABEL_82;
    UnityEngine_Material__set_mainTexture(v45, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_69003744 = UnityEngine_Material__HasProperty_69003744(v45, (System_String_o *)StringLiteral_16469/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_69003744 )
      UnityEngine_Material__SetColor(v45, (System_String_o *)StringLiteral_16469/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v45, *(UnityEngine_Color_o *)&r, 0LL);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v45, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v51 = this->fields._rt0;
    if ( !v51 )
      goto LABEL_82;
    v52 = material;
    v53 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v51->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v51->klass->vtable._7_set_height.methodPtr);
    v54 = (UnityEngine_Texture2D_o *)sub_1B64C4C(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69025548(v54, v52, v53, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v55 = this->fields._rt0) == 0LL)
      || (v56 = material,
          material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v55->klass->vtable._6_get_height.method)(
                       this->fields._rt0,
                       v55->klass->vtable._7_set_height.methodPtr),
          !v54) )
    {
LABEL_82:
      sub_1B64C5C(material, v14);
    }
    v73.fields.m_Height = (float)(int)material;
    v73.fields.m_Width = (float)v56;
    v73.fields.m_XMin = 0.0;
    v73.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_69028012(v54, v73, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_69027592(v54, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v58 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v58 >= 1 )
      {
        v59 = 0LL;
        while ( v59 < (unsigned int)v58 )
        {
          v60 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v59];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v60, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v60 )
              goto LABEL_82;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v60, 0LL).fields.m_ParticleSystem;
            v70.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v70, v54, 0LL);
          }
          LODWORD(v58) = shapeSettingParticles->max_length;
          if ( (__int64)++v59 >= (int)v58 )
            goto LABEL_71;
        }
LABEL_83:
        sub_1B64C64(material, v14);
      }
    }
LABEL_71:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v62 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v62 >= 1 )
      {
        v63 = 0LL;
        while ( v63 < (unsigned int)v62 )
        {
          v64 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v63];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v64, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v64 )
              goto LABEL_82;
            v68 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v64, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v67, this->fields._particleColor, 0LL);
            v71.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v68;
            v66 = v67;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v71, &v66, 0LL);
          }
          LODWORD(v62) = colorSettingParticles->max_length;
          if ( (__int64)++v63 >= (int)v62 )
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
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x8
  int max_length; // w8
  unsigned int v13; // w9
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x8
  int v15; // w8
  unsigned int v16; // w9
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v23; // x8
  int32_t v24; // w20
  int32_t v25; // w21
  UnityEngine_RenderTexture_o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  intptr_t v29; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Renderer_c *v34; // x9
  __int64 methodPtr_low; // x10
  struct UnityEngine_Renderer_o *v36; // x11
  int32_t v37; // w1
  struct UnityEngine_Renderer_o **p_renderer; // x8
  System_RuntimeTypeHandle_o v39; // 0:w0.4

  if ( (byte_49FDA07 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Material_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64A00(&UnityEngine_RenderTexture_TypeInfo, v4);
    sub_1B64A00(&UnityEngine_Renderer_var, v5);
    sub_1B64A00(&UnityEngine_Renderer_TypeInfo, v6);
    sub_1B64A00(&System_Type_TypeInfo, v7);
    byte_49FDA07 = 1;
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
          v13 = 0;
          while ( v13 < max_length )
          {
            if ( (int)++v13 >= max_length )
              goto LABEL_12;
          }
LABEL_36:
          sub_1B64C64(v9, v10);
        }
      }
LABEL_12:
      colorSettingParticles = this->fields._colorSettingParticles;
      if ( colorSettingParticles )
      {
        v15 = colorSettingParticles->max_length;
        if ( v15 >= 1 )
        {
          v16 = 0;
          while ( v16 < v15 )
          {
            if ( (int)++v16 >= v15 )
              goto LABEL_17;
          }
          goto LABEL_36;
        }
      }
LABEL_17:
      edgeShader = this->fields._edgeShader;
      v18 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v18, edgeShader, 0LL);
      this->fields._material = v18;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._material, (int32_t)v18, v19, v20);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v23 = this->fields._texture) == 0LL) )
      {
        sub_1B64C5C(material, v21);
      }
      v24 = (int)material;
      v25 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v23->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v23->klass->vtable._7_set_height.methodPtr);
      v26 = (UnityEngine_RenderTexture_o *)sub_1B64C4C(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_69044144(v26, v24, v25, 0, 0, 0LL);
      this->fields._rt0 = v26;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._rt0, (int32_t)v26, v27, v28);
      v29 = (int)UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v39.fields.value = v29;
      TypeFromHandle = System_Type__GetTypeFromHandle(v39, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component )
      {
        v34 = UnityEngine_Renderer_TypeInfo;
        methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_Renderer_TypeInfo )
            v36 = (struct UnityEngine_Renderer_o *)Component;
          else
            v36 = 0LL;
        }
        else
        {
          v36 = 0LL;
        }
        this->fields._renderer = v36;
        p_renderer = &this->fields._renderer;
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == v34 )
            v37 = (int)Component;
          else
            v37 = 0;
        }
        else
        {
          v37 = 0;
        }
      }
      else
      {
        v37 = 0;
        this->fields._renderer = 0LL;
        p_renderer = &this->fields._renderer;
      }
      sub_1B649A4((ServantStatusBattleListViewItem_o *)p_renderer, v37, v32, v33);
      this->fields._isInitialized = 1;
    }
  }
}


void __fastcall FGOEdgeBlur__OnDestroy(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  FGOEdgeBlur_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  v4 = this;
  this->fields._material = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._material, 0, v2, v3);
  v4->fields._rt0 = 0LL;
  v4 = (FGOEdgeBlur_o *)((char *)v4 + 160);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v4, 0, v5, v6);
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
      v8 = 0LL;
      do
      {
        if ( (unsigned int)v8 >= max_length )
          sub_1B64C64(this, method);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_1B64C5C(transform, method);
        }
        v10.fields.x = x;
        v10.fields.y = y;
        v10.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0LL);
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
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields._texture = value;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._texture, (int32_t)value, (int32_t)method, v3);
  FGOEdgeBlur__Blur(this, v5);
}


void __fastcall FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}