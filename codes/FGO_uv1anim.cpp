void __fastcall FGO_uv1anim___ctor(FGO_uv1anim_o *this, const MethodInfo *method)
{
  this->fields.m_Offset = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_uv1anim__Start(FGO_uv1anim_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  __int64 v6; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4A5A04B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&StringLiteral_16353/*"_SubTex"*/);
    byte_4A5A04B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._renderer, (int32_t)Component_object, v4, v5);
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1B8880C(renderer, v6);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16353/*"_SubTex"*/,
    this->fields.m_Offset,
    0LL);
}


void __fastcall FGO_uv1anim__Update(FGO_uv1anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4A5A04C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16353/*"_SubTex"*/);
    byte_4A5A04C = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1B8880C(renderer, method);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16353/*"_SubTex"*/,
    this->fields.m_Offset,
    0LL);
}