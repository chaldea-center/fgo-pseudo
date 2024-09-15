void __fastcall FGO_color0anim___ctor(FGO_color0anim_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.customColor = _Q0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_color0anim__Start(FGO_color0anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4A2CE1C & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1B761C0(&StringLiteral_16529/*"_customColor0"*/, v3);
    byte_4A2CE1C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields._renderer, (int32_t)Component_object, v6, v7);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16529/*"_customColor0"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_1B7641C(renderer, v8);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16529/*"_customColor0"*/,
    this->fields.customColor,
    0LL);
}


void __fastcall FGO_color0anim__Update(FGO_color0anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4A2CE1D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16529/*"_customColor0"*/, method);
    byte_4A2CE1D = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1B7641C(renderer, method);
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16529/*"_customColor0"*/,
    this->fields.customColor,
    0LL);
}