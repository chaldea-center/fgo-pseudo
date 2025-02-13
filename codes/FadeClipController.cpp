void __fastcall FadeClipController___cctor(const MethodInfo *method)
{
  int32_t v1; // w0
  struct FadeClipController_StaticFields *static_fields; // x8
  int64_t v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDD9A6 & 1) == 0 )
  {
    sub_1C21E38(&FadeClipController_TypeInfo);
    sub_1C21E38(&StringLiteral_16495/*"_FadeParam"*/);
    sub_1C21E38(&StringLiteral_16493/*"_FadeDegreeTo"*/);
    sub_1C21E38(&StringLiteral_16476/*"_FADE_CLIP"*/);
    sub_1C21E38(&StringLiteral_16492/*"_FadeDegreeFrom"*/);
    byte_4BDD9A6 = 1;
  }
  FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID = UnityEngine_Shader__PropertyToID(
                                                                (System_String_o *)StringLiteral_16495/*"_FadeParam"*/,
                                                                0LL);
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID = UnityEngine_Shader__PropertyToID(
                                                                      (System_String_o *)StringLiteral_16492/*"_FadeDegreeFrom"*/,
                                                                      0LL);
  v1 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16493/*"_FadeDegreeTo"*/, 0LL);
  static_fields = FadeClipController_TypeInfo->static_fields;
  static_fields->FADE_DEGREE_TO_ID = v1;
  v3 = StringLiteral_16476/*"_FADE_CLIP"*/;
  static_fields->FADE_CLIP_ID = (struct System_String_o *)StringLiteral_16476/*"_FADE_CLIP"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->FADE_CLIP_ID, v3, v4, v5, v6, v7, v8, v9);
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
  struct UnityEngine_Material_o *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDD9A3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD9A3 = 1;
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
        sub_1C22094(0LL, v5);
      v7 = UnityEngine_Renderer__get_material(v6, 0LL);
      this->fields.material = v7;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.material, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    }
  }
}


void __fastcall FadeClipController__Start(FadeClipController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x21
  const MethodInfo *v4; // x1
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDD9A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD9A4 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.meshRenderer,
      (int64_t)Component_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  FadeClipController__Setup(this, v4);
}


void __fastcall FadeClipController__Update(FadeClipController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x20
  __int64 v4; // x1
  UnityEngine_Material_o *v5; // x20
  UnityEngine_Material_o *v6; // x0
  _BOOL4 fadeClip; // w20
  UnityEngine_Material_o *v8; // x19
  System_String_o *v9; // x1

  if ( (byte_4BDD9A5 & 1) == 0 )
  {
    sub_1C21E38(&FadeClipController_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD9A5 = 1;
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
    UnityEngine_Material__SetFloat_70739304(
      v5,
      FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID,
      this->fields._FadeParam,
      0LL);
    v6 = this->fields.material;
    if ( !v6 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_70739304(
      v6,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID,
      this->fields._FadeDegreeFrom,
      0LL);
    v6 = this->fields.material;
    if ( !v6 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_70739304(
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
      sub_1C22094(v6, v4);
    v9 = *(System_String_o **)(*(_QWORD *)&v6[7].fields.m_CachedPtr + 16LL);
    if ( fadeClip )
      UnityEngine_Material__EnableKeyword(v8, v9, 0LL);
    else
      UnityEngine_Material__DisableKeyword(v8, v9, 0LL);
  }
}