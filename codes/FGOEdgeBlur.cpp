void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_RenderTexture_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Single_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B65A26 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_RenderTexture___TypeInfo, method);
    sub_1BE4ACC(&float___TypeInfo, v3);
    byte_4B65A26 = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_BE1B20;
  *(_OWORD *)&this->fields._thickness = xmmword_BE3330;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v9 = (struct UnityEngine_RenderTexture_array *)sub_1BE4B74(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v9;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._renderTextures, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (struct System_Single_array *)sub_1BE4B74(float___TypeInfo, 10LL);
  this->fields._weights = v16;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._weights, (int64_t)v16, v17, v18, v19, v20, v21, v22);
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_RenderTexture_o *v35; // x23
  UnityEngine_Material_o *v36; // x24
  unsigned __int64 v37; // x23
  struct UnityEngine_RenderTexture_array *v38; // x8
  UnityEngine_RenderTexture_o *v39; // x21
  UnityEngine_Material_o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct UnityEngine_RenderTexture_array *v47; // x8
  Il2CppClass **v48; // x0
  bool v49; // cc
  UnityEngine_RenderTexture_o *v50; // x20
  UnityEngine_Material_o *v51; // x22
  UnityEngine_Shader_o *drawShader; // x21
  UnityEngine_Material_o *v53; // x20
  bool HasProperty_70318180; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v59; // x8
  int32_t v60; // w21
  int32_t v61; // w22
  UnityEngine_Texture2D_o *v62; // x20
  struct UnityEngine_RenderTexture_o *v63; // x8
  int v64; // w21
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v66; // x8
  unsigned __int64 v67; // x23
  UnityEngine_Object_o *v68; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v70; // x8
  unsigned __int64 v71; // x22
  UnityEngine_Object_o *v72; // x20
  __int64 v73; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v74; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v75; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v76; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v78; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v79; // 0:x0.8
  UnityEngine_Vector4_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B65A25 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Graphics_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Material_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Texture2D_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_16613/*"_Weights"*/, v6);
    sub_1BE4ACC(&StringLiteral_16580/*"_Threshold"*/, v7);
    sub_1BE4ACC(&StringLiteral_16455/*"_Intensity"*/, v8);
    sub_1BE4ACC(&StringLiteral_16745/*"_customColor0"*/, v9);
    sub_1BE4ACC(&StringLiteral_16524/*"_Rect"*/, v10);
    sub_1BE4ACC(&StringLiteral_16577/*"_Thickness"*/, v11);
    sub_1BE4ACC(&StringLiteral_16489/*"_Offset"*/, v12);
    byte_4B65A25 = 1;
  }
  m_ParticleSystem = 0LL;
  v76 = 0LL;
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
    v80.fields.x = this->fields._Rect.fields.m_XMin;
    v80.fields.y = this->fields._Rect.fields.m_YMin;
    v80.fields.w = v80.fields.y + this->fields._Rect.fields.m_Height;
    v80.fields.z = v80.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16524/*"_Rect"*/,
      v80,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16577/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16580/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16455/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16489/*"_Offset"*/,
      this->fields._offset,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloatArray_70322332(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16613/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v16 = this->fields._texture;
    rt0 = this->fields._rt0;
    v18 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_70297800(v16, rt0, v18, 0, 0LL);
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
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_70360196(v20, v22, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_82;
        v35 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1BE4C08(material, renderTextures->obj.klass->_1.element_class);
          if ( !material )
          {
            v73 = sub_1BE4D4C(0LL);
            sub_1BE4BF4(v73, 0LL);
          }
        }
        if ( v23 >= renderTextures->max_length )
          goto LABEL_83;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v24) = (Il2CppClass *)v35;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)((char *)renderTextures + v24),
          (int64_t)v35,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        v36 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        UnityEngine_Graphics__Blit_70297800(v21, v35, v36, 1, 0LL);
        ++v23;
        v24 += 8LL;
        v21 = (UnityEngine_Texture_o *)v35;
        if ( (__int64)v23 >= this->fields._iteration )
        {
          v21 = (UnityEngine_Texture_o *)v35;
          break;
        }
      }
      if ( (int)v23 - 2 >= 0 )
      {
        v37 = (unsigned int)(v23 - 2);
        while ( 1 )
        {
          v38 = this->fields._renderTextures;
          if ( !v38 )
            goto LABEL_82;
          if ( v37 >= v38->max_length )
            goto LABEL_83;
          v39 = v38->m_Items[v37];
          v40 = this->fields._material;
          if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
          UnityEngine_Graphics__Blit_70297800(v21, v39, v40, 2, 0LL);
          v47 = this->fields._renderTextures;
          if ( !v47 )
            goto LABEL_82;
          if ( v37 >= v47->max_length )
            goto LABEL_83;
          v48 = &v47->obj.klass + v37;
          v48[4] = 0LL;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v48 + 4), 0LL, v41, v42, v43, v44, v45, v46);
          UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v21, 0LL);
          v49 = (__int64)v37-- <= 0;
          v21 = (UnityEngine_Texture_o *)v39;
          if ( v49 )
            goto LABEL_49;
        }
      }
    }
    v39 = (UnityEngine_RenderTexture_o *)v21;
