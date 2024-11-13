void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_RenderTexture_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Single_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1507F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_RenderTexture___TypeInfo, method, v2);
    sub_1BCA7E0(&float___TypeInfo, v4, v5);
    byte_4B1507F = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_BD25A0;
  *(_OWORD *)&this->fields._thickness = xmmword_BD3DE0;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v11 = (struct UnityEngine_RenderTexture_array *)sub_1BCA888(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._renderTextures, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct System_Single_array *)sub_1BCA888(float___TypeInfo, 10LL);
  this->fields._weights = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._weights, (int64_t)v18, v19, v20, v21, v22, v23, v24);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *texture; // x20
  __int64 v25; // x1
  __int64 material; // x0
  __int64 v27; // x1
  UnityEngine_Texture_o *v28; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v30; // x21
  struct UnityEngine_RenderTexture_o *v31; // x8
  int v32; // w21
  UnityEngine_Texture_o *v33; // x20
  int v34; // w22
  unsigned __int64 v35; // x27
  __int64 v36; // x28
  int v37; // w8
  int v38; // w9
  struct UnityEngine_RenderTexture_array *renderTextures; // x24
  int32_t format; // w0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_RenderTexture_o *v47; // x23
  __int64 v48; // x1
  UnityEngine_Material_o *v49; // x24
  unsigned __int64 v50; // x23
  struct UnityEngine_RenderTexture_array *v51; // x8
  UnityEngine_RenderTexture_o *v52; // x21
  UnityEngine_Material_o *v53; // x22
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct UnityEngine_RenderTexture_array *v60; // x8
  Il2CppClass **v61; // x0
  bool v62; // cc
  UnityEngine_RenderTexture_o *v63; // x20
  UnityEngine_Material_o *v64; // x22
  UnityEngine_Shader_o *drawShader; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  UnityEngine_Material_o *v69; // x20
  bool HasProperty_70020424; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v75; // x8
  int32_t v76; // w21
  int32_t v77; // w22
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  UnityEngine_Texture2D_o *v81; // x20
  struct UnityEngine_RenderTexture_o *v82; // x8
  int v83; // w21
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v85; // x8
  unsigned __int64 v86; // x23
  UnityEngine_Object_o *v87; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v89; // x8
  unsigned __int64 v90; // x22
  UnityEngine_Object_o *v91; // x20
  __int64 v92; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v93; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v94; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v95; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v97; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v98; // 0:x0.8
  UnityEngine_Vector4_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1507E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Graphics_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_16573/*"_Weights"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16540/*"_Threshold"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16415/*"_Intensity"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16704/*"_customColor0"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16484/*"_Rect"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_16537/*"_Thickness"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_16449/*"_Offset"*/, v22, v23);
    byte_4B1507E = 1;
  }
  m_ParticleSystem = 0LL;
  v95 = 0LL;
  if ( !this->fields._isInitialized )
    FGOEdgeBlur__Initialize(this, method);
  texture = (UnityEngine_Object_o *)this->fields._texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(texture, 0LL, 0LL) )
  {
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    v99.fields.x = this->fields._Rect.fields.m_XMin;
    v99.fields.y = this->fields._Rect.fields.m_YMin;
    v99.fields.w = v99.fields.y + this->fields._Rect.fields.m_Height;
    v99.fields.z = v99.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16484/*"_Rect"*/,
      v99,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16537/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16540/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16415/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16449/*"_Offset"*/,
      this->fields._offset,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloatArray_70024576(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16573/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v28 = this->fields._texture;
    rt0 = this->fields._rt0;
    v30 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v27);
    UnityEngine_Graphics__Blit_70000044(v28, rt0, v30, 0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v31 = this->fields._rt0;
    if ( !v31 )
      goto LABEL_82;
    v32 = material;
    material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v31->klass->vtable._6_get_height.method)(
                 this->fields._rt0,
                 v31->klass->vtable._7_set_height.methodPtr);
    v33 = (UnityEngine_Texture_o *)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v34 = material;
      v35 = 0LL;
      v36 = 32LL;
      while ( 1 )
      {
        v37 = v32 >= 0 ? v32 : v32 + 1;
        v38 = v34 >= 0 ? v34 : v34 + 1;
        if ( v34 < 32 || v32 < 32 )
          break;
        material = (__int64)this->fields._rt0;
        if ( !material )
          goto LABEL_82;
        renderTextures = this->fields._renderTextures;
        v32 = v37 >> 1;
        v34 = v38 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)material, 0LL);
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_70062440(v32, v34, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_82;
        v47 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1BCA91C(material, renderTextures->obj.klass->_1.element_class);
          if ( !material )
          {
            v92 = sub_1BCAA60(0LL);
            sub_1BCA908(v92, 0LL);
          }
        }
        if ( v35 >= renderTextures->max_length )
          goto LABEL_83;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v36) = (Il2CppClass *)v47;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)((char *)renderTextures + v36),
          (int64_t)v47,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        v49 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v48);
        UnityEngine_Graphics__Blit_70000044(v33, v47, v49, 1, 0LL);
        ++v35;
        v36 += 8LL;
        v33 = (UnityEngine_Texture_o *)v47;
        if ( (__int64)v35 >= this->fields._iteration )
        {
          v33 = (UnityEngine_Texture_o *)v47;
          break;
        }
      }
      if ( (int)v35 - 2 >= 0 )
      {
        v50 = (unsigned int)(v35 - 2);
        while ( 1 )
        {
          v51 = this->fields._renderTextures;
          if ( !v51 )
            goto LABEL_82;
          if ( v50 >= v51->max_length )
            goto LABEL_83;
          v52 = v51->m_Items[v50];
          v53 = this->fields._material;
          if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v25);
          UnityEngine_Graphics__Blit_70000044(v33, v52, v53, 2, 0LL);
          v60 = this->fields._renderTextures;
          if ( !v60 )
            goto LABEL_82;
          if ( v50 >= v60->max_length )
            goto LABEL_83;
          v61 = &v60->obj.klass + v50;
          v61[4] = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), 0LL, v54, v55, v56, v57, v58, v59);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v33, 0LL);
          v62 = (__int64)v50-- <= 0;
          v33 = (UnityEngine_Texture_o *)v52;
          if ( v62 )
            goto LABEL_49;
        }
      }
    }
    v52 = (UnityEngine_RenderTexture_o *)v33;
