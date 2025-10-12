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
  int v6; // w21
  float v7; // s0
  struct UIPanel_o *v8; // x8
  float x; // s8
  float v10; // s9

  if ( (byte_4C32670 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_16302/*"_PanelWidth"*/);
    sub_1C32C20(&StringLiteral_16300/*"_PanelSoftnessX"*/);
    byte_4C32670 = 1;
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
    v6 = (int)height;
    v7 = UIPanel__get_width(this->fields.panel, 0);
    v8 = this->fields.panel;
    if ( !v8
      || (height = this->fields.reflectionMaterial) == 0
      || (x = v8->fields.mClipSoftness.fields.x,
          v10 = fmaxf((float)((float)width / (float)v6) / 1.7778, 1.0) * 1024.0,
          UnityEngine_Material__SetFloat(height, (System_String_o *)StringLiteral_16302/*"_PanelWidth"*/, v7 / v10, 0),
          (height = this->fields.reflectionMaterial) == 0) )
    {
LABEL_11:
      sub_1C32E7C(height);
    }
    UnityEngine_Material__SetFloat(height, (System_String_o *)StringLiteral_16300/*"_PanelSoftnessX"*/, (float)(x / v10) * 4.0, 0);
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

  if ( (byte_4C32671 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32671 = 1;
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
    UnityEngine_Object__Destroy_71223640(v6, 0);
    *p_reflectionMaterial = 0;
    sub_1C32BC4(p_reflectionMaterial, 0);
  }
}


void GrandServantServantFaceIconReflection__InstantiateReflectionMaterial(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *reflectionMaterial; // x21
  UnityEngine_Shader_o *reflectionShader; // x21
  UnityEngine_Material_o *v5; // x22
  UnityEngine_Object_o *v6; // x0

  if ( (byte_4C3266E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3266E = 1;
  }
  reflectionMaterial = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(reflectionMaterial, 0, 0) )
  {
    reflectionShader = this->fields.reflectionShader;
    v5 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, reflectionShader, 0);
    this->fields.reflectionMaterial = v5;
    sub_1C32BC4(&this->fields.reflectionMaterial, v5);
    v6 = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
    if ( !v6 )
      sub_1C32E7C(0);
    UnityEngine_Object__set_hideFlags(v6, 61, 0);
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

  if ( (byte_4C3266D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    byte_4C3266D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
  sub_1C32BC4(&this->fields.meshRenderer, Component_object);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               1,
                               (const MethodInfo_30D449C *)Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
  this->fields.panel = (struct UIPanel_o *)ComponentInParent_object;
  sub_1C32BC4(&this->fields.panel, ComponentInParent_object);
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
  struct UISprite_o *backSprite; // x8
  UnityEngine_Transform_o *v7; // x20
  int v8; // s0 OVERLAPPED
  int v10; // s2
  _DWORD *v11; // x20
  struct UISprite_o *v12; // x8
  int v13; // s12
  int v14; // s15
  int v15; // s13
  int v16; // s14
  int v17; // s8
  int v18; // s11
  int v19; // s9
  int v20; // s10
  struct UISprite_o *v21; // x8
  UnityEngine_Texture_o *v22; // x20
  struct UISprite_o *faceSprite; // x8
  UnityEngine_Texture_o *v24; // x22
  UnityEngine_Texture_o *v25; // x21
  UnityEngine_Material_o *v26; // x22
  int v27; // s3
  UnityEngine_Material_o *v28; // x22
  int v29; // w23
  UnityEngine_Material_o *v30; // x20
  int v31; // w22
  UnityEngine_Material_o *v32; // x20
  int v33; // s0 OVERLAPPED
  int v35; // s2
  int v36; // s3
  UnityEngine_Material_o *v37; // x20
  int v38; // s0 OVERLAPPED
  int v40; // s2
  int v41; // s3
  const MethodInfo *v42; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector4_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3266F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_16133/*"_BackSprite_Mask"*/);
    sub_1C32C20(&StringLiteral_16131/*"_BackSpriteRect"*/);
    sub_1C32C20(&StringLiteral_16206/*"_FaceSpriteTexSize"*/);
    sub_1C32C20(&StringLiteral_16205/*"_FaceSpriteRect"*/);
    sub_1C32C20(&StringLiteral_16129/*"_BackSprite"*/);
    sub_1C32C20(&StringLiteral_16130/*"_BackSpriteNGUISize"*/);
    sub_1C32C20(&StringLiteral_16132/*"_BackSpriteTexSize"*/);
    sub_1C32C20(&StringLiteral_16274/*"_MySize"*/);
    sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    sub_1C32C20(&StringLiteral_16204/*"_FaceSpriteNGUISize"*/);
    sub_1C32C20(&StringLiteral_16203/*"_FaceSprite"*/);
    byte_4C3266F = 1;
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
      v7 = (UnityEngine_Transform_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))backSprite->klass->vtable._22_get_localSize.methodPtr)(
                    backSprite,
                    this->fields.backSprite,
                    backSprite->klass->vtable._22_get_localSize.method);
      if ( !v7 )
        goto LABEL_37;
      v10 = 0;
      UnityEngine_Transform__set_localScale(v7, *(UnityEngine_Vector3_o *)&v8, 0);
      transform = &this->fields.backSprite->klass;
      if ( !transform )
        goto LABEL_37;
      transform = UISprite__GetAtlasSprite((UISprite_o *)transform, 0);
      if ( !this->fields.faceSprite )
        goto LABEL_37;
      v11 = transform;
      transform = UISprite__GetAtlasSprite(this->fields.faceSprite, 0);
      if ( !v11 )
        goto LABEL_37;
      if ( !transform )
        goto LABEL_37;
      v12 = this->fields.backSprite;
      if ( !v12 )
        goto LABEL_37;
      v14 = v11[6];
      v13 = v11[7];
      v15 = v11[8];
      v16 = v11[9];
      v18 = *((_DWORD *)transform + 6);
      v17 = *((_DWORD *)transform + 7);
      v19 = *((_DWORD *)transform + 8);
      v20 = *((_DWORD *)transform + 9);
      transform = (_QWORD *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))v12->klass->vtable._26_get_mainTexture.methodPtr)(
                              this->fields.backSprite,
                              v12->klass->vtable._26_get_mainTexture.method);
      v21 = this->fields.backSprite;
      if ( !v21 )
        goto LABEL_37;
      v22 = (UnityEngine_Texture_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))v21->klass->vtable._24_get_material.methodPtr)(
                    v21,
                    this->fields.backSprite,
                    v21->klass->vtable._24_get_material.method);
      if ( !transform )
        goto LABEL_37;
      transform = UnityEngine_Material__GetTexture(
                    (UnityEngine_Material_o *)transform,
                    (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
                    0);
      faceSprite = this->fields.faceSprite;
      if ( !faceSprite )
        goto LABEL_37;
      v24 = (UnityEngine_Texture_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))faceSprite->klass->vtable._26_get_mainTexture.methodPtr)(
                    faceSprite,
                    this->fields.faceSprite,
                    faceSprite->klass->vtable._26_get_mainTexture.method);
      if ( !this->fields.reflectionMaterial )
        goto LABEL_37;
      v25 = (UnityEngine_Texture_o *)transform;
      UnityEngine_Material__SetTexture(this->fields.reflectionMaterial, (System_String_o *)StringLiteral_16129/*"_BackSprite"*/, v22, 0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16133/*"_BackSprite_Mask"*/,
        v24,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16203/*"_FaceSprite"*/,
        v25,
        0);
      v26 = this->fields.reflectionMaterial;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_37;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      if ( !v26 )
        goto LABEL_37;
      v27 = 0;
      UnityEngine_Material__SetVector(
        v26,
        (System_String_o *)StringLiteral_16274/*"_MySize"*/,
        *(UnityEngine_Vector4_o *)&localScale.fields.x,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      v44.fields.x = (float)v14;
      v44.fields.y = (float)v13;
      v44.fields.z = (float)v15;
      v44.fields.w = (float)v16;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16131/*"_BackSpriteRect"*/,
        v44,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      v45.fields.x = (float)v18;
      v45.fields.y = (float)v17;
      v45.fields.z = (float)v19;
      v45.fields.w = (float)v20;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16205/*"_FaceSpriteRect"*/,
        v45,
        0);
      if ( !v22 )
        goto LABEL_37;
      v28 = this->fields.reflectionMaterial;
      v29 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v22->klass->vtable._4_get_width.methodPtr)(
              v22,
              v22->klass->vtable._4_get_width.method);
      transform = (_QWORD *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v22->klass->vtable._6_get_height.methodPtr)(
                              v22,
                              v22->klass->vtable._6_get_height.method);
      if ( !v28 )
        goto LABEL_37;
      v46.fields.y = (float)(int)transform;
      v46.fields.x = (float)v29;
      v46.fields.z = 0.0;
      v46.fields.w = 0.0;
      UnityEngine_Material__SetVector(v28, (System_String_o *)StringLiteral_16132/*"_BackSpriteTexSize"*/, v46, 0);
      if ( !v25 )
        goto LABEL_37;
      v30 = this->fields.reflectionMaterial;
      v31 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v25->klass->vtable._4_get_width.methodPtr)(
              v25,
              v25->klass->vtable._4_get_width.method);
      transform = (_QWORD *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v25->klass->vtable._6_get_height.methodPtr)(
                              v25,
                              v25->klass->vtable._6_get_height.method);
      if ( !v30 )
        goto LABEL_37;
      v47.fields.y = (float)(int)transform;
      v47.fields.x = (float)v31;
      v47.fields.z = 0.0;
      v47.fields.w = 0.0;
      UnityEngine_Material__SetVector(v30, (System_String_o *)StringLiteral_16206/*"_FaceSpriteTexSize"*/, v47, 0);
      transform = &this->fields.backSprite->klass;
      if ( !transform )
        goto LABEL_37;
      v32 = this->fields.reflectionMaterial;
      transform = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*transform + 664LL))(
                              transform,
                              *(_QWORD *)(*transform + 672LL));
      if ( !v32 )
        goto LABEL_37;
      v35 = 0;
      v36 = 0;
      UnityEngine_Material__SetVector(v32, (System_String_o *)StringLiteral_16130/*"_BackSpriteNGUISize"*/, *(UnityEngine_Vector4_o *)&v33, 0);
      transform = &this->fields.faceSprite->klass;
      if ( !transform
        || (v37 = this->fields.reflectionMaterial,
            transform = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*transform + 664LL))(
                                    transform,
                                    *(_QWORD *)(*transform + 672LL)),
            !v37)
        || (v40 = 0,
            v41 = 0,
            UnityEngine_Material__SetVector(
              v37,
              (System_String_o *)StringLiteral_16204/*"_FaceSpriteNGUISize"*/,
              *(UnityEngine_Vector4_o *)&v38,
              0),
            GrandServantServantFaceIconReflection__ApplyNGUIPanelHorizontal(this, v42),
            (transform = &this->fields.meshRenderer->klass) == 0) )
      {
LABEL_37:
        sub_1C32E7C(transform);
      }
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)transform, this->fields.reflectionMaterial, 0);
    }
  }
}