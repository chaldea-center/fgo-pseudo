void __fastcall FGO_uv0anim___ctor(FGO_uv0anim_o *this, const MethodInfo *method)
{
  this->fields.m_Offset = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_uv0anim__Start(FGO_uv0anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_49FDA31 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1B64A00(&StringLiteral_16196/*"_MainTex"*/, v3);
    byte_49FDA31 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._renderer, (int32_t)Component_object, v5, v6);
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1B64C5C(renderer, v7);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16196/*"_MainTex"*/,
    this->fields.m_Offset,
    0LL);
}


void __fastcall FGO_uv0anim__Update(FGO_uv0anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_49FDA32 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16196/*"_MainTex"*/, method);
    byte_49FDA32 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1B64C5C(renderer, method);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16196/*"_MainTex"*/,
    this->fields.m_Offset,
    0LL);
}