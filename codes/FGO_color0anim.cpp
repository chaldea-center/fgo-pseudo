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
  struct UnityEngine_Renderer_o **p_renderer; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_41885B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B2C35C(&StringLiteral_16139/*"_customColor0"*/, v3);
    byte_41885B1 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  p_renderer = &this->fields._renderer;
  this->fields._renderer = Component_WebViewObject;
  sub_B2C2F8(
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
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16139/*"_customColor0"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_B2C434(renderer, v12);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16139/*"_customColor0"*/,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}


void __fastcall FGO_color0anim__Update(FGO_color0anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_41885B2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16139/*"_customColor0"*/, method);
    byte_41885B2 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_B2C434(renderer, method);
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16139/*"_customColor0"*/,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}