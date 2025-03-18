void __fastcall FGO_colorEXanim___ctor(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x1

  if ( (byte_4C20DCE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_16929/*"bit_result_limitbreak"*/, method);
    byte_4C20DCE = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.customColor = _Q0;
  v14 = StringLiteral_16929/*"bit_result_limitbreak"*/;
  this->fields.targetColorName = (struct System_String_o *)StringLiteral_16929/*"bit_result_limitbreak"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.targetColorName, v14, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_colorEXanim__Start(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  __int64 v10; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4C20DCD & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_4C20DCD = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields._renderer, (int64_t)Component_object, v4, v5, v6, v7, v8, v9);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, this->fields.targetColorName, 0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL )
  {
    sub_1C3B9C0(renderer, v10);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    this->fields.targetColorName,
    this->fields.customColor,
    0LL);
}


void __fastcall FGO_colorEXanim__Update(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL )
  {
    sub_1C3B9C0(renderer, method);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    this->fields.targetColorName,
    this->fields.customColor,
    0LL);
}