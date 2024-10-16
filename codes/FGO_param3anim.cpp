void __fastcall FGO_param3anim___ctor(FGO_param3anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.three_value.fields.x = 0LL;
  this->fields.three_value.fields.z = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param3anim__Start(FGO_param3anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4AB4C03 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1BAB41C(&StringLiteral_16615/*"_threeValue2"*/, v3);
    sub_1BAB41C(&StringLiteral_16610/*"_threeValue0"*/, v4);
    sub_1BAB41C(&StringLiteral_16611/*"_threeValue1"*/, v5);
    byte_4AB4C03 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._renderer, (int32_t)Component_object, v8, v9);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_16;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL);
  if ( !renderer )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16610/*"_threeValue0"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_16;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL);
  if ( !renderer )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16611/*"_threeValue1"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_16;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL);
  if ( !renderer )
    goto LABEL_16;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16615/*"_threeValue2"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16610/*"_threeValue0"*/,
          this->fields.three_value.fields.x,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16611/*"_threeValue1"*/,
          this->fields.three_value.fields.y,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BAB678(renderer, v10);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16615/*"_threeValue2"*/,
    this->fields.three_value.fields.z,
    0LL);
}


void __fastcall FGO_param3anim__Update(FGO_param3anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_4AB4C04 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_16615/*"_threeValue2"*/, method);
    sub_1BAB41C(&StringLiteral_16610/*"_threeValue0"*/, v3);
    sub_1BAB41C(&StringLiteral_16611/*"_threeValue1"*/, v4);
    byte_4AB4C04 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16610/*"_threeValue0"*/,
          this->fields.three_value.fields.x,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16611/*"_threeValue1"*/,
          this->fields.three_value.fields.y,
          0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_1BAB678(renderer, method);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16615/*"_threeValue2"*/,
    this->fields.three_value.fields.z,
    0LL);
}