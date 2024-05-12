void __fastcall FGO_param2anim___ctor(FGO_param2anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.two_value.fields.y = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param2anim__Start(FGO_param2anim_o *this, const MethodInfo *method)
{
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_438B8C1 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B775C4(&StringLiteral_16499/*"_twoValue0"*/);
    sub_B775C4(&StringLiteral_16500/*"_twoValue1"*/);
    byte_438B8C1 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  p_renderer = &this->fields._renderer;
  this->fields._renderer = Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_12;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL);
  if ( !renderer )
    goto LABEL_12;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16499/*"_twoValue0"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16500/*"_twoValue1"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16499/*"_twoValue0"*/,
          this->fields.two_value.fields.y,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
LABEL_12:
    sub_B7769C(renderer, v11);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16500/*"_twoValue1"*/,
    *((float *)&this->fields.two_value + 2),
    0LL);
}


void __fastcall FGO_param2anim__Update(FGO_param2anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_438B8C2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16499/*"_twoValue0"*/);
    sub_B775C4(&StringLiteral_16500/*"_twoValue1"*/);
    byte_438B8C2 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16499/*"_twoValue0"*/,
          this->fields.two_value.fields.y,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_B7769C(renderer, method);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16500/*"_twoValue1"*/,
    *((float *)&this->fields.two_value + 2),
    0LL);
}