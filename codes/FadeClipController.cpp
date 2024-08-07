void __fastcall FadeClipController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w0
  struct FadeClipController_StaticFields *static_fields; // x8
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FFEA2 & 1) == 0 )
  {
    sub_1B64A00(&FadeClipController_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_16152/*"_FadeParam"*/, v2);
    sub_1B64A00(&StringLiteral_16150/*"_FadeDegreeTo"*/, v3);
    sub_1B64A00(&StringLiteral_16134/*"_FADE_CLIP"*/, v4);
    sub_1B64A00(&StringLiteral_16149/*"_FadeDegreeFrom"*/, v5);
    byte_49FFEA2 = 1;
  }
  FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID = UnityEngine_Shader__PropertyToID(
                                                                (System_String_o *)StringLiteral_16152/*"_FadeParam"*/,
                                                                0LL);
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID = UnityEngine_Shader__PropertyToID(
                                                                      (System_String_o *)StringLiteral_16149/*"_FadeDegreeFrom"*/,
                                                                      0LL);
  v6 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16150/*"_FadeDegreeTo"*/, 0LL);
  static_fields = FadeClipController_TypeInfo->static_fields;
  static_fields->FADE_DEGREE_TO_ID = v6;
  v8 = StringLiteral_16134/*"_FADE_CLIP"*/;
  static_fields->FADE_CLIP_ID = (struct System_String_o *)StringLiteral_16134/*"_FADE_CLIP"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->FADE_CLIP_ID, v8, v9, v10);
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
  __int64 v5; // x1
  UnityEngine_Renderer_o *v6; // x0
  struct UnityEngine_Material_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FFE9F & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FFE9F = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(meshRenderer, 0LL, 0LL) )
  {
    material = (UnityEngine_Object_o *)this->fields.material;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
    {
      v6 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
      if ( !v6 )
        sub_1B64C5C(0LL, v5);
      v7 = UnityEngine_Renderer__get_material(v6, 0LL);
      this->fields.material = v7;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.material, (int32_t)v7, v8, v9);
    }
  }
}


void __fastcall FadeClipController__Start(FadeClipController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *meshRenderer; // x21
  const MethodInfo *v5; // x1
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FFEA0 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49FFEA0 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.meshRenderer, (int32_t)Component_object, v7, v8);
  }
  FadeClipController__Setup(this, v5);
}


void __fastcall FadeClipController__Update(FadeClipController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *material; // x20
  __int64 v5; // x1
  UnityEngine_Material_o *v6; // x20
  UnityEngine_Material_o *v7; // x0
  _BOOL4 fadeClip; // w20
  UnityEngine_Material_o *v9; // x19
  System_String_o *v10; // x1

  if ( (byte_49FFEA1 & 1) == 0 )
  {
    sub_1B64A00(&FadeClipController_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49FFEA1 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v6 = this->fields.material;
    v7 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    if ( !FadeClipController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
    if ( !v6 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_69007256(
      v6,
      FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID,
      this->fields._FadeParam,
      0LL);
    v7 = this->fields.material;
    if ( !v7 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_69007256(
      v7,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID,
      this->fields._FadeDegreeFrom,
      0LL);
    v7 = this->fields.material;
    if ( !v7 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_69007256(
      v7,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_TO_ID,
      this->fields._FadeDegreeTo,
      0LL);
    v7 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    fadeClip = this->fields._fadeClip;
    v9 = this->fields.material;
    if ( !FadeClipController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
      v7 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    }
    if ( !v9 )
LABEL_17:
      sub_1B64C5C(v7, v5);
    v10 = *(System_String_o **)(*(_QWORD *)&v7[7].fields.m_CachedPtr + 16LL);
    if ( fadeClip )
      UnityEngine_Material__EnableKeyword(v9, v10, 0LL);
    else
      UnityEngine_Material__DisableKeyword(v9, v10, 0LL);
  }
}