LABEL_49:
    v63 = this->fields._rt0;
    v64 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v25);
    UnityEngine_Graphics__Blit_70000044((UnityEngine_Texture_o *)v52, v63, v64, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(v52, 0LL);
    drawShader = this->fields._drawShader;
    v69 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v66, v67, v68);
    UnityEngine_Material___ctor(v69, drawShader, 0LL);
    if ( !v69 )
      goto LABEL_82;
    UnityEngine_Material__set_mainTexture(v69, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_70020424 = UnityEngine_Material__HasProperty_70020424(v69, (System_String_o *)StringLiteral_16704/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_70020424 )
      UnityEngine_Material__SetColor(v69, (System_String_o *)StringLiteral_16704/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v69, *(UnityEngine_Color_o *)&r, 0LL);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v69, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v75 = this->fields._rt0;
    if ( !v75 )
      goto LABEL_82;
    v76 = material;
    v77 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v75->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v75->klass->vtable._7_set_height.methodPtr);
    v81 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, v78, v79, v80);
    UnityEngine_Texture2D___ctor_70042228(v81, v76, v77, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v82 = this->fields._rt0) == 0LL)
      || (v83 = material,
          material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v82->klass->vtable._6_get_height.method)(
                       this->fields._rt0,
                       v82->klass->vtable._7_set_height.methodPtr),
          !v81) )
    {
LABEL_82:
      sub_1BCAA3C(material, v25);
    }
    v100.fields.m_Height = (float)(int)material;
    v100.fields.m_Width = (float)v83;
    v100.fields.m_XMin = 0.0;
    v100.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_70044692(v81, v100, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_70044272(v81, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v85 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v85 >= 1 )
      {
        v86 = 0LL;
        while ( v86 < (unsigned int)v85 )
        {
          v87 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v86];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
          material = UnityEngine_Object__op_Equality(v87, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v87 )
              goto LABEL_82;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v87, 0LL).fields.m_ParticleSystem;
            v97.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v97, v81, 0LL);
          }
          LODWORD(v85) = shapeSettingParticles->max_length;
          if ( (__int64)++v86 >= (int)v85 )
            goto LABEL_71;
        }
LABEL_83:
        sub_1BCAA44(material, v25);
      }
    }
LABEL_71:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v89 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v89 >= 1 )
      {
        v90 = 0LL;
        while ( v90 < (unsigned int)v89 )
        {
          v91 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v90];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
          material = UnityEngine_Object__op_Equality(v91, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v91 )
              goto LABEL_82;
            v95 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v91, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v94, this->fields._particleColor, 0LL);
            v98.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v95;
            v93 = v94;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v98, &v93, 0LL);
          }
          LODWORD(v89) = colorSettingParticles->max_length;
          if ( (__int64)++v90 >= (int)v89 )
            return;
        }
        goto LABEL_83;
      }
    }
  }
}


