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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_42E8C81 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16332/*"_customColor0"*/, v5, v6, v7);
    byte_42E8C81 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  p_renderer = &this->fields._renderer;
  this->fields._renderer = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)renderer,
          (System_String_o *)StringLiteral_16332/*"_customColor0"*/,
          0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
  {
    sub_B5D69C(renderer, v16);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16332/*"_customColor0"*/,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}


void __fastcall FGO_color0anim__Update(FGO_color0anim_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_42E8C82 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16332/*"_customColor0"*/, (_DWORD)method, v2, v3);
    byte_42E8C82 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(renderer, 0LL)) == 0LL )
    sub_B5D69C(renderer, method);
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    (System_String_o *)StringLiteral_16332/*"_customColor0"*/,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}