void __fastcall FGO_param1anim___ctor(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param1anim__Start(FGO_param1anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_49FDA22 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1B64A00(&StringLiteral_16495/*"_oneValue"*/, v3);
    byte_49FDA22 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._renderer, (int32_t)Component_object, v6, v7);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16495/*"_oneValue"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_1B64C5C(renderer, v8);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16495/*"_oneValue"*/,
    this->fields.one_value,
    0LL);
}


void __fastcall FGO_param1anim__Update(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_49FDA23 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16495/*"_oneValue"*/, method);
    byte_49FDA23 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1B64C5C(renderer, method);
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16495/*"_oneValue"*/,
    this->fields.one_value,
    0LL);
}