void __fastcall FadeClipController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w0
  FadeClipController_c *v7; // x8
  struct FadeClipController_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4215461 & 1) == 0 )
  {
    sub_B0D8A4(&FadeClipController_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16033/*"_FadeParam"*/, v2);
    sub_B0D8A4(&StringLiteral_16031/*"_FadeDegreeTo"*/, v3);
    sub_B0D8A4(&StringLiteral_16018/*"_FADE_CLIP"*/, v4);
    sub_B0D8A4(&StringLiteral_16030/*"_FadeDegreeFrom"*/, v5);
    byte_4215461 = 1;
  }
  FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID = UnityEngine_Shader__PropertyToID(
                                                                (System_String_o *)StringLiteral_16033/*"_FadeParam"*/,
                                                                0LL);
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID = UnityEngine_Shader__PropertyToID(
                                                                      (System_String_o *)StringLiteral_16030/*"_FadeDegreeFrom"*/,
                                                                      0LL);
  v6 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16031/*"_FadeDegreeTo"*/, 0LL);
  v7 = FadeClipController_TypeInfo;
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_TO_ID = v6;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_16018/*"_FADE_CLIP"*/;
  static_fields->FADE_CLIP_ID = (struct System_String_o *)StringLiteral_16018/*"_FADE_CLIP"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->FADE_CLIP_ID, v9, v10, v11, v12, v13, v14, v15);
}


void __fastcall FadeClipController___ctor(FadeClipController_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields._FadeDegreeFrom = _D0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FadeClipController__Setup(FadeClipController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x20
  UnityEngine_Object_o *material; // x21
  UnityEngine_Renderer_o *v5; // x0
  struct UnityEngine_Material_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_421545E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421545E = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(meshRenderer, 0LL, 0LL) )
  {
    material = (UnityEngine_Object_o *)this->fields.material;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
    {
      v5 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
      if ( !v5 )
        sub_B0D97C(0LL);
      v6 = UnityEngine_Renderer__get_material(v5, 0LL);
      this->fields.material = v6;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.material,
        (System_Int32_array **)v6,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
  }
}


void __fastcall FadeClipController__Start(FadeClipController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *meshRenderer; // x21
  const MethodInfo *v5; // x1
  struct UnityEngine_MeshRenderer_o *Component_WebViewObject; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_421545F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421545F = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0LL, 0LL) )
  {
    Component_WebViewObject = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                     (UnityEngine_Component_o *)this,
                                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = Component_WebViewObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.meshRenderer,
      (System_Int32_array **)Component_WebViewObject,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  FadeClipController__Setup(this, v5);
}


void __fastcall FadeClipController__Update(FadeClipController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *material; // x20
  UnityEngine_Material_o *v5; // x20
  UnityEngine_Material_o *v6; // x0
  _BOOL4 fadeClip; // w9
  UnityEngine_Material_o *v8; // x19

  if ( (byte_4215460 & 1) == 0 )
  {
    sub_B0D8A4(&FadeClipController_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215460 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v5 = this->fields.material;
    v6 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    if ( (BYTE3(FadeClipController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FadeClipController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
    }
    if ( !v5 )
      goto LABEL_24;
    UnityEngine_Material__SetFloat_40815860(
      v5,
      FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID,
      this->fields._FadeParam,
      0LL);
    v6 = this->fields.material;
    if ( !v6 )
      goto LABEL_24;
    UnityEngine_Material__SetFloat_40815860(
      v6,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID,
      this->fields._FadeDegreeFrom,
      0LL);
    v6 = this->fields.material;
    if ( !v6 )
      goto LABEL_24;
    UnityEngine_Material__SetFloat_40815860(
      v6,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_TO_ID,
      this->fields._FadeDegreeTo,
      0LL);
    v6 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    fadeClip = this->fields._fadeClip;
    v8 = this->fields.material;
    if ( fadeClip )
    {
      if ( (WORD1(FadeClipController_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !FadeClipController_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
      }
      if ( v8 )
      {
        UnityEngine_Material__EnableKeyword(v8, FadeClipController_TypeInfo->static_fields->FADE_CLIP_ID, 0LL);
        return;
      }
LABEL_24:
      sub_B0D97C(v6);
    }
    if ( (WORD1(FadeClipController_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FadeClipController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
    }
    if ( !v8 )
      goto LABEL_24;
    UnityEngine_Material__DisableKeyword(v8, FadeClipController_TypeInfo->static_fields->FADE_CLIP_ID, 0LL);
  }
}