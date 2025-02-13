void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  struct UnityEngine_RenderTexture_array *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Single_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BDB3AB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_RenderTexture___TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    byte_4BDB3AB = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_BFDF40;
  *(_OWORD *)&this->fields._thickness = xmmword_BFF700;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v8 = (struct UnityEngine_RenderTexture_array *)sub_1C21EE0(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._renderTextures, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (struct System_Single_array *)sub_1C21EE0(float___TypeInfo, 10LL);
  this->fields._weights = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._weights, (int64_t)v15, v16, v17, v18, v19, v20, v21);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_RenderTexture_o *v25; // x23
  UnityEngine_Material_o *v26; // x24
  unsigned __int64 v27; // x23
  struct UnityEngine_RenderTexture_array *v28; // x8
  UnityEngine_RenderTexture_o *v29; // x21
  UnityEngine_Material_o *v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct UnityEngine_RenderTexture_array *v37; // x8
  Il2CppClass **v38; // x0
  bool v39; // cc
  UnityEngine_RenderTexture_o *v40; // x20
  UnityEngine_Material_o *v41; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v43; // x20
  bool HasProperty_70735792; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v49; // x8
  int32_t v50; // w21
  int32_t v51; // w22
  UnityEngine_Texture2D_o *v52; // x20
  struct UnityEngine_RenderTexture_o *v53; // x8
  int v54; // w21
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v56; // x8
  unsigned __int64 v57; // x23
  UnityEngine_Object_o *v58; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v60; // x8
  unsigned __int64 v61; // x22
  UnityEngine_Object_o *v62; // x20
  __int64 v63; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v64; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v65; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v66; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v68; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v69; // 0:x0.8
  UnityEngine_Vector4_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDB3AA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Graphics_TypeInfo);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    sub_1C21E38(&StringLiteral_16683/*"_Weights"*/);
    sub_1C21E38(&StringLiteral_16650/*"_Threshold"*/);
    sub_1C21E38(&StringLiteral_16524/*"_Intensity"*/);
    sub_1C21E38(&StringLiteral_16815/*"_customColor0"*/);
    sub_1C21E38(&StringLiteral_16594/*"_Rect"*/);
    sub_1C21E38(&StringLiteral_16647/*"_Thickness"*/);
    sub_1C21E38(&StringLiteral_16558/*"_Offset"*/);
    byte_4BDB3AA = 1;
  }
  m_ParticleSystem = 0LL;
  v66 = 0LL;
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
    v70.fields.x = this->fields._Rect.fields.m_XMin;
    v70.fields.y = this->fields._Rect.fields.m_YMin;
    v70.fields.w = v70.fields.y + this->fields._Rect.fields.m_Height;
    v70.fields.z = v70.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16594/*"_Rect"*/,
      v70,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16647/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16650/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16524/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16558/*"_Offset"*/,
      this->fields._offset,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloatArray_70739944(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16683/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v6 = this->fields._texture;
    rt0 = this->fields._rt0;
    v8 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_70715180(v6, rt0, v8, 0, 0LL);
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
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_70777808(v10, v12, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_82;
        v25 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1C21F74(material, renderTextures->obj.klass->_1.element_class);
          if ( !material )
          {
            v63 = sub_1C220B8(0LL);
            sub_1C21F60(v63, 0LL);
          }
        }
        if ( v13 >= renderTextures->max_length )
          goto LABEL_83;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v14) = (Il2CppClass *)v25;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)((char *)renderTextures + v14),
          (int64_t)v25,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        v26 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        UnityEngine_Graphics__Blit_70715180(v11, v25, v26, 1, 0LL);
        ++v13;
        v14 += 8LL;
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
            goto LABEL_82;
          if ( v27 >= v28->max_length )
            goto LABEL_83;
          v29 = v28->m_Items[v27];
          v30 = this->fields._material;
          if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          UnityEngine_Graphics__Blit_70715180(v11, v29, v30, 2, 0LL);
          v37 = this->fields._renderTextures;
          if ( !v37 )
            goto LABEL_82;
          if ( v27 >= v37->max_length )
            goto LABEL_83;
          v38 = &v37->obj.klass + v27;
          v38[4] = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), 0LL, v31, v32, v33, v34, v35, v36);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v11, 0LL);
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
    UnityEngine_Graphics__Blit_70715180((UnityEngine_Texture_o *)v29, v40, v41, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(v29, 0LL);
    drawShader = this->fields._drawShader;
    v43 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v43, drawShader, 0LL);
    if ( !v43 )
      goto LABEL_82;
    UnityEngine_Material__set_mainTexture(v43, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_70735792 = UnityEngine_Material__HasProperty_70735792(v43, (System_String_o *)StringLiteral_16815/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_70735792 )
      UnityEngine_Material__SetColor(v43, (System_String_o *)StringLiteral_16815/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v43, *(UnityEngine_Color_o *)&r, 0LL);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v43, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v49 = this->fields._rt0;
    if ( !v49 )
      goto LABEL_82;
    v50 = material;
    v51 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v49->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v49->klass->vtable._7_set_height.methodPtr);
    v52 = (UnityEngine_Texture2D_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_70757596(v52, v50, v51, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v53 = this->fields._rt0) == 0LL)
      || (v54 = material,
          material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v53->klass->vtable._6_get_height.method)(
                       this->fields._rt0,
                       v53->klass->vtable._7_set_height.methodPtr),
          !v52) )
    {
LABEL_82:
      sub_1C22094(material, v4);
    }
    v71.fields.m_Height = (float)(int)material;
    v71.fields.m_Width = (float)v54;
    v71.fields.m_XMin = 0.0;
    v71.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_70760060(v52, v71, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_70759640(v52, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v56 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v56 >= 1 )
      {
        v57 = 0LL;
        while ( v57 < (unsigned int)v56 )
        {
          v58 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v57];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v58, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v58 )
              goto LABEL_82;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v58, 0LL).fields.m_ParticleSystem;
            v68.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v68, v52, 0LL);
          }
          LODWORD(v56) = shapeSettingParticles->max_length;
          if ( (__int64)++v57 >= (int)v56 )
            goto LABEL_71;
        }
