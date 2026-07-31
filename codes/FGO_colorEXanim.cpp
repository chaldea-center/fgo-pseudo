void FGO_colorEXanim___ctor(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v14; // w1

  if ( (byte_59373E7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17256/*"_xxxColor"*/);
    byte_59373E7 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  v14 = StringLiteral_17256/*"_xxxColor"*/;
  this->fields.targetColorName = (struct System_String_o *)StringLiteral_17256/*"_xxxColor"*/;
  this->fields.customColor = _Q0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.targetColorName, v14, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_colorEXanim__Start(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_59373E6 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Renderer___);
    byte_59373E6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._renderer,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0)) == 0
    || (UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, this->fields.targetColorName, 0),
        (renderer = this->fields._renderer) == 0)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0)) == 0 )
  {
    sub_21FFECC(renderer, v10);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    this->fields.targetColorName,
    this->fields.customColor,
    0);
}


void FGO_colorEXanim__Update(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0)) == 0 )
    sub_21FFECC(renderer, method);
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    this->fields.targetColorName,
    this->fields.customColor,
    0);
}