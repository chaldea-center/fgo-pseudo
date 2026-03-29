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

  if ( (byte_4D2B4CB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16405/*"_PanelWidth"*/);
    sub_1C93AD4(&StringLiteral_16403/*"_PanelSoftnessX"*/);
    byte_4D2B4CB = 1;
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
          UnityEngine_Material__SetFloat(height, (System_String_o *)StringLiteral_16405/*"_PanelWidth"*/, v8 / v11, 0),
          (height = this->fields.reflectionMaterial) == 0) )
    {
LABEL_11:
      sub_1C93D2C(height, v6);
    }
    UnityEngine_Material__SetFloat(height, (System_String_o *)StringLiteral_16403/*"_PanelSoftnessX"*/, (float)(x / v11) * 4.0, 0);
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

  if ( (byte_4D2B4CC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B4CC = 1;
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
    UnityEngine_Object__Destroy_72119908(v6, 0);
    *p_reflectionMaterial = 0;
    sub_1C93A78(p_reflectionMaterial, 0);
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

  if ( (byte_4D2B4C9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B4C9 = 1;
  }
  reflectionMaterial = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(reflectionMaterial, 0, 0) )
  {
    reflectionShader = this->fields.reflectionShader;
    v5 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v5, reflectionShader, 0);
    this->fields.reflectionMaterial = v5;
    sub_1C93A78(&this->fields.reflectionMaterial, v5);
    v7 = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
    if ( !v7 )
      sub_1C93D2C(0, v6);
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

  if ( (byte_4D2B4C8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    byte_4D2B4C8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
  sub_1C93A78(&this->fields.meshRenderer, Component_object);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               1,
                               (const MethodInfo_319BAE8 *)Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
  this->fields.panel = (struct UIPanel_o *)ComponentInParent_object;
  sub_1C93A78(&this->fields.panel, ComponentInParent_object);
  GrandServantServantFaceIconReflection__InstantiateReflectionMaterial(this, v5);
  GrandServantServantFaceIconReflection__SetupReflectionMaterial(this, v6);
}


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
  _DWORD *v10; // x20
  struct UISprite_o *v11; // x8
  int v12; // s12
  int v13; // s15
  int v14; // s13
  int v15; // s14
  int v16; // s8
  int v17; // s11
  int v18; // s9
  int v19; // s10
  struct UISprite_o *v20; // x8
  UnityEngine_Texture_o *v21; // x20
  struct UISprite_o *faceSprite; // x8
  UnityEngine_Texture_o *v23; // x22
  UnityEngine_Texture_o *v24; // x21
  UnityEngine_Material_o *v25; // x22
  UnityEngine_Material_o *v26; // x22
  int v27; // w23
  UnityEngine_Material_o *v28; // x20
  int v29; // w22
  UnityEngine_Material_o *v30; // x20
  UnityEngine_Material_o *v32; // x20
  const MethodInfo *v34; // x1
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2B4CA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16233/*"_BackSprite_Mask"*/);
    sub_1C93AD4(&StringLiteral_16231/*"_BackSpriteRect"*/);
    sub_1C93AD4(&StringLiteral_16308/*"_FaceSpriteTexSize"*/);
    sub_1C93AD4(&StringLiteral_16307/*"_FaceSpriteRect"*/);
    sub_1C93AD4(&StringLiteral_16229/*"_BackSprite"*/);
    sub_1C93AD4(&StringLiteral_16230/*"_BackSpriteNGUISize"*/);
    sub_1C93AD4(&StringLiteral_16232/*"_BackSpriteTexSize"*/);
    sub_1C93AD4(&StringLiteral_16377/*"_MySize"*/);
    sub_1C93AD4(&StringLiteral_16370/*"_MaskTex"*/);
    sub_1C93AD4(&StringLiteral_16306/*"_FaceSpriteNGUISize"*/);
    sub_1C93AD4(&StringLiteral_16305/*"_FaceSprite"*/);
    byte_4D2B4CA = 1;
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
      v38.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(v8, v38, 0);
      transform = &this->fields.backSprite->klass;
      if ( !transform )
        goto LABEL_37;
      transform = UISprite__GetAtlasSprite((UISprite_o *)transform, 0);
      if ( !this->fields.faceSprite )
        goto LABEL_37;
      v10 = transform;
      transform = UISprite__GetAtlasSprite(this->fields.faceSprite, 0);
      if ( !v10 )
        goto LABEL_37;
      if ( !transform )
        goto LABEL_37;
      v11 = this->fields.backSprite;
      if ( !v11 )
        goto LABEL_37;
      v13 = v10[6];
      v12 = v10[7];
      v14 = v10[8];
      v15 = v10[9];
      v17 = *((_DWORD *)transform + 6);
      v16 = *((_DWORD *)transform + 7);
      v18 = *((_DWORD *)transform + 8);
      v19 = *((_DWORD *)transform + 9);
      transform = (_QWORD *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))v11->klass->vtable._26_get_mainTexture.methodPtr)(
                              this->fields.backSprite,
                              v11->klass->vtable._26_get_mainTexture.method);
      v20 = this->fields.backSprite;
      if ( !v20 )
        goto LABEL_37;
      v21 = (UnityEngine_Texture_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))v20->klass->vtable._24_get_material.methodPtr)(
                    v20,
                    this->fields.backSprite,
                    v20->klass->vtable._24_get_material.method);
      if ( !transform )
        goto LABEL_37;
      transform = UnityEngine_Material__GetTexture(
                    (UnityEngine_Material_o *)transform,
                    (System_String_o *)StringLiteral_16370/*"_MaskTex"*/,
                    0);
      faceSprite = this->fields.faceSprite;
      if ( !faceSprite )
        goto LABEL_37;
      v23 = (UnityEngine_Texture_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))faceSprite->klass->vtable._26_get_mainTexture.methodPtr)(
                    faceSprite,
                    this->fields.faceSprite,
                    faceSprite->klass->vtable._26_get_mainTexture.method);
      if ( !this->fields.reflectionMaterial )
        goto LABEL_37;
      v24 = (UnityEngine_Texture_o *)transform;
      UnityEngine_Material__SetTexture(this->fields.reflectionMaterial, (System_String_o *)StringLiteral_16229/*"_BackSprite"*/, v21, 0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16233/*"_BackSprite_Mask"*/,
        v23,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16305/*"_FaceSprite"*/,
        v24,
        0);
      v25 = this->fields.reflectionMaterial;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_37;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      v45.fields.x = localScale.fields.x;
      v45.fields.y = localScale.fields.y;
      v45.fields.z = localScale.fields.z;
      if ( !v25 )
        goto LABEL_37;
      v45.fields.w = 0.0;
      UnityEngine_Material__SetVector(v25, (System_String_o *)StringLiteral_16377/*"_MySize"*/, v45, 0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      v39.fields.x = (float)v13;
      v39.fields.y = (float)v12;
      v39.fields.z = (float)v14;
      v39.fields.w = (float)v15;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16231/*"_BackSpriteRect"*/,
        v39,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      v40.fields.x = (float)v17;
      v40.fields.y = (float)v16;
      v40.fields.z = (float)v18;
      v40.fields.w = (float)v19;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16307/*"_FaceSpriteRect"*/,
        v40,
        0);
      if ( !v21 )
        goto LABEL_37;
      v26 = this->fields.reflectionMaterial;
      v27 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v21->klass->vtable._4_get_width.methodPtr)(
              v21,
              v21->klass->vtable._4_get_width.method);
      transform = (_QWORD *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v21->klass->vtable._6_get_height.methodPtr)(
                              v21,
                              v21->klass->vtable._6_get_height.method);
      if ( !v26 )
        goto LABEL_37;
      v41.fields.y = (float)(int)transform;
      v41.fields.x = (float)v27;
      v41.fields.z = 0.0;
      v41.fields.w = 0.0;
      UnityEngine_Material__SetVector(v26, (System_String_o *)StringLiteral_16232/*"_BackSpriteTexSize"*/, v41, 0);
      if ( !v24 )
        goto LABEL_37;
      v28 = this->fields.reflectionMaterial;
      v29 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v24->klass->vtable._4_get_width.methodPtr)(
              v24,
              v24->klass->vtable._4_get_width.method);
      transform = (_QWORD *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v24->klass->vtable._6_get_height.methodPtr)(
                              v24,
                              v24->klass->vtable._6_get_height.method);
      if ( !v28 )
        goto LABEL_37;
      v42.fields.y = (float)(int)transform;
      v42.fields.x = (float)v29;
      v42.fields.z = 0.0;
      v42.fields.w = 0.0;
      UnityEngine_Material__SetVector(v28, (System_String_o *)StringLiteral_16308/*"_FaceSpriteTexSize"*/, v42, 0);
      transform = &this->fields.backSprite->klass;
      if ( !transform )
        goto LABEL_37;
      v30 = this->fields.reflectionMaterial;
      transform = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*transform + 664LL))(
                              transform,
                              *(_QWORD *)(*transform + 672LL));
      if ( !v30 )
        goto LABEL_37;
      v43.fields.z = 0.0;
      v43.fields.w = 0.0;
      UnityEngine_Material__SetVector(v30, (System_String_o *)StringLiteral_16230/*"_BackSpriteNGUISize"*/, v43, 0);
      transform = &this->fields.faceSprite->klass;
      if ( !transform
        || (v32 = this->fields.reflectionMaterial,
            transform = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*transform + 664LL))(
                                    transform,
                                    *(_QWORD *)(*transform + 672LL)),
            !v32)
        || (v44.fields.z = 0.0,
            v44.fields.w = 0.0,
            UnityEngine_Material__SetVector(v32, (System_String_o *)StringLiteral_16306/*"_FaceSpriteNGUISize"*/, v44, 0),
            GrandServantServantFaceIconReflection__ApplyNGUIPanelHorizontal(this, v34),
            (transform = &this->fields.meshRenderer->klass) == 0) )
      {
LABEL_37:
        sub_1C93D2C(transform, v6);
      }
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)transform, this->fields.reflectionMaterial, 0);
    }
  }
}