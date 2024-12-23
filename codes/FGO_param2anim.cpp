void __fastcall FGO_param2anim___ctor(FGO_param2anim_o *this, const MethodInfo *method)
{
  this->fields.two_value = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param2anim__Start(FGO_param2anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4B65A41 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1BE4ACC(&StringLiteral_16798/*"_twoValue0"*/, v3);
    sub_1BE4ACC(&StringLiteral_16799/*"_twoValue1"*/, v4);
    byte_4B65A41 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._renderer,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_12;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL);
  if ( !renderer )
    goto LABEL_12;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16798/*"_twoValue0"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16799/*"_twoValue1"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16798/*"_twoValue0"*/,
          this->fields.two_value.fields.x,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1BE4D28(renderer, v13);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16799/*"_twoValue1"*/,
    this->fields.two_value.fields.y,
    0LL);
}


void __fastcall FGO_param2anim__Update(FGO_param2anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4B65A42 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_16798/*"_twoValue0"*/, method);
    sub_1BE4ACC(&StringLiteral_16799/*"_twoValue1"*/, v3);
    byte_4B65A42 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16798/*"_twoValue0"*/,
          this->fields.two_value.fields.x,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_1BE4D28(renderer, method);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16799/*"_twoValue1"*/,
    this->fields.two_value.fields.y,
    0LL);
}