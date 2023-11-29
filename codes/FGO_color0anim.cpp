void __fastcall FGO_color0anim___ctor(FGO_color0anim_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  __int128 v7; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8.fields.r = 1.0;
  v8.fields.g = 1.0;
  v8.fields.b = 1.0;
  v8.fields.a = 1.0;
  *(_QWORD *)&v7 = 0LL;
  UnityEngine_Color___ctor(v8, v2, v3, v4, v5, (const MethodInfo *)&v7);
  *(_OWORD *)&this->fields.customColor.fields.g = v7;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_color0anim__Start(FGO_color0anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  UnityEngine_Renderer_o **p_renderer; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v14; // x0

  if ( (byte_40F9F5E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B16FFC(&StringLiteral_16076, v3);
    byte_40F9F5E = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  p_renderer = &this->fields._renderer;
  this->fields._renderer = Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  renderer = this->fields._renderer;
  if ( !renderer
    || (material = UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16076, 0LL), !*p_renderer)
    || (v14 = UnityEngine_Renderer__get_material(*p_renderer, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Material__SetColor(
    v14,
    (System_String_o *)StringLiteral_16076,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}


void __fastcall FGO_color0anim__Update(FGO_color0anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *material; // x0

  if ( (byte_40F9F5F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16076, method);
    byte_40F9F5F = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (material = UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_Material__SetColor(
    material,
    (System_String_o *)StringLiteral_16076,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}