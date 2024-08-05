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

  if ( (byte_49FD411 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1B64870(&StringLiteral_16195/*"_MainTex"*/, v3);
    byte_49FD411 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._renderer, (int32_t)Component_object, v5, v6);
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1B64ACC(renderer, v7);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16195/*"_MainTex"*/,
    this->fields.m_Offset,
    0LL);
}


void __fastcall FGO_uv0anim__Update(FGO_uv0anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_49FD412 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_16195/*"_MainTex"*/, method);
    byte_49FD412 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1B64ACC(renderer, method);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16195/*"_MainTex"*/,
    this->fields.m_Offset,
    0LL);
}