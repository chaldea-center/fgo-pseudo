void __fastcall FGO_colorEXanim___ctor(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v10; // w1

  if ( (byte_4B43882 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16600/*"_xxxColor"*/, method);
    byte_4B43882 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.customColor = _Q0;
  v10 = StringLiteral_16600/*"_xxxColor"*/;
  this->fields.targetColorName = (struct System_String_o *)StringLiteral_16600/*"_xxxColor"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetColorName, v10, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_colorEXanim__Start(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4B43881 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_4B43881 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._renderer, (int32_t)Component_object, v4, v5);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, this->fields.targetColorName, 0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL )
  {
    sub_1BDBAD4(renderer, v6);
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
    sub_1BDBAD4(renderer, method);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    this->fields.targetColorName,
    this->fields.customColor,
    0LL);
}