void FadeClipController___cctor(const MethodInfo *method)
{
  int32_t v1; // w0
  struct FadeClipController_StaticFields *static_fields; // x8
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C44684 & 1) == 0 )
  {
    sub_1C37058(&FadeClipController_TypeInfo);
    sub_1C37058(&StringLiteral_16218/*"_FadeParam"*/);
    sub_1C37058(&StringLiteral_16216/*"_FadeDegreeTo"*/);
    sub_1C37058(&StringLiteral_16195/*"_FADE_CLIP"*/);
    sub_1C37058(&StringLiteral_16215/*"_FadeDegreeFrom"*/);
    byte_4C44684 = 1;
  }
  FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID = UnityEngine_Shader__PropertyToID(
                                                                (System_String_o *)StringLiteral_16218/*"_FadeParam"*/,
                                                                0);
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID = UnityEngine_Shader__PropertyToID(
                                                                      (System_String_o *)StringLiteral_16215/*"_FadeDegreeFrom"*/,
                                                                      0);
  v1 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16216/*"_FadeDegreeTo"*/, 0);
  static_fields = FadeClipController_TypeInfo->static_fields;
  static_fields->FADE_DEGREE_TO_ID = v1;
  v3 = StringLiteral_16195/*"_FADE_CLIP"*/;
  static_fields->FADE_CLIP_ID = (struct System_String_o *)StringLiteral_16195/*"_FADE_CLIP"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->FADE_CLIP_ID, v3, v4, v5);
}


void FadeClipController___ctor(FadeClipController_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields._FadeDegreeFrom = _D0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FadeClipController__Setup(FadeClipController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x20
  UnityEngine_Object_o *material; // x21
  UnityEngine_Renderer_o *v5; // x0
  struct UnityEngine_Material_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C44681 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44681 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(meshRenderer, 0, 0) )
  {
    material = (UnityEngine_Object_o *)this->fields.material;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(material, 0, 0) )
    {
      v5 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
      if ( !v5 )
        sub_1C372B4(0);
      v6 = UnityEngine_Renderer__get_material(v5, 0);
      this->fields.material = v6;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.material, (int32_t)v6, v7, v8);
    }
  }
}


void FadeClipController__Start(FadeClipController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x21
  const MethodInfo *v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C44682 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44682 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.meshRenderer, (int32_t)Component_object, v6, v7);
  }
  FadeClipController__Setup(this, v4);
}


void FadeClipController__Update(FadeClipController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x20
  UnityEngine_Material_o *v4; // x20
  UnityEngine_Material_o *v5; // x0
  _BOOL4 fadeClip; // w20
  UnityEngine_Material_o *v7; // x19
  System_String_o *v8; // x1

  if ( (byte_4C44683 & 1) == 0 )
  {
    sub_1C37058(&FadeClipController_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44683 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(material, 0, 0) )
  {
    v4 = this->fields.material;
    v5 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    if ( !FadeClipController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
    if ( !v4 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_71136484(
      v4,
      FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID,
      this->fields._FadeParam,
      0);
    v5 = this->fields.material;
    if ( !v5 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_71136484(
      v5,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID,
      this->fields._FadeDegreeFrom,
      0);
    v5 = this->fields.material;
    if ( !v5 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_71136484(
      v5,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_TO_ID,
      this->fields._FadeDegreeTo,
      0);
    v5 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    fadeClip = this->fields._fadeClip;
    v7 = this->fields.material;
    if ( !FadeClipController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
      v5 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    }
    if ( !v7 )
LABEL_17:
      sub_1C372B4(v5);
    v8 = *(System_String_o **)(v5[7].fields.m_CachedPtr + 16);
    if ( fadeClip )
      UnityEngine_Material__EnableKeyword(v7, v8, 0);
    else
      UnityEngine_Material__DisableKeyword(v7, v8, 0);
  }
}