LABEL_49:
    v50 = this->fields._rt0;
    v51 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_70297800((UnityEngine_Texture_o *)v39, v50, v51, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(v39, 0LL);
    drawShader = this->fields._drawShader;
    v53 = (UnityEngine_Material_o *)sub_1BE4D18(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v53, drawShader, 0LL);
    if ( !v53 )
      goto LABEL_82;
    UnityEngine_Material__set_mainTexture(v53, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_70318180 = UnityEngine_Material__HasProperty_70318180(v53, (System_String_o *)StringLiteral_16745/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_70318180 )
      UnityEngine_Material__SetColor(v53, (System_String_o *)StringLiteral_16745/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v53, *(UnityEngine_Color_o *)&r, 0LL);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v53, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v59 = this->fields._rt0;
    if ( !v59 )
      goto LABEL_82;
    v60 = material;
    v61 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v59->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v59->klass->vtable._7_set_height.methodPtr);
    v62 = (UnityEngine_Texture2D_o *)sub_1BE4D18(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_70339984(v62, v60, v61, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v63 = this->fields._rt0) == 0LL)
      || (v64 = material,
          material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v63->klass->vtable._6_get_height.method)(
                       this->fields._rt0,
                       v63->klass->vtable._7_set_height.methodPtr),
          !v62) )
    {
LABEL_82:
      sub_1BE4D28(material, v14);
    }
    v81.fields.m_Height = (float)(int)material;
    v81.fields.m_Width = (float)v64;
    v81.fields.m_XMin = 0.0;
    v81.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_70342448(v62, v81, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_70342028(v62, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v66 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v66 >= 1 )
      {
        v67 = 0LL;
        while ( v67 < (unsigned int)v66 )
        {
          v68 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v67];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v68, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v68 )
              goto LABEL_82;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v68, 0LL).fields.m_ParticleSystem;
            v78.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v78, v62, 0LL);
          }
          LODWORD(v66) = shapeSettingParticles->max_length;
          if ( (__int64)++v67 >= (int)v66 )
            goto LABEL_71;
        }
LABEL_83:
        sub_1BE4D30(material, v14);
      }
    }
LABEL_71:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v70 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v70 >= 1 )
      {
        v71 = 0LL;
        while ( v71 < (unsigned int)v70 )
        {
          v72 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v71];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v72, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v72 )
              goto LABEL_82;
            v76 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v72, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v75, this->fields._particleColor, 0LL);
            v79.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v76;
            v74 = v75;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v79, &v74, 0LL);
          }
          LODWORD(v70) = colorSettingParticles->max_length;
          if ( (__int64)++v71 >= (int)v70 )
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v27; // x8
  int32_t v28; // w20
  int32_t v29; // w21
  UnityEngine_RenderTexture_o *v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  intptr_t v37; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UnityEngine_Renderer_c *v46; // x9
  __int64 methodPtr_low; // x10
  struct UnityEngine_Renderer_o *v48; // x11
  int64_t v49; // x1
  struct UnityEngine_Renderer_o **p_renderer; // x8
  System_RuntimeTypeHandle_o v51; // 0:w0.4

  if ( (byte_4B65A24 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Material_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_RenderTexture_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Renderer_var, v5);
    sub_1BE4ACC(&UnityEngine_Renderer_TypeInfo, v6);
    sub_1BE4ACC(&System_Type_TypeInfo, v7);
    byte_4B65A24 = 1;
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
          sub_1BE4D30(v9, v10);
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
      v18 = (UnityEngine_Material_o *)sub_1BE4D18(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v18, edgeShader, 0LL);
      this->fields._material = v18;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._material, (int64_t)v18, v19, v20, v21, v22, v23, v24);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v27 = this->fields._texture) == 0LL) )
      {
        sub_1BE4D28(material, v25);
      }
      v28 = (int)material;
      v29 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v27->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v27->klass->vtable._7_set_height.methodPtr);
      v30 = (UnityEngine_RenderTexture_o *)sub_1BE4D18(UnityEngine_RenderTexture_TypeInfo);
      UnityEngine_RenderTexture___ctor_70358580(v30, v28, v29, 0, 0, 0LL);
      this->fields._rt0 = v30;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._rt0, (int64_t)v30, v31, v32, v33, v34, v35, v36);
      v37 = (int)UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v51.fields.value = v37;
      TypeFromHandle = System_Type__GetTypeFromHandle(v51, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component )
      {
        v46 = UnityEngine_Renderer_TypeInfo;
        methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_Renderer_TypeInfo )
            v48 = (struct UnityEngine_Renderer_o *)Component;
          else
            v48 = 0LL;
        }
        else
        {
          v48 = 0LL;
        }
        this->fields._renderer = v48;
        p_renderer = &this->fields._renderer;
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == v46 )
            v49 = (int64_t)Component;
          else
            v49 = 0LL;
        }
        else
        {
          v49 = 0LL;
        }
      }
      else
      {
        v49 = 0LL;
        this->fields._renderer = 0LL;
        p_renderer = &this->fields._renderer;
      }
      sub_1BE4A70((PartyOrganizationUtility_o *)p_renderer, v49, v40, v41, v42, v43, v44, v45);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._material, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields._rt0 = 0LL;
  v8 = (FGOEdgeBlur_o *)((char *)v8 + 160);
  sub_1BE4A70((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
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
          sub_1BE4D30(this, method);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_1BE4D28(transform, method);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._texture, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
  FGOEdgeBlur__Blur(this, v9);
}


void __fastcall FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}