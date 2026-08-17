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
  __int64 v2; // x2
  UnityEngine_Object_o *panel; // x20
  int32_t width; // w20
  __int64 v6; // x1
  float height; // s1
  UIPanel_o *reflectionMaterial; // x0
  float v9; // s8
  float v10; // s0
  struct UIPanel_o *v11; // x8
  float x; // s9
  float v13; // s8

  if ( (byte_596B111 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16955/*"_PanelWidth"*/);
    sub_2213A60(&StringLiteral_16953/*"_PanelSoftnessX"*/);
    byte_596B111 = 1;
  }
  panel = (UnityEngine_Object_o *)this->fields.panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(panel, 0, 0) )
  {
    width = UnityEngine_Screen__get_width(0);
    height = (float)UnityEngine_Screen__get_height(0);
    reflectionMaterial = this->fields.panel;
    if ( (float)((float)((float)width / height) / 1.7778) >= 1.0 )
      v9 = (float)((float)width / height) / 1.7778;
    else
      v9 = 1.0;
    if ( !reflectionMaterial
      || (v10 = UIPanel__get_width(reflectionMaterial, 0), (v11 = this->fields.panel) == 0)
      || (reflectionMaterial = (UIPanel_o *)this->fields.reflectionMaterial) == 0
      || (x = v11->fields.mClipSoftness.fields.x,
          v13 = v9 * 1024.0,
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)reflectionMaterial,
            (System_String_o *)StringLiteral_16955/*"_PanelWidth"*/,
            v10 / v13,
            0),
          (reflectionMaterial = (UIPanel_o *)this->fields.reflectionMaterial) == 0) )
    {
      sub_2213CDC(reflectionMaterial, v6);
    }
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)reflectionMaterial,
      (System_String_o *)StringLiteral_16953/*"_PanelSoftnessX"*/,
      (float)(x / v13) * 4.0,
      0);
  }
}


void GrandServantServantFaceIconReflection__CleanUp(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_reflectionMaterial; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_Material_o *reflectionMaterial; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596B112 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B112 = 1;
  }
  reflectionMaterial = this->fields.reflectionMaterial;
  p_reflectionMaterial = (MissionNaviTransitionBoardItem_o *)&this->fields.reflectionMaterial;
  v5 = (UnityEngine_Object_o *)reflectionMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_reflectionMaterial->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_reflectionMaterial->klass = 0;
    sub_2213A04(p_reflectionMaterial, 0, v10, v11, v12, v13, v14, v15);
  }
}


