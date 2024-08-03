void __fastcall FGOEdgeBlur___ctor(FGOEdgeBlur_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_RenderTexture_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Single_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FB2F1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_RenderTexture___TypeInfo, method);
    sub_1B640C8(&float___TypeInfo, v3);
    byte_49FB2F1 = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields._iteration = 4;
  this->fields._Rect = (struct UnityEngine_Rect_o)xmmword_BA2BD0;
  *(_OWORD *)&this->fields._thickness = xmmword_BA43B0;
  this->fields._color = _Q2;
  this->fields._particleColor = _Q2;
  v9 = (struct UnityEngine_RenderTexture_array *)sub_1B64170(UnityEngine_RenderTexture___TypeInfo, 6LL);
  this->fields._renderTextures = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._renderTextures, (int32_t)v9, v10, v11);
  v12 = (struct System_Single_array *)sub_1B64170(float___TypeInfo, 10LL);
  this->fields._weights = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._weights, (int32_t)v12, v13, v14);
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
  __int64 material; // x0
  UnityEngine_Texture_o *v15; // x22
  UnityEngine_RenderTexture_o *rt0; // x20
  UnityEngine_Material_o *v17; // x21
  struct UnityEngine_RenderTexture_o *v18; // x8
  int v19; // w21
  __int64 v20; // x1
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
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Material_o *v47; // x20
  bool HasProperty_68994004; // w0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct UnityEngine_RenderTexture_o *v53; // x8
  int32_t v54; // w21
  int32_t v55; // w22
  __int64 v56; // x1
  __int64 v57; // x2
  UnityEngine_Texture2D_o *v58; // x20
  struct UnityEngine_RenderTexture_o *v59; // x8
  int v60; // w21
  struct UnityEngine_ParticleSystem_array *shapeSettingParticles; // x22
  __int64 v62; // x8
  unsigned __int64 v63; // x23
  UnityEngine_Object_o *v64; // x21
  struct UnityEngine_ParticleSystem_array *colorSettingParticles; // x21
  __int64 v66; // x8
  unsigned __int64 v67; // x22
  UnityEngine_Object_o *v68; // x20
  __int64 v69; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v70; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v71; // [xsp+40h] [xbp-A0h] BYREF
  struct UnityEngine_ParticleSystem_o *v72; // [xsp+78h] [xbp-68h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+88h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v74; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v75; // 0:x0.8
  UnityEngine_Vector4_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB2F0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Graphics_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Texture2D_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16335/*"_Weights"*/, v6);
    sub_1B640C8(&StringLiteral_16302/*"_Threshold"*/, v7);
    sub_1B640C8(&StringLiteral_16177/*"_Intensity"*/, v8);
    sub_1B640C8(&StringLiteral_16466/*"_customColor0"*/, v9);
    sub_1B640C8(&StringLiteral_16246/*"_Rect"*/, v10);
    sub_1B640C8(&StringLiteral_16299/*"_Thickness"*/, v11);
    sub_1B640C8(&StringLiteral_16211/*"_Offset"*/, v12);
    byte_49FB2F0 = 1;
  }
  m_ParticleSystem = 0LL;
  v72 = 0LL;
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
    v76.fields.x = this->fields._Rect.fields.m_XMin;
    v76.fields.y = this->fields._Rect.fields.m_YMin;
    v76.fields.w = v76.fields.y + this->fields._Rect.fields.m_Height;
    v76.fields.z = v76.fields.x + this->fields._Rect.fields.m_Width;
    UnityEngine_Material__SetVector(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16246/*"_Rect"*/,
      v76,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16299/*"_Thickness"*/,
      this->fields._thickness,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16302/*"_Threshold"*/,
      this->fields._threshold,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16177/*"_Intensity"*/,
      this->fields._intensity,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16211/*"_Offset"*/,
      this->fields._offset,
      0LL);
    material = (__int64)this->fields._material;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Material__SetFloatArray_68998156(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16335/*"_Weights"*/,
      this->fields._weights,
      0LL);
    v15 = this->fields._texture;
    rt0 = this->fields._rt0;
    v17 = this->fields._material;
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit_68973624(v15, rt0, v17, 0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v18 = this->fields._rt0;
    if ( !v18 )
      goto LABEL_82;
    v19 = material;
    material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v18->klass->vtable._6_get_height.method)(
                 this->fields._rt0,
                 v18->klass->vtable._7_set_height.methodPtr);
    v21 = (UnityEngine_Texture_o *)this->fields._rt0;
    if ( this->fields._iteration >= 1 )
    {
      v22 = material;
      v23 = 0LL;
      v24 = 32LL;
      while ( 1 )
      {
        v25 = v19 >= 0 ? v19 : v19 + 1;
        v26 = v22 >= 0 ? v22 : v22 + 1;
        if ( v22 < 32 || v19 < 32 )
          break;
        material = (__int64)this->fields._rt0;
        if ( !material )
          goto LABEL_82;
        renderTextures = this->fields._renderTextures;
        v19 = v25 >> 1;
        v22 = v26 >> 1;
        format = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)material, 0LL);
        material = (__int64)UnityEngine_RenderTexture__GetTemporary_69036020(v19, v22, 0, format, 0LL);
        if ( !renderTextures )
          goto LABEL_82;
        v31 = (UnityEngine_RenderTexture_o *)material;
        if ( material )
        {
          material = sub_1B64204(material, renderTextures->obj.klass->_1.element_class);
          if ( !material )
          {
            v69 = sub_1B64348(0LL);
            sub_1B641F0(v69, 0LL);
          }
        }
        if ( v23 >= renderTextures->max_length )
          goto LABEL_83;
        *(Il2CppClass **)((char *)&renderTextures->obj.klass + v24) = (Il2CppClass *)v31;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)renderTextures + v24), (int32_t)v31, v29, v30);
        v32 = this->fields._material;
        if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
        UnityEngine_Graphics__Blit_68973624(v21, v31, v32, 1, 0LL);
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
          UnityEngine_Graphics__Blit_68973624(v21, v35, v36, 2, 0LL);
          v39 = this->fields._renderTextures;
          if ( !v39 )
            goto LABEL_82;
          if ( v33 >= v39->max_length )
            goto LABEL_83;
          v40 = &v39->obj.klass + v33;
          v40[4] = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), 0, v37, v38);
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
    UnityEngine_Graphics__Blit_68973624((UnityEngine_Texture_o *)v35, v42, v43, 3, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(v35, 0LL);
    drawShader = this->fields._drawShader;
    v47 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v45, v46);
    UnityEngine_Material___ctor(v47, drawShader, 0LL);
    if ( !v47 )
      goto LABEL_82;
    UnityEngine_Material__set_mainTexture(v47, (UnityEngine_Texture_o *)this->fields._rt0, 0LL);
    HasProperty_68994004 = UnityEngine_Material__HasProperty_68994004(v47, (System_String_o *)StringLiteral_16466/*"_customColor0"*/, 0LL);
    r = this->fields._color.fields.r;
    g = this->fields._color.fields.g;
    b = this->fields._color.fields.b;
    a = this->fields._color.fields.a;
    if ( HasProperty_68994004 )
      UnityEngine_Material__SetColor(v47, (System_String_o *)StringLiteral_16466/*"_customColor0"*/, *(UnityEngine_Color_o *)&r, 0LL);
    else
      UnityEngine_Material__set_color(v47, *(UnityEngine_Color_o *)&r, 0LL);
    material = (__int64)this->fields._renderer;
    if ( !material )
      goto LABEL_82;
    UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)material, v47, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material )
      goto LABEL_82;
    material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                 material,
                 *(_QWORD *)(*(_QWORD *)material + 384LL));
    v53 = this->fields._rt0;
    if ( !v53 )
      goto LABEL_82;
    v54 = material;
    v55 = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v53->klass->vtable._6_get_height.method)(
            this->fields._rt0,
            v53->klass->vtable._7_set_height.methodPtr);
    v58 = (UnityEngine_Texture2D_o *)sub_1B64314(UnityEngine_Texture2D_TypeInfo, v56, v57);
    UnityEngine_Texture2D___ctor_69015808(v58, v54, v55, 3, 0, 0, 0LL);
    UnityEngine_RenderTexture__set_active(this->fields._rt0, 0LL);
    material = (__int64)this->fields._rt0;
    if ( !material
      || (material = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)material + 376LL))(
                       material,
                       *(_QWORD *)(*(_QWORD *)material + 384LL)),
          (v59 = this->fields._rt0) == 0LL)
      || (v60 = material,
          material = ((__int64 (__fastcall *)(struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v59->klass->vtable._6_get_height.method)(
                       this->fields._rt0,
                       v59->klass->vtable._7_set_height.methodPtr),
          !v58) )
    {
LABEL_82:
      sub_1B64324(material);
    }
    v77.fields.m_Height = (float)(int)material;
    v77.fields.m_Width = (float)v60;
    v77.fields.m_XMin = 0.0;
    v77.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_69018272(v58, v77, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_69017852(v58, 0LL);
    UnityEngine_RenderTexture__set_active(0LL, 0LL);
    shapeSettingParticles = this->fields._shapeSettingParticles;
    if ( shapeSettingParticles )
    {
      v62 = *(_QWORD *)&shapeSettingParticles->max_length;
      if ( (int)v62 >= 1 )
      {
        v63 = 0LL;
        while ( v63 < (unsigned int)v62 )
        {
          v64 = (UnityEngine_Object_o *)shapeSettingParticles->m_Items[v63];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v64, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v64 )
              goto LABEL_82;
            m_ParticleSystem = UnityEngine_ParticleSystem__get_shape((UnityEngine_ParticleSystem_o *)v64, 0LL).fields.m_ParticleSystem;
            v74.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_ShapeModule__set_texture(v74, v58, 0LL);
          }
          LODWORD(v62) = shapeSettingParticles->max_length;
          if ( (__int64)++v63 >= (int)v62 )
            goto LABEL_71;
        }
LABEL_83:
        sub_1B6432C(material, v20);
      }
    }
