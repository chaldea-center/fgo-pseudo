void __fastcall FGO_param2anim___ctor(FGO_param2anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.two_value.fields.y = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param2anim__Start(FGO_param2anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_41885B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B2C35C(&StringLiteral_16192/*"_twoValue0"*/, v3);
    sub_B2C35C(&StringLiteral_16193/*"_twoValue1"*/, v4);
    byte_41885B7 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  p_renderer = &this->fields._renderer;
  this->fields._renderer = Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
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
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16192/*"_twoValue0"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16193/*"_twoValue1"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16192/*"_twoValue0"*/,
          this->fields.two_value.fields.y,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
LABEL_12:
    sub_B2C434(renderer, v13);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16193/*"_twoValue1"*/,
    *((float *)&this->fields.two_value + 2),
    0LL);
}


void __fastcall FGO_param2anim__Update(FGO_param2anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_41885B8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16192/*"_twoValue0"*/, method);
    sub_B2C35C(&StringLiteral_16193/*"_twoValue1"*/, v3);
    byte_41885B8 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16192/*"_twoValue0"*/,
          this->fields.two_value.fields.y,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_B2C434(renderer, method);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16193/*"_twoValue1"*/,
    *((float *)&this->fields.two_value + 2),
    0LL);
}