void GrandServantServantFaceIconReflection__InstantiateReflectionMaterial(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *reflectionMaterial; // x21
  UnityEngine_Shader_o *reflectionShader; // x21
  UnityEngine_Material_o *v6; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x0

  if ( (byte_596B10F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B10F = 1;
  }
  reflectionMaterial = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(reflectionMaterial, 0, 0) )
  {
    reflectionShader = this->fields.reflectionShader;
    v6 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v6, reflectionShader, 0);
    this->fields.reflectionMaterial = v6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.reflectionMaterial,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v14 = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
    if ( !v14 )
      sub_2213CDC(0, v13);
    UnityEngine_Object__set_hideFlags(v14, 61, 0);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *ComponentInParent_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_596B10E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInParent_UIPanel____91731584);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    byte_596B10E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
  this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.meshRenderer,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               1,
                               (const MethodInfo_3821404 *)Method_UnityEngine_Component_GetComponentInParent_UIPanel____91731584);
  this->fields.panel = (struct UIPanel_o *)ComponentInParent_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.panel,
    (int32_t)ComponentInParent_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  GrandServantServantFaceIconReflection__InstantiateReflectionMaterial(this, v17);
  GrandServantServantFaceIconReflection__SetupReflectionMaterial(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantServantFaceIconReflection__SetupReflectionMaterial(
        GrandServantServantFaceIconReflection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *reflectionMaterial; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *meshRenderer; // x20
  _QWORD *transform; // x0
  __int64 v9; // x1
  struct UISprite_o *backSprite; // x8
  UnityEngine_Transform_o *v11; // x20
  int v12; // s0 OVERLAPPED
  int v14; // s2
  _DWORD *v15; // x20
  struct UISprite_o *v16; // x8
  int v17; // s12
  int v18; // s13
  int v19; // s14
  int v20; // s15
  int v21; // s8
  int v22; // s9
  int v23; // s10
  int v24; // s11
  struct UISprite_o *v25; // x8
  UnityEngine_Texture_o *v26; // x21
  struct UISprite_o *faceSprite; // x8
  UnityEngine_Texture_o *v28; // x22
  UnityEngine_Texture_o *v29; // x20
  UnityEngine_Material_o *v30; // x22
  int v31; // s3
  UnityEngine_Material_o *v32; // x22
  int v33; // w23
  UnityEngine_Material_o *v34; // x21
  int v35; // w22
  UnityEngine_Material_o *v36; // x20
  int v37; // s0 OVERLAPPED
  int v39; // s2
  int v40; // s3
  UnityEngine_Material_o *v41; // x20
  int v42; // s0 OVERLAPPED
  int v44; // s2
  int v45; // s3
  const MethodInfo *v46; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector4_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596B110 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16772/*"_BackSprite_Mask"*/);
    sub_2213A60(&StringLiteral_16770/*"_BackSpriteRect"*/);
    sub_2213A60(&StringLiteral_16856/*"_FaceSpriteTexSize"*/);
    sub_2213A60(&StringLiteral_16855/*"_FaceSpriteRect"*/);
    sub_2213A60(&StringLiteral_16768/*"_BackSprite"*/);
    sub_2213A60(&StringLiteral_16769/*"_BackSpriteNGUISize"*/);
    sub_2213A60(&StringLiteral_16771/*"_BackSpriteTexSize"*/);
    sub_2213A60(&StringLiteral_16927/*"_MySize"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    sub_2213A60(&StringLiteral_16854/*"_FaceSpriteNGUISize"*/);
    sub_2213A60(&StringLiteral_16853/*"_FaceSprite"*/);
    byte_596B110 = 1;
  }
  reflectionMaterial = (UnityEngine_Object_o *)this->fields.reflectionMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(reflectionMaterial, 0, 0) )
  {
    meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality(meshRenderer, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      backSprite = this->fields.backSprite;
      if ( !backSprite )
        goto LABEL_37;
      v11 = (UnityEngine_Transform_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))backSprite->klass->vtable._22_get_localSize.methodPtr)(
                    backSprite,
                    this->fields.backSprite,
                    backSprite->klass->vtable._22_get_localSize.method);
      if ( !v11 )
        goto LABEL_37;
      v14 = 0;
      UnityEngine_Transform__set_localScale(v11, *(UnityEngine_Vector3_o *)&v12, 0);
      transform = &this->fields.backSprite->klass;
      if ( !transform )
        goto LABEL_37;
      transform = UISprite__GetAtlasSprite((UISprite_o *)transform, 0);
      if ( !this->fields.faceSprite )
        goto LABEL_37;
      v15 = transform;
      transform = UISprite__GetAtlasSprite(this->fields.faceSprite, 0);
      if ( !v15 )
        goto LABEL_37;
      if ( !transform )
        goto LABEL_37;
      v16 = this->fields.backSprite;
      if ( !v16 )
        goto LABEL_37;
      v17 = v15[6];
      v18 = v15[7];
      v19 = v15[8];
      v20 = v15[9];
      v21 = *((_DWORD *)transform + 6);
      v22 = *((_DWORD *)transform + 7);
      v23 = *((_DWORD *)transform + 8);
      v24 = *((_DWORD *)transform + 9);
      transform = (_QWORD *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))v16->klass->vtable._26_get_mainTexture.methodPtr)(
                              this->fields.backSprite,
                              v16->klass->vtable._26_get_mainTexture.method);
      v25 = this->fields.backSprite;
      if ( !v25 )
        goto LABEL_37;
      v26 = (UnityEngine_Texture_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))v25->klass->vtable._24_get_material.methodPtr)(
                    v25,
                    this->fields.backSprite,
                    v25->klass->vtable._24_get_material.method);
      if ( !transform )
        goto LABEL_37;
      transform = UnityEngine_Material__GetTexture(
                    (UnityEngine_Material_o *)transform,
                    (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
                    0);
      faceSprite = this->fields.faceSprite;
      if ( !faceSprite )
        goto LABEL_37;
      v28 = (UnityEngine_Texture_o *)transform;
      transform = ((_QWORD *(__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *))faceSprite->klass->vtable._26_get_mainTexture.methodPtr)(
                    faceSprite,
                    this->fields.faceSprite,
                    faceSprite->klass->vtable._26_get_mainTexture.method);
      if ( !this->fields.reflectionMaterial )
        goto LABEL_37;
      v29 = (UnityEngine_Texture_o *)transform;
      UnityEngine_Material__SetTexture(this->fields.reflectionMaterial, (System_String_o *)StringLiteral_16768/*"_BackSprite"*/, v26, 0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16772/*"_BackSprite_Mask"*/,
        v28,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      UnityEngine_Material__SetTexture(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16853/*"_FaceSprite"*/,
        v29,
        0);
      v30 = this->fields.reflectionMaterial;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_37;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      if ( !v30 )
        goto LABEL_37;
      v31 = 0;
      UnityEngine_Material__SetVector(
        v30,
        (System_String_o *)StringLiteral_16927/*"_MySize"*/,
        *(UnityEngine_Vector4_o *)&localScale.fields.x,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      v48.fields.x = (float)v17;
      v48.fields.y = (float)v18;
      v48.fields.z = (float)v19;
      v48.fields.w = (float)v20;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16770/*"_BackSpriteRect"*/,
        v48,
        0);
      transform = &this->fields.reflectionMaterial->klass;
      if ( !transform )
        goto LABEL_37;
      v49.fields.x = (float)v21;
      v49.fields.y = (float)v22;
      v49.fields.z = (float)v23;
      v49.fields.w = (float)v24;
      UnityEngine_Material__SetVector(
        (UnityEngine_Material_o *)transform,
        (System_String_o *)StringLiteral_16855/*"_FaceSpriteRect"*/,
        v49,
        0);
      if ( !v26 )
        goto LABEL_37;
      v32 = this->fields.reflectionMaterial;
      v33 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v26->klass->vtable._4_get_width.methodPtr)(
              v26,
              v26->klass->vtable._4_get_width.method);
      transform = (_QWORD *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v26->klass->vtable._6_get_height.methodPtr)(
                              v26,
                              v26->klass->vtable._6_get_height.method);
      if ( !v32 )
        goto LABEL_37;
      v50.fields.y = (float)(int)transform;
      v50.fields.x = (float)v33;
      v50.fields.z = 0.0;
      v50.fields.w = 0.0;
      UnityEngine_Material__SetVector(v32, (System_String_o *)StringLiteral_16771/*"_BackSpriteTexSize"*/, v50, 0);
      if ( !v29 )
        goto LABEL_37;
      v34 = this->fields.reflectionMaterial;
      v35 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v29->klass->vtable._4_get_width.methodPtr)(
              v29,
              v29->klass->vtable._4_get_width.method);
      transform = (_QWORD *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v29->klass->vtable._6_get_height.methodPtr)(
                              v29,
                              v29->klass->vtable._6_get_height.method);
      if ( !v34 )
        goto LABEL_37;
      v51.fields.y = (float)(int)transform;
      v51.fields.x = (float)v35;
      v51.fields.z = 0.0;
      v51.fields.w = 0.0;
      UnityEngine_Material__SetVector(v34, (System_String_o *)StringLiteral_16856/*"_FaceSpriteTexSize"*/, v51, 0);
      transform = &this->fields.backSprite->klass;
      if ( !transform )
        goto LABEL_37;
      v36 = this->fields.reflectionMaterial;
      transform = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*transform + 664LL))(
                              transform,
                              *(_QWORD *)(*transform + 672LL));
      if ( !v36 )
        goto LABEL_37;
      v39 = 0;
      v40 = 0;
      UnityEngine_Material__SetVector(v36, (System_String_o *)StringLiteral_16769/*"_BackSpriteNGUISize"*/, *(UnityEngine_Vector4_o *)&v37, 0);
      transform = &this->fields.faceSprite->klass;
      if ( !transform
        || (v41 = this->fields.reflectionMaterial,
            transform = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*transform + 664LL))(
                                    transform,
                                    *(_QWORD *)(*transform + 672LL)),
            !v41)
        || (v44 = 0,
            v45 = 0,
            UnityEngine_Material__SetVector(
              v41,
              (System_String_o *)StringLiteral_16854/*"_FaceSpriteNGUISize"*/,
              *(UnityEngine_Vector4_o *)&v42,
              0),
            GrandServantServantFaceIconReflection__ApplyNGUIPanelHorizontal(this, v46),
            (transform = &this->fields.meshRenderer->klass) == 0) )
      {
LABEL_37:
        sub_2213CDC(transform, v9);
      }
      UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)transform, this->fields.reflectionMaterial, 0);
    }
  }
}