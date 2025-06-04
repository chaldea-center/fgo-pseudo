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
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4B00E0D & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1BC3008(&StringLiteral_16421/*"_oneValue"*/, v3);
    byte_4B00E0D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._renderer, (int32_t)Component_object, v6, v7);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16421/*"_oneValue"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_1BC3264(renderer, v8);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16421/*"_oneValue"*/,
    this->fields.one_value,
    0LL);
}


void __fastcall FGO_param1anim__Update(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4B00E0E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16421/*"_oneValue"*/, method);
    byte_4B00E0E = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_1BC3264(renderer, method);
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16421/*"_oneValue"*/,
    this->fields.one_value,
    0LL);
}