void __fastcall FGOEdgeBlur__Initialize(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *texture; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x8
  int max_length; // w8
  unsigned int v21; // w9
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x8
  int v23; // w8
  unsigned int v24; // w9
  UnityEngine_Shader_o *edgeShader; // x20
  UnityEngine_Material_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v35; // x8
  int32_t v36; // w20
  int32_t v37; // w21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  UnityEngine_RenderTexture_o *v41; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  intptr_t v49; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  UnityEngine_Renderer_c *v58; // x9
  __int64 methodPtr_low; // x10
  struct UnityEngine_Renderer_o *v60; // x11
  int64_t v61; // x1
  struct UnityEngine_Renderer_o **p_renderer; // x8
  System_RuntimeTypeHandle_o v63; // 0:w0.4

  if ( (byte_4B1507D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_RenderTexture_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Renderer_var, v8, v9);
    sub_1BCA7E0(&UnityEngine_Renderer_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Type_TypeInfo, v12, v13);
    byte_4B1507D = 1;
  }
  if ( !this->fields._isInitialized )
  {
    texture = (UnityEngine_Object_o *)this->fields._texture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v15 = UnityEngine_Object__op_Equality(texture, 0LL, 0LL);
    if ( !v15 )
    {
      shapeSettingParticles = this->fields._shapeSettingParticles;
      if ( shapeSettingParticles )
      {
        max_length = shapeSettingParticles->max_length;
        if ( max_length >= 1 )
        {
          v21 = 0;
          while ( v21 < max_length )
          {
            if ( (int)++v21 >= max_length )
              goto LABEL_12;
          }
LABEL_36:
          sub_1BCAA44(v15, v16);
        }
      }
LABEL_12:
      colorSettingParticles = this->fields._colorSettingParticles;
      if ( colorSettingParticles )
      {
        v23 = colorSettingParticles->max_length;
        if ( v23 >= 1 )
        {
          v24 = 0;
          while ( v24 < v23 )
          {
            if ( (int)++v24 >= v23 )
              goto LABEL_17;
          }
          goto LABEL_36;
        }
      }
LABEL_17:
      edgeShader = this->fields._edgeShader;
      v26 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v16, v17, v18);
      UnityEngine_Material___ctor(v26, edgeShader, 0LL);
      this->fields._material = v26;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._material, (int64_t)v26, v27, v28, v29, v30, v31, v32);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v35 = this->fields._texture) == 0LL) )
      {
        sub_1BCAA3C(material, v33);
      }
      v36 = (int)material;
      v37 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v35->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v35->klass->vtable._7_set_height.methodPtr);
      v41 = (UnityEngine_RenderTexture_o *)sub_1BCAA2C(UnityEngine_RenderTexture_TypeInfo, v38, v39, v40);
      UnityEngine_RenderTexture___ctor_70060824(v41, v36, v37, 0, 0, 0LL);
      this->fields._rt0 = v41;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._rt0, (int64_t)v41, v42, v43, v44, v45, v46, v47);
      v49 = (int)UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v48);
      v63.fields.value = v49;
      TypeFromHandle = System_Type__GetTypeFromHandle(v63, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component )
      {
        v58 = UnityEngine_Renderer_TypeInfo;
        methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_Renderer_TypeInfo )
            v60 = (struct UnityEngine_Renderer_o *)Component;
          else
            v60 = 0LL;
        }
        else
        {
          v60 = 0LL;
        }
        this->fields._renderer = v60;
        p_renderer = &this->fields._renderer;
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == v58 )
            v61 = (int64_t)Component;
          else
            v61 = 0LL;
        }
        else
        {
          v61 = 0LL;
        }
      }
      else
      {
        v61 = 0LL;
        this->fields._renderer = 0LL;
        p_renderer = &this->fields._renderer;
      }
      sub_1BCA784((PartyOrganizationUtility_o *)p_renderer, v61, v52, v53, v54, v55, v56, v57);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._material, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields._rt0 = 0LL;
  v8 = (FGOEdgeBlur_o *)((char *)v8 + 160);
  sub_1BCA784((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
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
          sub_1BCAA44(this, method);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_1BCAA3C(transform, method);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._texture, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
  FGOEdgeBlur__Blur(this, v9);
}


void __fastcall FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}