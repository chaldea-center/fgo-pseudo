void __fastcall FGO_param1anim___ctor(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param1anim__Start(FGO_param1anim_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4A5A03A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&StringLiteral_16561/*"_oneValue"*/);
    byte_4A5A03A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._renderer, (int32_t)Component_object, v5, v6);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16561/*"_oneValue"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_1B8880C(renderer, v7);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16561/*"_oneValue"*/,
    this->fields.one_value,
    0LL);
}


void __fastcall FGO_param1anim__Update(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4A5A03B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16561/*"_oneValue"*/);
    byte_4A5A03B = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1B8880C(renderer, method);
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16561/*"_oneValue"*/,
    this->fields.one_value,
    0LL);
}