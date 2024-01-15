void __fastcall FGO_param2anim___ctor(FGO_param2anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.two_value.fields.y = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param2anim__Start(FGO_param2anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  UnityEngine_Renderer_o **p_renderer; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v15; // x0
  UnityEngine_Material_o *v16; // x0
  UnityEngine_Renderer_o *v17; // x0
  UnityEngine_Material_o *v18; // x0

  if ( (byte_40F9F64 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B16FFC(&StringLiteral_16127/*"_twoValue0"*/, v3);
    sub_B16FFC(&StringLiteral_16128/*"_twoValue1"*/, v4);
    byte_40F9F64 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  p_renderer = &this->fields._renderer;
  this->fields._renderer = Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_12;
  material = UnityEngine_Renderer__get_material(renderer, 0LL);
  if ( !material
    || (UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16127/*"_twoValue0"*/, 0LL), !*p_renderer)
    || (v15 = UnityEngine_Renderer__get_material(*p_renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(v15, (System_String_o *)StringLiteral_16128/*"_twoValue1"*/, 0LL), !*p_renderer)
    || (v16 = UnityEngine_Renderer__get_material(*p_renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          v16,
          (System_String_o *)StringLiteral_16127/*"_twoValue0"*/,
          this->fields.two_value.fields.y,
          0LL),
        (v17 = this->fields._renderer) == 0LL)
    || (v18 = UnityEngine_Renderer__get_material(v17, 0LL)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_Material__SetFloat(
    v18,
    (System_String_o *)StringLiteral_16128/*"_twoValue1"*/,
    *((float *)&this->fields.two_value + 2),
    0LL);
}


void __fastcall FGO_param2anim__Update(FGO_param2anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *material; // x0
  UnityEngine_Renderer_o *v6; // x0
  UnityEngine_Material_o *v7; // x0

  if ( (byte_40F9F65 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16127/*"_twoValue0"*/, method);
    sub_B16FFC(&StringLiteral_16128/*"_twoValue1"*/, v3);
    byte_40F9F65 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer
    || (material = UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__SetFloat(
          material,
          (System_String_o *)StringLiteral_16127/*"_twoValue0"*/,
          this->fields.two_value.fields.y,
          0LL),
        (v6 = this->fields._renderer) == 0LL)
    || (v7 = UnityEngine_Renderer__get_material(v6, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Material__SetFloat(
    v7,
    (System_String_o *)StringLiteral_16128/*"_twoValue1"*/,
    *((float *)&this->fields.two_value + 2),
    0LL);
}