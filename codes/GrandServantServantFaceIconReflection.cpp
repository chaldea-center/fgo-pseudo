void __fastcall GrandServantServantFaceIconReflection___ctor(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandServantServantFaceIconReflection__ApplyNGUIPanelHorizontal(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *panel; // x20
  int32_t width; // w20
  UnityEngine_Material_o *height; // x0
  __int64 v8; // x1
  int v9; // w21
  float v10; // s0
  struct UIPanel_o *v11; // x8
  float x; // s8
  float v13; // s9

  if ( (byte_4B3F7AD & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_16283/*"_PanelWidth"*/, v3);
    sub_1BDB878(&StringLiteral_16281/*"_PanelSoftnessX"*/, v4);
    byte_4B3F7AD = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(panel, 0LL, 0LL) )
  {
    width = UnityEngine_Screen__get_width(0LL);
    height = (UnityEngine_Material_o *)UnityEngine_Screen__get_height(0LL);
    if ( !this->fields.panel )
      goto LABEL_11;
    v9 = (int)height;
    v10 = UIPanel__get_width(this->fields.panel, 0LL);
    v11 = this->fields.panel;
    if ( !v11
      || (height = this->fields.reflectionMaterial) == 0LL
      || (x = v11->fields.mClipSoftness.fields.x,
          v13 = fmaxf((float)((float)width / (float)v9) / 1.7778, 1.0) * 1024.0,
          UnityEngine_Material__SetFloat(height, (System_String_o *)StringLiteral_16283/*"_PanelWidth"*/, v10 / v13, 0LL),
          (height = this->fields.reflectionMaterial) == 0LL) )
    {
LABEL_11:
      sub_1BDBAD4(height, v8);
    }
    UnityEngine_Material__SetFloat(height, (System_String_o *)StringLiteral_16281/*"_PanelSoftnessX"*/, (float)(x / v13) * 4.0, 0LL);
  }
}


void __fastcall GrandServantServantFaceIconReflection__CleanUp(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_reflectionMaterial; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Material_o *reflectionMaterial; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4B3F7AE & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3F7AE = 1;
  }
  reflectionMaterial = this->fields.reflectionMaterial;
  p_reflectionMaterial = &this->fields.reflectionMaterial;
  v4 = (UnityEngine_Object_o *)reflectionMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)*p_reflectionMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v6, 0LL);
    *p_reflectionMaterial = 0LL;
    sub_1BDB81C(p_reflectionMaterial);
  }
}


void __fastcall GrandServantServantFaceIconReflection__InstantiateReflectionMaterial(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *reflectionMaterial; // x21
  UnityEngine_Shader_o *reflectionShader; // x21
  UnityEngine_Material_o *v6; // x22
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x0

  if ( (byte_4B3F7AB & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Material_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B3F7AB = 1;
  }
  reflectionMaterial = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(reflectionMaterial, 0LL, 0LL) )
  {
    reflectionShader = this->fields.reflectionShader;
    v6 = (UnityEngine_Material_o *)sub_1BDBAC4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v6, reflectionShader, 0LL);
    this->fields.reflectionMaterial = v6;
    sub_1BDB81C(&this->fields.reflectionMaterial);
    v8 = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
    if ( !v8 )
      sub_1BDBAD4(0LL, v7);
    UnityEngine_Object__set_hideFlags(v8, 61, 0LL);
  }
}


// attributes: thunk
void __fastcall GrandServantServantFaceIconReflection__OnDisable(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  GrandServantServantFaceIconReflection__CleanUp(this, method);
}


