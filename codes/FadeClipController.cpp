void __fastcall FadeClipController___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t v16; // w0
  FadeClipController_c *v17; // x8
  struct FadeClipController_StaticFields *static_fields; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E8CB8 & 1) == 0 )
  {
    sub_B5D5C4(&FadeClipController_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_16177/*"_FadeParam"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_16175/*"_FadeDegreeTo"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16162/*"_FADE_CLIP"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_16174/*"_FadeDegreeFrom"*/, v13, v14, v15);
    byte_42E8CB8 = 1;
  }
  FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID = UnityEngine_Shader__PropertyToID(
                                                                (System_String_o *)StringLiteral_16177/*"_FadeParam"*/,
                                                                0LL);
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID = UnityEngine_Shader__PropertyToID(
                                                                      (System_String_o *)StringLiteral_16174/*"_FadeDegreeFrom"*/,
                                                                      0LL);
  v16 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16175/*"_FadeDegreeTo"*/, 0LL);
  v17 = FadeClipController_TypeInfo;
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_TO_ID = v16;
  static_fields = v17->static_fields;
  v19 = (System_Int32_array **)StringLiteral_16162/*"_FADE_CLIP"*/;
  static_fields->FADE_CLIP_ID = (struct System_String_o *)StringLiteral_16162/*"_FADE_CLIP"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->FADE_CLIP_ID, v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall FadeClipController___ctor(FadeClipController_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields._FadeDegreeFrom = _D0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FadeClipController__Setup(FadeClipController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *meshRenderer; // x20
  UnityEngine_Object_o *material; // x21
  __int64 v7; // x1
  UnityEngine_Renderer_o *v8; // x0
  struct UnityEngine_Material_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E8CB5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CB5 = 1;
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
      v8 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
      if ( !v8 )
        sub_B5D69C(0LL, v7);
      v9 = UnityEngine_Renderer__get_material(v8, 0LL);
      this->fields.material = v9;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.material,
        (System_Int32_array **)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
  }
}


void __fastcall FadeClipController__Start(FadeClipController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *meshRenderer; // x21
  const MethodInfo *v9; // x1
  struct UnityEngine_MeshRenderer_o *Component_WebViewObject; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E8CB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8CB6 = 1;
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
                                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = Component_WebViewObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.meshRenderer,
      (System_Int32_array **)Component_WebViewObject,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  FadeClipController__Setup(this, v9);
}


void __fastcall FadeClipController__Update(FadeClipController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *material; // x20
  __int64 v9; // x1
  UnityEngine_Material_o *v10; // x20
  UnityEngine_Material_o *v11; // x0
  _BOOL4 fadeClip; // w9
  UnityEngine_Material_o *v13; // x19

  if ( (byte_42E8CB7 & 1) == 0 )
  {
    sub_B5D5C4(&FadeClipController_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8CB7 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v10 = this->fields.material;
    v11 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    if ( (BYTE3(FadeClipController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FadeClipController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
    }
    if ( !v10 )
      goto LABEL_24;
    UnityEngine_Material__SetFloat_41626152(
      v10,
      FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID,
      this->fields._FadeParam,
      0LL);
    v11 = this->fields.material;
    if ( !v11 )
      goto LABEL_24;
    UnityEngine_Material__SetFloat_41626152(
      v11,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID,
      this->fields._FadeDegreeFrom,
      0LL);
    v11 = this->fields.material;
    if ( !v11 )
      goto LABEL_24;
    UnityEngine_Material__SetFloat_41626152(
      v11,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_TO_ID,
      this->fields._FadeDegreeTo,
      0LL);
    v11 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    fadeClip = this->fields._fadeClip;
    v13 = this->fields.material;
    if ( fadeClip )
    {
      if ( (WORD1(FadeClipController_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !FadeClipController_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
      }
      if ( v13 )
      {
        UnityEngine_Material__EnableKeyword(v13, FadeClipController_TypeInfo->static_fields->FADE_CLIP_ID, 0LL);
        return;
      }
LABEL_24:
      sub_B5D69C(v11, v9);
    }
    if ( (WORD1(FadeClipController_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !FadeClipController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
    }
    if ( !v13 )
      goto LABEL_24;
    UnityEngine_Material__DisableKeyword(v13, FadeClipController_TypeInfo->static_fields->FADE_CLIP_ID, 0LL);
  }
}