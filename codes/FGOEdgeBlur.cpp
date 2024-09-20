void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  struct UnityEngine_RenderTexture_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Single_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5A021 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_RenderTexture___TypeInfo);
    sub_1B885B0(&float___TypeInfo);
    byte_4A5A021 = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_BB43D0;
  *(_OWORD *)&this->fields._thickness = xmmword_BB5BE0;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v8 = (struct UnityEngine_RenderTexture_array *)sub_1B88658(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._renderTextures, (int32_t)v8, v9, v10);
  v11 = (struct System_Single_array *)sub_1B88658(float___TypeInfo, 10LL);
  this->fields._weights = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._weights, (int32_t)v11, v12, v13);
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
  __int64 v4; // x1
  __int64 material; // x0
  UnityEngine_Texture_o *v6; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v8; // x21
  struct UnityEngine_RenderTexture_o *v9; // x8
  int v10; // w21
  UnityEngine_Texture_o *v11; // x20
  int v12; // w22
  unsigned __int64 v13; // x27
  __int64 v14; // x28
  int v15; // w8
  int v16; // w9
  struct UnityEngine_RenderTexture_array *renderTextures; // x24
  int32_t format; // w0
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_RenderTexture_o *v21; // x23
  UnityEngine_Material_o *v22; // x24
  unsigned __int64 v23; // x23
  struct UnityEngine_RenderTexture_array *v24; // x8
  UnityEngine_RenderTexture_o *v25; // x21
  UnityEngine_Material_o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  struct UnityEngine_RenderTexture_array *v29; // x8
  Il2CppClass **v30; // x0
  bool v31; // cc
  UnityEngine_RenderTexture_o *v32; // x20
  UnityEngine_Material_o *v33; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v35; // x20
  bool HasProperty_69325648; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v41; // x8
  int32_t v42; // w21
  int32_t v43; // w22
  UnityEngine_Texture2D_o *v44; // x20
  struct UnityEngine_RenderTexture_o *v45; // x8
  int v46; // w21
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v48; // x8
  unsigned __int64 v49; // x23
  UnityEngine_Object_o *v50; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v52; // x8
  unsigned __int64 v53; // x22
  UnityEngine_Object_o *v54; // x20
  __int64 v55; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v56; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v57; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v58; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v60; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v61; // 0:x0.8
  UnityEngine_Vector4_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5A020 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Graphics_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Texture2D_TypeInfo);
    sub_1B885B0(&StringLiteral_16404/*"_Weights"*/);
    sub_1B885B0(&StringLiteral_16371/*"_Threshold"*/);
    sub_1B885B0(&StringLiteral_16246/*"_Intensity"*/);
    sub_1B885B0(&StringLiteral_16535/*"_customColor0"*/);
    sub_1B885B0(&StringLiteral_16315/*"_Rect"*/);
    sub_1B885B0(&StringLiteral_16368/*"_Thickness"*/);
    sub_1B885B0(&StringLiteral_16280/*"_Offset"*/);
    byte_4A5A020 = 1;
  }
  m_ParticleSystem = 0LL;
  v58 = 0LL;
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
    v62.fields.x = this->fields._Rect.fields.m_XMin;
    v62.fields.y = this->fields._Rect.fields.m_YMin;
    v62.fields.w = v62.fields.y + this->fields._Rect.fields.m_Height;
    v62.fields.z = v62.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16315/*"_Rect"*/,
      v62,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16368/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16371/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16246/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16280/*"_Offset"*/,
      this->fields._offset,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloatArray_69329800(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16404/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v6 = this->fields._texture;
    rt0 = this->fields._rt0;
    v8 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_69305268(v6, rt0, v8, 0, 0LL);
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
    material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_height.method)(
                 this->fields._rt0,
                 v9->klass->vtable._7_set_height.methodPtr);
    v11 = (UnityEngine_Texture_o *)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v12 = material;
      v13 = 0LL;
      v14 = 32LL;
      while ( 1 )
      {
        v15 = v10 >= 0 ? v10 : v10 + 1;
        v16 = v12 >= 0 ? v12 : v12 + 1;
        if ( v12 < 32 || v10 < 32 )
          break;
        material = (__int64)this->fields._rt0;
        if ( !material )
          goto LABEL_82;
        renderTextures = this->fields._renderTextures;
        v10 = v15 >> 1;
        v12 = v16 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)material, 0LL);
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_69367664(v10, v12, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_82;
        v21 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1B886EC(material, renderTextures->obj.klass->_1.element_class);
          if ( !material )
          {
            v55 = sub_1B88830(0LL);
            sub_1B886D8(v55, 0LL);
          }
        }
        if ( v13 >= renderTextures->max_length )
          goto LABEL_83;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v14) = (Il2CppClass *)v21;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)renderTextures + v14), (int32_t)v21, v19, v20);
        v22 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        UnityEngine_Graphics__Blit_69305268(v11, v21, v22, 1, 0LL);
        ++v13;
        v14 += 8LL;
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
            goto LABEL_82;
          if ( v23 >= v24->max_length )
            goto LABEL_83;
          v25 = v24->m_Items[v23];
          v26 = this->fields._material;
          if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          UnityEngine_Graphics__Blit_69305268(v11, v25, v26, 2, 0LL);
          v29 = this->fields._renderTextures;
          if ( !v29 )
            goto LABEL_82;
          if ( v23 >= v29->max_length )
            goto LABEL_83;
          v30 = &v29->obj.klass + v23;
          v30[4] = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), 0, v27, v28);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v11, 0LL);
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
    UnityEngine_Graphics__Blit_69305268((UnityEngine_Texture_o *)v25, v32, v33, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(v25, 0LL);
    drawShader = this->fields._drawShader;
    v35 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v35, drawShader, 0LL);
    if ( !v35 )
      goto LABEL_82;
    UnityEngine_Material__set_mainTexture(v35, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_69325648 = UnityEngine_Material__HasProperty_69325648(v35, (System_String_o *)StringLiteral_16535/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_69325648 )
      UnityEngine_Material__SetColor(v35, (System_String_o *)StringLiteral_16535/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v35, *(UnityEngine_Color_o *)&r, 0LL);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v35, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v41 = this->fields._rt0;
    if ( !v41 )
      goto LABEL_82;
    v42 = material;
    v43 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v41->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v41->klass->vtable._7_set_height.methodPtr);
    v44 = (UnityEngine_Texture2D_o *)sub_1B887FC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69347452(v44, v42, v43, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v45 = this->fields._rt0) == 0LL)
      || (v46 = material,
          material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v45->klass->vtable._6_get_height.method)(
                       this->fields._rt0,
                       v45->klass->vtable._7_set_height.methodPtr),
          !v44) )
    {
LABEL_82:
      sub_1B8880C(material, v4);
    }
    v63.fields.m_Height = (float)(int)material;
    v63.fields.m_Width = (float)v46;
    v63.fields.m_XMin = 0.0;
    v63.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_69349916(v44, v63, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_69349496(v44, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v48 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v48 >= 1 )
      {
        v49 = 0LL;
        while ( v49 < (unsigned int)v48 )
        {
          v50 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v49];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v50, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v50 )
              goto LABEL_82;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v50, 0LL).fields.m_ParticleSystem;
            v60.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v60, v44, 0LL);
          }
          LODWORD(v48) = shapeSettingParticles->max_length;
          if ( (__int64)++v49 >= (int)v48 )
            goto LABEL_71;
        }
