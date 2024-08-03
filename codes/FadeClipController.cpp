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

  if ( (byte_49FD787 & 1) == 0 )
  {
    sub_1B640C8(&FadeClipController_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_16149/*"_FadeParam"*/, v2);
    sub_1B640C8(&StringLiteral_16147/*"_FadeDegreeTo"*/, v3);
    sub_1B640C8(&StringLiteral_16131/*"_FADE_CLIP"*/, v4);
    sub_1B640C8(&StringLiteral_16146/*"_FadeDegreeFrom"*/, v5);
    byte_49FD787 = 1;
  }
  FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID = UnityEngine_Shader__PropertyToID(
                                                                (System_String_o *)StringLiteral_16149/*"_FadeParam"*/,
                                                                0LL);
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID = UnityEngine_Shader__PropertyToID(
                                                                      (System_String_o *)StringLiteral_16146/*"_FadeDegreeFrom"*/,
                                                                      0LL);
  v6 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16147/*"_FadeDegreeTo"*/, 0LL);
  static_fields = FadeClipController_TypeInfo->static_fields;
  static_fields->FADE_DEGREE_TO_ID = v6;
  v8 = StringLiteral_16131/*"_FADE_CLIP"*/;
  static_fields->FADE_CLIP_ID = (struct System_String_o *)StringLiteral_16131/*"_FADE_CLIP"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->FADE_CLIP_ID, v8, v9, v10);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FD784 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FD784 = 1;
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
      v5 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
      if ( !v5 )
        sub_1B64324(0LL);
      v6 = UnityEngine_Renderer__get_material(v5, 0LL);
      this->fields.material = v6;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.material, (int32_t)v6, v7, v8);
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

  if ( (byte_49FD785 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FD785 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.meshRenderer, (int32_t)Component_object, v7, v8);
  }
  FadeClipController__Setup(this, v5);
}


void __fastcall FadeClipController__Update(FadeClipController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *material; // x20
  UnityEngine_Material_o *v5; // x20
  UnityEngine_Material_o *v6; // x0
  _BOOL4 fadeClip; // w20
  UnityEngine_Material_o *v8; // x19
  System_String_o *v9; // x1

  if ( (byte_49FD786 & 1) == 0 )
  {
    sub_1B640C8(&FadeClipController_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FD786 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v5 = this->fields.material;
    v6 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    if ( !FadeClipController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
    if ( !v5 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_68997516(
      v5,
      FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID,
      this->fields._FadeParam,
      0LL);
    v6 = this->fields.material;
    if ( !v6 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_68997516(
      v6,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID,
      this->fields._FadeDegreeFrom,
      0LL);
    v6 = this->fields.material;
    if ( !v6 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_68997516(
      v6,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_TO_ID,
      this->fields._FadeDegreeTo,
      0LL);
    v6 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    fadeClip = this->fields._fadeClip;
    v8 = this->fields.material;
    if ( !FadeClipController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo);
      v6 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    }
    if ( !v8 )
LABEL_17:
      sub_1B64324(v6);
    v9 = *(System_String_o **)(*(_QWORD *)&v6[7].fields.m_CachedPtr + 16LL);
    if ( fadeClip )
      UnityEngine_Material__EnableKeyword(v8, v9, 0LL);
    else
      UnityEngine_Material__DisableKeyword(v8, v9, 0LL);
  }
}