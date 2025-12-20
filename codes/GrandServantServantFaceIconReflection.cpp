void GrandServantServantFaceIconReflection___ctor(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantServantFaceIconReflection__ApplyNGUIPanelHorizontal(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *panel; // x20
  int32_t width; // w20
  UnityEngine_Material_o *height; // x0
  __int64 v6; // x1
  int v7; // w21
  float v8; // s0
  struct UIPanel_o *v9; // x8
  float x; // s8
  float v11; // s9

  if ( (byte_4D27373 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_16361/*"_PanelWidth"*/);
    sub_1C94098(&StringLiteral_16359/*"_PanelSoftnessX"*/);
    byte_4D27373 = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(panel, 0, 0) )
  {
    width = UnityEngine_Screen__get_width(0);
    height = (UnityEngine_Material_o *)UnityEngine_Screen__get_height(0);
    if ( !this->fields.panel )
      goto LABEL_11;
    v7 = (int)height;
    v8 = UIPanel__get_width(this->fields.panel, 0);
    v9 = this->fields.panel;
    if ( !v9
      || (height = this->fields.reflectionMaterial) == 0
      || (x = v9->fields.mClipSoftness.fields.x,
          v11 = fmaxf((float)((float)width / (float)v7) / 1.7778, 1.0) * 1024.0,
          UnityEngine_Material__SetFloat(height, (System_String_o *)StringLiteral_16361/*"_PanelWidth"*/, v8 / v11, 0),
          (height = this->fields.reflectionMaterial) == 0) )
    {
LABEL_11:
      sub_1C942F0(height, v6);
    }
    UnityEngine_Material__SetFloat(height, (System_String_o *)StringLiteral_16359/*"_PanelSoftnessX"*/, (float)(x / v11) * 4.0, 0);
  }
}


void GrandServantServantFaceIconReflection__CleanUp(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_reflectionMaterial; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Material_o *reflectionMaterial; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4D27374 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27374 = 1;
  }
  reflectionMaterial = this->fields.reflectionMaterial;
  p_reflectionMaterial = &this->fields.reflectionMaterial;
  v4 = (UnityEngine_Object_o *)reflectionMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_reflectionMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(v6, 0);
    *p_reflectionMaterial = 0;
    sub_1C9403C(p_reflectionMaterial, 0);
  }
}


void GrandServantServantFaceIconReflection__InstantiateReflectionMaterial(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *reflectionMaterial; // x21
  UnityEngine_Shader_o *reflectionShader; // x21
  UnityEngine_Material_o *v5; // x22
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x0

  if ( (byte_4D27371 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27371 = 1;
  }
  reflectionMaterial = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(reflectionMaterial, 0, 0) )
  {
    reflectionShader = this->fields.reflectionShader;
    v5 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, reflectionShader, 0);
    this->fields.reflectionMaterial = v5;
    sub_1C9403C(&this->fields.reflectionMaterial, v5);
    v7 = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
    if ( !v7 )
      sub_1C942F0(0, v6);
    UnityEngine_Object__set_hideFlags(v7, 61, 0);
  }
}


// attributes: thunk
void GrandServantServantFaceIconReflection__OnDisable(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  GrandServantServantFaceIconReflection__CleanUp(this, method);
}