LABEL_83:
        sub_1B88814(material, v4);
      }
    }
LABEL_71:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v52 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v52 >= 1 )
      {
        v53 = 0LL;
        while ( v53 < (unsigned int)v52 )
        {
          v54 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v53];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v54, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v54 )
              goto LABEL_82;
            v58 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v54, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v57, this->fields._particleColor, 0LL);
            v61.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v58;
            v56 = v57;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v61, &v56, 0LL);
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


void __fastcall FGOEdgeBlur__Initialize(FGOEdgeBlur_o *this, const MethodInfo *method)
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
  int32_t v15; // w3
  __int64 v16; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v18; // x8
  int32_t v19; // w20
  int32_t v20; // w21
  UnityEngine_RenderTexture_o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  intptr_t v24; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Renderer_c *v29; // x9
  __int64 methodPtr_low; // x10
  struct UnityEngine_Renderer_o *v31; // x11
  int32_t v32; // w1
  struct UnityEngine_Renderer_o **p_renderer; // x8
  System_RuntimeTypeHandle_o v34; // 0:w0.4

  if ( (byte_4A5A01F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_RenderTexture_TypeInfo);
    sub_1B885B0(&UnityEngine_Renderer_var);
    sub_1B885B0(&UnityEngine_Renderer_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    byte_4A5A01F = 1;
  }
  if ( !this->fields._isInitialized )
  {
    texture = (UnityEngine_Object_o *)this->fields._texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Equality(texture, 0LL, 0LL);
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
          sub_1B88814(v4, v5);
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
      v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v13, edgeShader, 0LL);
      this->fields._material = v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._material, (int32_t)v13, v14, v15);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v18 = this->fields._texture) == 0LL) )
      {
        sub_1B8880C(material, v16);
      }
      v19 = (int)material;
      v20 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v18->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v18->klass->vtable._7_set_height.methodPtr);
      v21 = (UnityEngine_RenderTexture_o *)sub_1B887FC(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_69366048(v21, v19, v20, 0, 0, 0LL);
      this->fields._rt0 = v21;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._rt0, (int32_t)v21, v22, v23);
      v24 = (int)UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v34.fields.value = v24;
      TypeFromHandle = System_Type__GetTypeFromHandle(v34, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component )
      {
        v29 = UnityEngine_Renderer_TypeInfo;
        methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_Renderer_TypeInfo )
            v31 = (struct UnityEngine_Renderer_o *)Component;
          else
            v31 = 0LL;
        }
        else
        {
          v31 = 0LL;
        }
        this->fields._renderer = v31;
        p_renderer = &this->fields._renderer;
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == v29 )
            v32 = (int)Component;
          else
            v32 = 0;
        }
        else
        {
          v32 = 0;
        }
      }
      else
      {
        v32 = 0;
        this->fields._renderer = 0LL;
        p_renderer = &this->fields._renderer;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_renderer, v32, v27, v28);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._material, 0, v2, v3);
  v4->fields._rt0 = 0LL;
  v4 = (FGOEdgeBlur_o *)((char *)v4 + 160);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v4, 0, v5, v6);
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
          sub_1B88814(this, method);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_1B8880C(transform, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._texture, (int32_t)value, (int32_t)method, v3);
  FGOEdgeBlur__Blur(this, v5);
}


void __fastcall FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}