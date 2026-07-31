void FGO_param2anim___ctor(FGO_param2anim_o *this, const MethodInfo *method)
{
  this->fields.two_value = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_param2anim__Start(FGO_param2anim_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_59373EA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_21FFC50(&StringLiteral_17236/*"_twoValue0"*/);
    sub_21FFC50(&StringLiteral_17237/*"_twoValue1"*/);
    byte_59373EA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._renderer,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_12;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0);
  if ( !renderer )
    goto LABEL_12;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_17236/*"_twoValue0"*/, 0);
  renderer = *p_renderer;
  if ( !*p_renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0)) == 0
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_17237/*"_twoValue1"*/,
          0),
        (renderer = *p_renderer) == 0)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0)) == 0
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_17236/*"_twoValue0"*/,
          this->fields.two_value.fields.x,
          0),
        (renderer = this->fields._renderer) == 0)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0)) == 0 )
  {
LABEL_12:
    sub_21FFECC(renderer, v11);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_17237/*"_twoValue1"*/,
    this->fields.two_value.fields.y,
    0);
}


void FGO_param2anim__Update(FGO_param2anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_59373EB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17236/*"_twoValue0"*/);
    sub_21FFC50(&StringLiteral_17237/*"_twoValue1"*/);
    byte_59373EB = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0)) == 0
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_17236/*"_twoValue0"*/,
          this->fields.two_value.fields.x,
          0),
        (renderer = this->fields._renderer) == 0)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0)) == 0 )
  {
    sub_21FFECC(renderer, method);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_17237/*"_twoValue1"*/,
    this->fields.two_value.fields.y,
    0);
}