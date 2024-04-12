void __fastcall FGO_uv1anim___ctor(FGO_uv1anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.m_Offset.fields.y = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_uv1anim__Start(FGO_uv1anim_o *this, const MethodInfo *method)
{
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_42B0370 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B52984(&StringLiteral_16179/*"_SubTex"*/);
    byte_42B0370 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = Component_WebViewObject;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_B52A5C(renderer, v10);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16179/*"_SubTex"*/,
    *(UnityEngine_Vector2_o *)&this->fields.m_Offset.fields.y,
    0LL);
}


void __fastcall FGO_uv1anim__Update(FGO_uv1anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_42B0371 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16179/*"_SubTex"*/);
    byte_42B0371 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_B52A5C(renderer, method);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16179/*"_SubTex"*/,
    *(UnityEngine_Vector2_o *)&this->fields.m_Offset.fields.y,
    0LL);
}