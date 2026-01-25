void FGO_uv1anim___ctor(FGO_uv1anim_o *this, const MethodInfo *method)
{
  this->fields.m_Offset = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_uv1anim__Start(FGO_uv1anim_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4CED441 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C7BAE8(&StringLiteral_16419/*"_SubTex"*/);
    byte_4CED441 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._renderer, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0)) == 0 )
    sub_1C7BD40(renderer, v10);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16419/*"_SubTex"*/,
    this->fields.m_Offset,
    0);
}


void FGO_uv1anim__Update(FGO_uv1anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4CED442 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16419/*"_SubTex"*/);
    byte_4CED442 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0)) == 0 )
    sub_1C7BD40(renderer, method);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16419/*"_SubTex"*/,
    this->fields.m_Offset,
    0);
}