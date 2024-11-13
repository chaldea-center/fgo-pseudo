void __fastcall FadeClipController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t v11; // w0
  struct FadeClipController_StaticFields *static_fields; // x8
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B175DA & 1) == 0 )
  {
    sub_1BCA7E0(&FadeClipController_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_16386/*"_FadeParam"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_16384/*"_FadeDegreeTo"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_16367/*"_FADE_CLIP"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16383/*"_FadeDegreeFrom"*/, v9, v10);
    byte_4B175DA = 1;
  }
  FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID = UnityEngine_Shader__PropertyToID(
                                                                (System_String_o *)StringLiteral_16386/*"_FadeParam"*/,
                                                                0LL);
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID = UnityEngine_Shader__PropertyToID(
                                                                      (System_String_o *)StringLiteral_16383/*"_FadeDegreeFrom"*/,
                                                                      0LL);
  v11 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16384/*"_FadeDegreeTo"*/, 0LL);
  static_fields = FadeClipController_TypeInfo->static_fields;
  static_fields->FADE_DEGREE_TO_ID = v11;
  v13 = StringLiteral_16367/*"_FADE_CLIP"*/;
  static_fields->FADE_CLIP_ID = (struct System_String_o *)StringLiteral_16367/*"_FADE_CLIP"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->FADE_CLIP_ID, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall FadeClipController___ctor(FadeClipController_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields._FadeDegreeFrom = _D0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FadeClipController__Setup(FadeClipController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *meshRenderer; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *material; // x21
  __int64 v7; // x1
  UnityEngine_Renderer_o *v8; // x0
  struct UnityEngine_Material_o *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B175D7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B175D7 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(meshRenderer, 0LL, 0LL) )
  {
    material = (UnityEngine_Object_o *)this->fields.material;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
    {
      v8 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
      if ( !v8 )
        sub_1BCAA3C(0LL, v7);
      v9 = UnityEngine_Renderer__get_material(v8, 0LL);
      this->fields.material = v9;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.material, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    }
  }
}


void __fastcall FadeClipController__Start(FadeClipController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *meshRenderer; // x21
  const MethodInfo *v7; // x1
  Il2CppObject *Component_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B175D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B175D8 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.meshRenderer,
      (int64_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  FadeClipController__Setup(this, v7);
}


void __fastcall FadeClipController__Update(FadeClipController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *material; // x20
  __int64 v7; // x1
  UnityEngine_Material_o *v8; // x20
  UnityEngine_Material_o *v9; // x0
  _BOOL4 fadeClip; // w20
  UnityEngine_Material_o *v11; // x19
  System_String_o *v12; // x1

  if ( (byte_4B175D9 & 1) == 0 )
  {
    sub_1BCA7E0(&FadeClipController_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B175D9 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
  {
    v8 = this->fields.material;
    v9 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    if ( !FadeClipController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo, v7);
    if ( !v8 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_70023936(
      v8,
      FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID,
      this->fields._FadeParam,
      0LL);
    v9 = this->fields.material;
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_70023936(
      v9,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID,
      this->fields._FadeDegreeFrom,
      0LL);
    v9 = this->fields.material;
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Material__SetFloat_70023936(
      v9,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_TO_ID,
      this->fields._FadeDegreeTo,
      0LL);
    v9 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    fadeClip = this->fields._fadeClip;
    v11 = this->fields.material;
    if ( !FadeClipController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo, v7);
      v9 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    }
    if ( !v11 )
LABEL_17:
      sub_1BCAA3C(v9, v7);
    v12 = *(System_String_o **)(*(_QWORD *)&v9[7].fields.m_CachedPtr + 16LL);
    if ( fadeClip )
      UnityEngine_Material__EnableKeyword(v11, v12, 0LL);
    else
      UnityEngine_Material__DisableKeyword(v11, v12, 0LL);
  }
}