LABEL_71:
    colorSettingParticles = this->fields._colorSettingParticles;
    if ( colorSettingParticles )
    {
      v66 = *(_QWORD *)&colorSettingParticles->max_length;
      if ( (int)v66 >= 1 )
      {
        v67 = 0LL;
        while ( v67 < (unsigned int)v66 )
        {
          v68 = (UnityEngine_Object_o *)colorSettingParticles->m_Items[v67];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          material = UnityEngine_Object__op_Equality(v68, 0LL, 0LL);
          if ( (material & 1) == 0 )
          {
            if ( !v68 )
              goto LABEL_82;
            v72 = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v68, 0LL).fields.m_ParticleSystem;
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v71, this->fields._particleColor, 0LL);
            v75.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v72;
            v70 = v71;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v75, &v70, 0LL);
          }
          LODWORD(v66) = colorSettingParticles->max_length;
          if ( (__int64)++v67 >= (int)v66 )
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
  int32_t v21; // w3
  UnityEngine_Object_o *material; // x0
  struct UnityEngine_Texture_o *v23; // x8
  int32_t v24; // w20
  int32_t v25; // w21
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_RenderTexture_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  intptr_t v31; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Component_o *Component; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  UnityEngine_Renderer_c *v36; // x9
  __int64 methodPtr_low; // x10
  struct UnityEngine_Renderer_o *v38; // x11
  int32_t v39; // w1
  struct UnityEngine_Renderer_o **p_renderer; // x8
  System_RuntimeTypeHandle_o v41; // 0:w0.4

  if ( (byte_49FB2EF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Material_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_RenderTexture_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Renderer_var, v5);
    sub_1B640C8(&UnityEngine_Renderer_TypeInfo, v6);
    sub_1B640C8(&System_Type_TypeInfo, v7);
    byte_49FB2EF = 1;
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
          sub_1B6432C(v9, v10);
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
      v19 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v10, v11);
      UnityEngine_Material___ctor(v19, edgeShader, 0LL);
      this->fields._material = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._material, (int32_t)v19, v20, v21);
      material = (UnityEngine_Object_o *)this->fields._material;
      if ( !material
        || (UnityEngine_Object__set_hideFlags(material, 61, 0LL),
            (material = (UnityEngine_Object_o *)this->fields._texture) == 0LL)
        || (material = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, const char *))material->klass[1]._1.gc_desc)(
                                                 material,
                                                 material->klass[1]._1.name),
            (v23 = this->fields._texture) == 0LL) )
      {
        sub_1B64324(material);
      }
      v24 = (int)material;
      v25 = ((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v23->klass->vtable._6_get_height.method)(
              this->fields._texture,
              v23->klass->vtable._7_set_height.methodPtr);
      v28 = (UnityEngine_RenderTexture_o *)sub_1B64314(UnityEngine_RenderTexture_TypeInfo, v26, v27);
      UnityEngine_RenderTexture___ctor_69034404(v28, v24, v25, 0, 0, 0LL);
      this->fields._rt0 = v28;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._rt0, (int32_t)v28, v29, v30);
      v31 = (int)UnityEngine_Renderer_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v41.fields.value = v31;
      TypeFromHandle = System_Type__GetTypeFromHandle(v41, 0LL);
      Component = UnityEngine_Component__GetComponent((UnityEngine_Component_o *)this, TypeFromHandle, 0LL);
      if ( Component )
      {
        v36 = UnityEngine_Renderer_TypeInfo;
        methodPtr_low = LOBYTE(UnityEngine_Renderer_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_Renderer_TypeInfo )
            v38 = (struct UnityEngine_Renderer_o *)Component;
          else
            v38 = 0LL;
        }
        else
        {
          v38 = 0LL;
        }
        this->fields._renderer = v38;
        p_renderer = &this->fields._renderer;
        if ( LOBYTE(Component->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (UnityEngine_Renderer_c *)Component->klass->_2.typeHierarchy[methodPtr_low - 1] == v36 )
            v39 = (int)Component;
          else
            v39 = 0;
        }
        else
        {
          v39 = 0;
        }
      }
      else
      {
        v39 = 0;
        this->fields._renderer = 0LL;
        p_renderer = &this->fields._renderer;
      }
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p_renderer, v39, v34, v35);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._material, 0, v2, v3);
  v4->fields._rt0 = 0LL;
  v4 = (FGOEdgeBlur_o *)((char *)v4 + 160);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v4, 0, v5, v6);
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
          sub_1B6432C(this, method);
        transform = (UnityEngine_Component_o *)shapeSettingParticles->m_Items[v8];
        if ( !transform
          || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
        {
          sub_1B64324(transform);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._texture, (int32_t)value, (int32_t)method, v3);
  FGOEdgeBlur__Blur(this, v5);
}


void __fastcall FGOEdgeBlur__set_Thickness(FGOEdgeBlur_o *this, float value, const MethodInfo *method)
{
  this->fields._thickness = value;
  FGOEdgeBlur__Blur(this, method);
}