void __fastcall FGO_colorEXanim___ctor(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v10; // w1

  if ( (byte_4A2CE1F & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16601/*"_xxxColor"*/, method);
    byte_4A2CE1F = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.customColor = _Q0;
  v10 = StringLiteral_16601/*"_xxxColor"*/;
  this->fields.targetColorName = (struct System_String_o *)StringLiteral_16601/*"_xxxColor"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.targetColorName, v10, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_colorEXanim__Start(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  __int64 v6; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4A2CE1E & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_4A2CE1E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields._renderer, (int32_t)Component_object, v4, v5);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, this->fields.targetColorName, 0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL )
  {
    sub_1B7641C(renderer, v6);
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
    sub_1B7641C(renderer, method);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    this->fields.targetColorName,
    this->fields.customColor,
    0LL);
}