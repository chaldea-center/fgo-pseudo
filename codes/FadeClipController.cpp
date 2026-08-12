void FadeClipController___cctor(const MethodInfo *method)
{
  int32_t v1; // w0
  System_String_o *v2; // x8
  int32_t v3; // w0
  System_String_o *v4; // x8
  int32_t v5; // w0
  int32_t v6; // w1
  struct FadeClipController_StaticFields *static_fields; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5971F87 & 1) == 0 )
  {
    sub_2213A60(&FadeClipController_TypeInfo);
    sub_2213A60(&StringLiteral_16866/*"_FadeParam"*/);
    sub_2213A60(&StringLiteral_16864/*"_FadeDegreeTo"*/);
    sub_2213A60(&StringLiteral_16843/*"_FADE_CLIP"*/);
    sub_2213A60(&StringLiteral_16863/*"_FadeDegreeFrom"*/);
    byte_5971F87 = 1;
  }
  v1 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16866/*"_FadeParam"*/, 0);
  v2 = (System_String_o *)StringLiteral_16863/*"_FadeDegreeFrom"*/;
  FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID = v1;
  v3 = UnityEngine_Shader__PropertyToID(v2, 0);
  v4 = (System_String_o *)StringLiteral_16864/*"_FadeDegreeTo"*/;
  FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID = v3;
  v5 = UnityEngine_Shader__PropertyToID(v4, 0);
  v6 = StringLiteral_16843/*"_FADE_CLIP"*/;
  static_fields = FadeClipController_TypeInfo->static_fields;
  static_fields->FADE_CLIP_ID = (struct System_String_o *)StringLiteral_16843/*"_FADE_CLIP"*/;
  static_fields->FADE_DEGREE_TO_ID = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->FADE_CLIP_ID, v6, v8, v9, v10, v11, v12, v13);
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
  __int64 v4; // x1
  UnityEngine_Object_o *material; // x21
  __int64 v6; // x1
  UnityEngine_Renderer_o *v7; // x0
  struct UnityEngine_Material_o *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5971F84 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F84 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(meshRenderer, 0, 0) )
  {
    material = (UnityEngine_Object_o *)this->fields.material;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Equality(material, 0, 0) )
    {
      v7 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
      if ( !v7 )
        sub_2213CDC(0, v6);
      v8 = UnityEngine_Renderer__get_material(v7, 0);
      this->fields.material = v8;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.material, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    }
  }
}


void FadeClipController__Start(FadeClipController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x21
  const MethodInfo *v4; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5971F85 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F85 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.meshRenderer,
      (int32_t)Component_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  FadeClipController__Setup(this, v4);
}


void FadeClipController__Update(FadeClipController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x20
  __int64 v4; // x1
  UnityEngine_Material_o *v5; // x20
  UnityEngine_Material_o *v6; // x0
  _BOOL4 fadeClip; // w9
  UnityEngine_Material_o *v8; // x19
  int v9; // w8

  if ( (byte_5971F86 & 1) == 0 )
  {
    sub_2213A60(&FadeClipController_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F86 = 1;
  }
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(material, 0, 0) )
  {
    v5 = this->fields.material;
    v6 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    if ( !*(&FadeClipController_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo, v4);
    if ( !v5 )
      goto LABEL_20;
    UnityEngine_Material__SetFloat_83285384(
      v5,
      FadeClipController_TypeInfo->static_fields->FADE_PARAM_ID,
      this->fields._FadeParam,
      0);
    v6 = this->fields.material;
    if ( !v6 )
      goto LABEL_20;
    UnityEngine_Material__SetFloat_83285384(
      v6,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_FROM_ID,
      this->fields._FadeDegreeFrom,
      0);
    v6 = this->fields.material;
    if ( !v6 )
      goto LABEL_20;
    UnityEngine_Material__SetFloat_83285384(
      v6,
      FadeClipController_TypeInfo->static_fields->FADE_DEGREE_TO_ID,
      this->fields._FadeDegreeTo,
      0);
    v6 = (UnityEngine_Material_o *)FadeClipController_TypeInfo;
    fadeClip = this->fields._fadeClip;
    v8 = this->fields.material;
    v9 = *(&FadeClipController_TypeInfo->_2.cctor_finished + 1);
    if ( fadeClip )
    {
      if ( !v9 )
        j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo, v4);
      if ( v8 )
      {
        UnityEngine_Material__EnableKeyword(v8, FadeClipController_TypeInfo->static_fields->FADE_CLIP_ID, 0);
        return;
      }
LABEL_20:
      sub_2213CDC(v6, v4);
    }
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(FadeClipController_TypeInfo, v4);
    if ( !v8 )
      goto LABEL_20;
    UnityEngine_Material__DisableKeyword(v8, FadeClipController_TypeInfo->static_fields->FADE_CLIP_ID, 0);
  }
}