LABEL_83:
        sub_1C2209C(material, v4);
      }
    }
LABEL_71:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v60 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v60 >= 1 )
      {
        v61 = 0LL;
        while ( v61 < (unsigned int)v60 )
        {
          v62 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v61];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v62, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v62 )
              goto LABEL_82;
            v66 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v62, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v65, this->fields._particleColor, 0LL);
            v69.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v66;
            v64 = v65;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v69, &v64, 0LL);
          }
          LODWORD(v60) = colorSettingParticles->max_length;
          if ( (__int64)++v61 >= (int)v60 )
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v22; // x8
  int32_t v23; // w20
  int32_t v24; // w21
  UnityEngine_RenderTexture_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  intptr_t v32; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_Renderer_c *v41; // x9
  __int64 methodPtr_low; // x10
  struct UnityEngine_Renderer_o *v43; // x11
  int64_t v44; // x1
  struct UnityEngine_Renderer_o **p_renderer; // x8
  System_RuntimeTypeHandle_o v46; // 0:w0.4

  if ( (byte_4BDB3A9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C21E38(&UnityEngine_Renderer_var);
    sub_1C21E38(&UnityEngine_Renderer_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    byte_4BDB3A9 = 1;
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
          sub_1C2209C(v4, v5);
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
      v13 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v13, edgeShader, 0LL);
      this->fields._material = v13;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._material, (int64_t)v13, v14, v15, v16, v17, v18, v19);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v22 = this->fields._texture) == 0LL) )
      {
        sub_1C22094(material, v20);
      }
      v23 = (int)material;
      v24 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v22->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v22->klass->vtable._7_set_height.methodPtr);
      v25 = (UnityEngine_RenderTexture_o *)sub_1C22084(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_70776192(v25, v23, v24, 0, 0, 0LL);
      this->fields._rt0 = v25;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._rt0, (int64_t)v25, v26, v27, v28, v29, v30, v31);
      v32 = (int)UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v46.fields.value = v32;
      TypeFromHandle = System_Type__GetTypeFromHandle(v46, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component )
      {
        v41 = UnityEngine_Renderer_TypeInfo;
        methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_Renderer_TypeInfo )
            v43 = (struct UnityEngine_Renderer_o *)Component;
          else
            v43 = 0LL;
        }
        else
        {
          v43 = 0LL;
        }
        this->fields._renderer = v43;
        p_renderer = &this->fields._renderer;
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == v41 )
            v44 = (int64_t)Component;
          else
            v44 = 0LL;
        }
        else
        {
          v44 = 0LL;
        }
      }
      else
      {
        v44 = 0LL;
        this->fields._renderer = 0LL;
        p_renderer = &this->fields._renderer;
      }
      sub_1C21DDC((PartyOrganizationUtility_o *)p_renderer, v44, v35, v36, v37, v38, v39, v40);
      this->fields._isInitialized = 1;
    }
  }
}


void __fastcall FGOEdgeBlur__OnDestroy(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  FGOEdgeBlur_o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v8 = this;
  this->fields._material = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._material, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields._rt0 = 0LL;
  v8 = (FGOEdgeBlur_o *)((char *)v8 + 160);
  sub_1C21DDC((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LOBYTE(v8->fields.m_CancellationTokenSource) = 0;
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
          sub_1C2209C(this, method);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_1C22094(transform, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields._texture = value;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._texture, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
  FGOEdgeBlur__Blur(this, v9);
}


void __fastcall FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}