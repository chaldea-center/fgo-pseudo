void __fastcall FGO_uv1anim___ctor(FGO_uv1anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.m_Offset.fields.y = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_uv1anim__Start(FGO_uv1anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_41885C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B2C35C(&StringLiteral_16072/*"_SubTex"*/, v3);
    byte_41885C3 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_B2C434(renderer, v11);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16072/*"_SubTex"*/,
    *(UnityEngine_Vector2_o *)&this->fields.m_Offset.fields.y,
    0LL);
}


void __fastcall FGO_uv1anim__Update(FGO_uv1anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_41885C4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16072/*"_SubTex"*/, method);
    byte_41885C4 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_B2C434(renderer, method);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16072/*"_SubTex"*/,
    *(UnityEngine_Vector2_o *)&this->fields.m_Offset.fields.y,
    0LL);
}