void __fastcall GrandServantServantFaceIconReflection__OnEnable(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4B3F7AA & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInParent_UIPanel___, method);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v3);
    byte_4B3F7AA = 1;
  }
  this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Component__GetComponent_object_(
                                                                     (UnityEngine_Component_o *)this,
                                                                     (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  sub_1BDB81C(&this->fields.meshRenderer);
  this->fields.panel = (struct UIPanel_o *)UnityEngine_Component__GetComponentInParent_object_(
                                             (UnityEngine_Component_o *)this,
                                             1,
                                             (const MethodInfo_302AA08 *)Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
  sub_1BDB81C(&this->fields.panel);
  GrandServantServantFaceIconReflection__InstantiateReflectionMaterial(this, v4);
  GrandServantServantFaceIconReflection__SetupReflectionMaterial(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantServantFaceIconReflection__SetupReflectionMaterial(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
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
  __int64 v13; // x1
  UnityEngine_Object_o *reflectionMaterial; // x20
  UnityEngine_Object_o *meshRenderer; // x20
  void *transform; // x0
  __int64 v17; // x1
  struct UISprite_o *backSprite; // x8
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  int v22; // s2
  _DWORD *v23; // x20
  struct UISprite_o *v24; // x8
  int v25; // s12
  int v26; // s15
  int v27; // s13
  int v28; // s14
  int v29; // s8
  int v30; // s11
  int v31; // s9
  int v32; // s10
  struct UISprite_o *v33; // x8
  UnityEngine_Texture_o *v34; // x20
  struct UISprite_o *faceSprite; // x8
  UnityEngine_Texture_o *v36; // x22
  UnityEngine_Texture_o *v37; // x21
  UnityEngine_Material_o *v38; // x22
  int v39; // s0
  int v42; // s3
  UnityEngine_Material_o *v43; // x22
  int v44; // w23
  UnityEngine_Material_o *v45; // x20
  int v46; // w22
  UnityEngine_Material_o *v47; // x20
  int v48; // s0
  int v50; // s2
  int v51; // s3
  UnityEngine_Material_o *v52; // x20
  int v53; // s0
  int v55; // s2
  int v56; // s3
  const MethodInfo *v57; // x1
  UnityEngine_Vector4_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3F7AC & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StringLiteral_16114/*"_BackSprite_Mask"*/, v3);
    sub_1BDB878(&StringLiteral_16112/*"_BackSpriteRect"*/, v4);
    sub_1BDB878(&StringLiteral_16187/*"_FaceSpriteTexSize"*/, v5);
    sub_1BDB878(&StringLiteral_16186/*"_FaceSpriteRect"*/, v6);
    sub_1BDB878(&StringLiteral_16110/*"_BackSprite"*/, v7);
    sub_1BDB878(&StringLiteral_16111/*"_BackSpriteNGUISize"*/, v8);
    sub_1BDB878(&StringLiteral_16113/*"_BackSpriteTexSize"*/, v9);
    sub_1BDB878(&StringLiteral_16255/*"_MySize"*/, v10);
    sub_1BDB878(&StringLiteral_16248/*"_MaskTex"*/, v11);
    sub_1BDB878(&StringLiteral_16185/*"_FaceSpriteNGUISize"*/, v12);
    sub_1BDB878(&StringLiteral_16184/*"_FaceSprite"*/, v13);
    byte_4B3F7AC = 1;
  }
  reflectionMaterial = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(reflectionMaterial, 0LL, 0LL) )
  {
    meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(meshRenderer, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      backSprite = this->fields.backSprite;
      if ( !backSprite )
        goto LABEL_37;
      v19 = (UnityEngine_Transform_o *)transform;
      transform = (void *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))backSprite->klass->vtable._22_get_localSize.method)(
                            this->fields.backSprite,
                            backSprite->klass->vtable._23_get_drawingDimensions.methodPtr);
      if ( !v19 )
        goto LABEL_37;
      v22 = 0;
      UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
      transform = this->fields.backSprite;
      if ( !transform )
        goto LABEL_37;
      transform = UISprite__GetAtlasSprite((UISprite_o *)transform, 0LL);
      if ( !this->fields.faceSprite )
        goto LABEL_37;
      v23 = transform;
      transform = UISprite__GetAtlasSprite(this->fields.faceSprite, 0LL);
      if ( !v23 )
        goto LABEL_37;
      if ( !transform )
        goto LABEL_37;
      v24 = this->fields.backSprite;
      if ( !v24 )
        goto LABEL_37;
      v26 = v23[6];
      v25 = v23[7];
      v27 = v23[8];
      v28 = v23[9];
      v30 = *((_DWORD *)transform + 6);
      v29 = *((_DWORD *)transform + 7);
      v31 = *((_DWORD *)transform + 8);
      v32 = *((_DWORD *)transform + 9);
      transform = (void *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v24->klass->vtable._26_get_mainTexture.method)(
                            this->fields.backSprite,
                            v24->klass->vtable._27_set_mainTexture.methodPtr);
      v33 = this->fields.backSprite;
      if ( !v33 )
        goto LABEL_37;
      v34 = (UnityEngine_Texture_o *)transform;
      transform = (void *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v33->klass->vtable._24_get_material.method)(
                            this->fields.backSprite,
                            v33->klass->vtable._25_set_material.methodPtr);
      if ( !transform )
        goto LABEL_37;
      transform = UnityEngine_Material__GetTexture(
                    (UnityEngine_Material_o *)transform,
                    (System_String_o *)StringLiteral_16248/*"_MaskTex"*/,
                    0LL);
      faceSprite = this->fields.faceSprite;
      if ( !faceSprite )
        goto LABEL_37;
      v36 = (UnityEngine_Texture_o *)transform;
      transform = (void *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))faceSprite->klass->vtable._26_get_mainTexture.method)(
                            this->fields.faceSprite,
                            faceSprite->klass->vtable._27_set_mainTexture.methodPtr);
      if ( !this->fields.reflectionMaterial )
        goto LABEL_37;
      v37 = (UnityEngine_Texture_o *)transform;
      UnityEngine_Material__SetTexture(
        this->fields.reflectionMaterial,
        (System_String_o *)StringLiteral_16110/*"_BackSprite"*/,
        v34,
        0LL);
      transform = this->fields.reflectionMaterial;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16114/*"_BackSprite_Mask"*/,
        v36,
        0LL);
      transform = this->fields.reflectionMaterial;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16184/*"_FaceSprite"*/,
        v37,
        0LL);
      v38 = this->fields.reflectionMaterial;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      if ( !v38 )
        goto LABEL_37;
      v42 = 0;
      UnityEngine_Material__SetVector(v38, (System_String_o *)StringLiteral_16255/*"_MySize"*/, *(UnityEngine_Vector4_o *)&v39, 0LL);
      transform = this->fields.reflectionMaterial;
      if ( !transform )
        goto LABEL_37;
      v58.fields.x = (float)v26;
      v58.fields.y = (float)v25;
      v58.fields.z = (float)v27;
      v58.fields.w = (float)v28;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16112/*"_BackSpriteRect"*/,
        v58,
        0LL);
      transform = this->fields.reflectionMaterial;
      if ( !transform )
        goto LABEL_37;
      v59.fields.x = (float)v30;
      v59.fields.y = (float)v29;
      v59.fields.z = (float)v31;
      v59.fields.w = (float)v32;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16186/*"_FaceSpriteRect"*/,
        v59,
        0LL);
      if ( !v34 )
        goto LABEL_37;
      v43 = this->fields.reflectionMaterial;
      v44 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v34->klass->vtable._4_get_width.method)(
              v34,
              v34->klass->vtable._5_set_width.methodPtr);
      transform = (void *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v34->klass->vtable._6_get_height.method)(
                            v34,
                            v34->klass->vtable._7_set_height.methodPtr);
      if ( !v43 )
        goto LABEL_37;
      v60.fields.y = (float)(int)transform;
      v60.fields.x = (float)v44;
      v60.fields.z = 0.0;
      v60.fields.w = 0.0;
      UnityEngine_Material__SetVector(v43, (System_String_o *)StringLiteral_16113/*"_BackSpriteTexSize"*/, v60, 0LL);
      if ( !v37 )
        goto LABEL_37;
      v45 = this->fields.reflectionMaterial;
      v46 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v37->klass->vtable._4_get_width.method)(
              v37,
              v37->klass->vtable._5_set_width.methodPtr);
      transform = (void *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v37->klass->vtable._6_get_height.method)(
                            v37,
                            v37->klass->vtable._7_set_height.methodPtr);
      if ( !v45 )
        goto LABEL_37;
      v61.fields.y = (float)(int)transform;
      v61.fields.x = (float)v46;
      v61.fields.z = 0.0;
      v61.fields.w = 0.0;
      UnityEngine_Material__SetVector(v45, (System_String_o *)StringLiteral_16187/*"_FaceSpriteTexSize"*/, v61, 0LL);
      transform = this->fields.backSprite;
      if ( !transform )
        goto LABEL_37;
      v47 = this->fields.reflectionMaterial;
      transform = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
                            transform,
                            *(_QWORD *)(*(_QWORD *)transform + 672LL));
      if ( !v47 )
        goto LABEL_37;
      v50 = 0;
      v51 = 0;
      UnityEngine_Material__SetVector(v47, (System_String_o *)StringLiteral_16111/*"_BackSpriteNGUISize"*/, *(UnityEngine_Vector4_o *)&v48, 0LL);
      transform = this->fields.faceSprite;
      if ( !transform
        || (v52 = this->fields.reflectionMaterial,
            transform = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
                                  transform,
                                  *(_QWORD *)(*(_QWORD *)transform + 672LL)),
            !v52)
        || (v55 = 0,
            v56 = 0,
            UnityEngine_Material__SetVector(
              v52,
              (System_String_o *)StringLiteral_16185/*"_FaceSpriteNGUISize"*/,
              *(UnityEngine_Vector4_o *)&v53,
              0LL),
            GrandServantServantFaceIconReflection__ApplyNGUIPanelHorizontal(this, v57),
            (transform = this->fields.meshRenderer) == 0LL) )
      {
LABEL_37:
        sub_1BDBAD4(transform, v17);
      }
      UnityEngine_Renderer__set_sharedMaterial(
        (UnityEngine_Renderer_o *)transform,
        this->fields.reflectionMaterial,
        0LL);
    }
  }
}