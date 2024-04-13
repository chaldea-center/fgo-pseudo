void __fastcall FGO_colorEXanim___ctor(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int128 v16; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E8C84 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16405/*"_xxxColor"*/, (_DWORD)method, v2, v3);
    byte_42E8C84 = 1;
  }
  v17.fields.r = 1.0;
  v17.fields.g = 1.0;
  v17.fields.b = 1.0;
  v17.fields.a = 1.0;
  v16 = 0uLL;
  UnityEngine_Color___ctor(v17, v4, v5, v6, v7, (const MethodInfo *)&v16);
  *(_OWORD *)&this->fields.customColor.fields.g = v16;
  v9 = (System_Int32_array **)StringLiteral_16405/*"_xxxColor"*/;
  this->fields.targetColorName = (struct System_String_o *)StringLiteral_16405/*"_xxxColor"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.targetColorName, v9, v10, v11, v12, v13, v14, v15);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_colorEXanim__Start(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  UnityEngine_Renderer_o *renderer; // x0

  if ( (byte_42E8C83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    byte_42E8C83 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = Component_WebViewObject;
  sub_B5D560(
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
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, this->fields.targetColorName, 0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL )
  {
    sub_B5D69C(renderer, v12);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    this->fields.targetColorName,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}


void __fastcall FGO_colorEXanim__Update(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0

  renderer = this->fields._renderer;
  if ( !renderer
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL )
  {
    sub_B5D69C(renderer, method);
  }
  UnityEngine_Material__SetColor(
    (UnityEngine_Material_o *)renderer,
    this->fields.targetColorName,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}