void FGO_uv0anim___ctor(FGO_uv0anim_o *this, const MethodInfo *method)
{
  this->fields.m_Offset = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_uv0anim__Start(FGO_uv0anim_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4C2609A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C2D490(&StringLiteral_16260/*"_MainTex"*/);
    byte_4C2609A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._renderer, (int32_t)Component_object, v4, v5);
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0)) == 0 )
    sub_1C2D6EC(renderer, v6);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16260/*"_MainTex"*/,
    this->fields.m_Offset,
    0);
}


void FGO_uv0anim__Update(FGO_uv0anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4C2609B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16260/*"_MainTex"*/);
    byte_4C2609B = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0)) == 0 )
    sub_1C2D6EC(renderer, method);
  UnityEngine_Material__SetTextureOffset(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16260/*"_MainTex"*/,
    this->fields.m_Offset,
    0);
}