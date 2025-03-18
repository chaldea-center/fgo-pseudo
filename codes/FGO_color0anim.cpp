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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4C20DCB & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1C3B764(&StringLiteral_16854/*"bit_board_disappear4"*/, v3);
    byte_4C20DCB = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._renderer,
    (int64_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16854/*"bit_board_disappear4"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_1C3B9C0(renderer, v12);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16854/*"bit_board_disappear4"*/,
    this->fields.customColor,
    0LL);
}


void __fastcall FGO_color0anim__Update(FGO_color0anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4C20DCC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_16854/*"bit_board_disappear4"*/, method);
    byte_4C20DCC = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1C3B9C0(renderer, method);
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16854/*"bit_board_disappear4"*/,
    this->fields.customColor,
    0LL);
}