void GrandServantServantFaceIconReflection__OnEnable(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  Il2CppObject *ComponentInParent_object; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4D27370 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    byte_4D27370 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
  sub_1C9403C(&this->fields.meshRenderer, Component_object);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               1,
                               (const MethodInfo_31931E0 *)Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
  this->fields.panel = (struct UIPanel_o *)ComponentInParent_object;
  sub_1C9403C(&this->fields.panel, ComponentInParent_object);
  GrandServantServantFaceIconReflection__InstantiateReflectionMaterial(this, v5);
  GrandServantServantFaceIconReflection__SetupReflectionMaterial(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantServantFaceIconReflection__SetupReflectionMaterial(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *reflectionMaterial; // x20
  UnityEngine_Object_o *meshRenderer; // x20
  _QWORD *transform; // x0
  __int64 v6; // x1
  struct UISprite_o *backSprite; // x8
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0 OVERLAPPED
  int v11; // s2
  _DWORD *v12; // x20
  struct UISprite_o *v13; // x8
  int v14; // s12
  int v15; // s15
  int v16; // s13
  int v17; // s14
  int v18; // s8
  int v19; // s11
  int v20; // s9
  int v21; // s10
  struct UISprite_o *v22; // x8
  UnityEngine_Texture_o *v23; // x20
  struct UISprite_o *faceSprite; // x8
  UnityEngine_Texture_o *v25; // x22
  UnityEngine_Texture_o *v26; // x21
  UnityEngine_Material_o *v27; // x22
  int v28; // s3
  UnityEngine_Material_o *v29; // x22
  int v30; // w23
  UnityEngine_Material_o *v31; // x20
  int v32; // w22
  UnityEngine_Material_o *v33; // x20
  int v34; // s0 OVERLAPPED
  int v36; // s2
  int v37; // s3
  UnityEngine_Material_o *v38; // x20
  int v39; // s0 OVERLAPPED
  int v41; // s2
  int v42; // s3
  const MethodInfo *v43; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector4_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D27372 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_16189/*"_BackSprite_Mask"*/);
    sub_1C94098(&StringLiteral_16187/*"_BackSpriteRect"*/);
    sub_1C94098(&StringLiteral_16264/*"_FaceSpriteTexSize"*/);
    sub_1C94098(&StringLiteral_16263/*"_FaceSpriteRect"*/);
    sub_1C94098(&StringLiteral_16185/*"_BackSprite"*/);
    sub_1C94098(&StringLiteral_16186/*"_BackSpriteNGUISize"*/);
    sub_1C94098(&StringLiteral_16188/*"_BackSpriteTexSize"*/);
    sub_1C94098(&StringLiteral_16333/*"_MySize"*/);
    sub_1C94098(&StringLiteral_16326/*"_MaskTex"*/);
    sub_1C94098(&StringLiteral_16262/*"_FaceSpriteNGUISize"*/);
    sub_1C94098(&StringLiteral_16261/*"_FaceSprite"*/);
    byte_4D27372 = 1;
  }
  reflectionMaterial = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(reflectionMaterial, 0, 0) )
  {
    meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(meshRenderer, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      backSprite = this->fields.backSprite;
      if ( !backSprite )
        goto LABEL_37;
      v8 = (UnityEngine_Transform_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))backSprite->klass->vtable._22_get_localSize.methodPtr)(
                    backSprite,
                    this->fields.backSprite,
                    backSprite->klass->vtable._22_get_localSize.method);
      if ( !v8 )
        goto LABEL_37;
      v11 = 0;
      UnityEngine_Transform__set_localScale(v8, *(UnityEngine_Vector3_o *)&v9, 0);
      transform = &this->fields.backSprite->klass;
      if ( !transform )
        goto LABEL_37;
      transform = UISprite__GetAtlasSprite((UISprite_o *)transform, 0);
      if ( !this->fields.faceSprite )
        goto LABEL_37;
      v12 = transform;
      transform = UISprite__GetAtlasSprite(this->fields.faceSprite, 0);
      if ( !v12 )
        goto LABEL_37;
      if ( !transform )
        goto LABEL_37;
      v13 = this->fields.backSprite;
      if ( !v13 )
        goto LABEL_37;
      v15 = v12[6];
      v14 = v12[7];
      v16 = v12[8];
      v17 = v12[9];
      v19 = *((_DWORD *)transform + 6);
      v18 = *((_DWORD *)transform + 7);
      v20 = *((_DWORD *)transform + 8);
      v21 = *((_DWORD *)transform + 9);
      transform = (_QWORD *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))v13->klass->vtable._26_get_mainTexture.methodPtr)(
                              this->fields.backSprite,
                              v13->klass->vtable._26_get_mainTexture.method);
      v22 = this->fields.backSprite;
      if ( !v22 )
        goto LABEL_37;
      v23 = (UnityEngine_Texture_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))v22->klass->vtable._24_get_material.methodPtr)(
                    v22,
                    this->fields.backSprite,
                    v22->klass->vtable._24_get_material.method);
      if ( !transform )
        goto LABEL_37;
      transform = UnityEngine_Material__GetTexture(
                    (UnityEngine_Material_o *)transform,
                    (System_String_o *)StringLiteral_16326/*"_MaskTex"*/,
                    0);
      faceSprite = this->fields.faceSprite;
      if ( !faceSprite )
        goto LABEL_37;
      v25 = (UnityEngine_Texture_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))faceSprite->klass->vtable._26_get_mainTexture.methodPtr)(
                    faceSprite,
                    this->fields.faceSprite,
                    faceSprite->klass->vtable._26_get_mainTexture.method);
      if ( !this->fields.reflectionMaterial )
        goto LABEL_37;
      v26 = (UnityEngine_Texture_o *)transform;
      UnityEngine_Material__SetTexture(this->fields.reflectionMaterial, (System_String_o *)StringLiteral_16185/*"_BackSprite"*/, v23, 0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16189/*"_BackSprite_Mask"*/,
        v25,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16261/*"_FaceSprite"*/,
        v26,
        0);
      v27 = this->fields.reflectionMaterial;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_37;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      if ( !v27 )
        goto LABEL_37;
      v28 = 0;
      UnityEngine_Material__SetVector(
        v27,
        (System_String_o *)StringLiteral_16333/*"_MySize"*/,
        *(UnityEngine_Vector4_o *)&localScale.fields.x,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      v45.fields.x = (float)v15;
      v45.fields.y = (float)v14;
      v45.fields.z = (float)v16;
      v45.fields.w = (float)v17;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16187/*"_BackSpriteRect"*/,
        v45,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      v46.fields.x = (float)v19;
      v46.fields.y = (float)v18;
      v46.fields.z = (float)v20;
      v46.fields.w = (float)v21;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16263/*"_FaceSpriteRect"*/,
        v46,
        0);
      if ( !v23 )
        goto LABEL_37;
      v29 = this->fields.reflectionMaterial;
      v30 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v23->klass->vtable._4_get_width.methodPtr)(
              v23,
              v23->klass->vtable._4_get_width.method);
      transform = (_QWORD *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v23->klass->vtable._6_get_height.methodPtr)(
                              v23,
                              v23->klass->vtable._6_get_height.method);
      if ( !v29 )
        goto LABEL_37;
      v47.fields.y = (float)(int)transform;
      v47.fields.x = (float)v30;
      v47.fields.z = 0.0;
      v47.fields.w = 0.0;
      UnityEngine_Material__SetVector(v29, (System_String_o *)StringLiteral_16188/*"_BackSpriteTexSize"*/, v47, 0);
      if ( !v26 )
        goto LABEL_37;
      v31 = this->fields.reflectionMaterial;
      v32 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v26->klass->vtable._4_get_width.methodPtr)(
              v26,
              v26->klass->vtable._4_get_width.method);
      transform = (_QWORD *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v26->klass->vtable._6_get_height.methodPtr)(
                              v26,
                              v26->klass->vtable._6_get_height.method);
      if ( !v31 )
        goto LABEL_37;
      v48.fields.y = (float)(int)transform;
      v48.fields.x = (float)v32;
      v48.fields.z = 0.0;
      v48.fields.w = 0.0;
      UnityEngine_Material__SetVector(v31, (System_String_o *)StringLiteral_16264/*"_FaceSpriteTexSize"*/, v48, 0);
      transform = &this->fields.backSprite->klass;
      if ( !transform )
        goto LABEL_37;
      v33 = this->fields.reflectionMaterial;
      transform = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*transform + 664LL))(
                              transform,
                              *(_QWORD *)(*transform + 672LL));
      if ( !v33 )
        goto LABEL_37;
      v36 = 0;
      v37 = 0;
      UnityEngine_Material__SetVector(v33, (System_String_o *)StringLiteral_16186/*"_BackSpriteNGUISize"*/, *(UnityEngine_Vector4_o *)&v34, 0);
      transform = &this->fields.faceSprite->klass;
      if ( !transform
        || (v38 = this->fields.reflectionMaterial,
            transform = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*transform + 664LL))(
                                    transform,
                                    *(_QWORD *)(*transform + 672LL)),
            !v38)
        || (v41 = 0,
            v42 = 0,
            UnityEngine_Material__SetVector(
              v38,
              (System_String_o *)StringLiteral_16262/*"_FaceSpriteNGUISize"*/,
              *(UnityEngine_Vector4_o *)&v39,
              0),
            GrandServantServantFaceIconReflection__ApplyNGUIPanelHorizontal(this, v43),
            (transform = &this->fields.meshRenderer->klass) == 0) )
      {
LABEL_37:
        sub_1C942F0(transform, v6);
      }
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)transform, this->fields.reflectionMaterial, 0);
    }
  }
}