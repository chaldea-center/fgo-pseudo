void __fastcall FGO_colorEXanim___ctor(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  System_Int32_array **v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int128 v14; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9F61 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16146/*"_xxxColor"*/, method);
    byte_40F9F61 = 1;
  }
  v15.fields.r = 1.0;
  v15.fields.g = 1.0;
  v15.fields.b = 1.0;
  v15.fields.a = 1.0;
  v14 = 0uLL;
  UnityEngine_Color___ctor(v15, v2, v3, v4, v5, (const MethodInfo *)&v14);
  *(_OWORD *)&this->fields.customColor.fields.g = v14;
  v7 = (System_Int32_array **)StringLiteral_16146/*"_xxxColor"*/;
  this->fields.targetColorName = (struct System_String_o *)StringLiteral_16146/*"_xxxColor"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetColorName, v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_colorEXanim__Start(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Renderer_o *v12; // x0
  UnityEngine_Material_o *v13; // x0

  if ( (byte_40F9F60 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_40F9F60 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  renderer = this->fields._renderer;
  if ( !renderer
    || (sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(sharedMaterial, this->fields.targetColorName, 0LL),
        (v12 = this->fields._renderer) == 0LL)
    || (v13 = UnityEngine_Renderer__get_sharedMaterial(v12, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Material__SetColor(
    v13,
    this->fields.targetColorName,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}


void __fastcall FGO_colorEXanim__Update(FGO_colorEXanim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *sharedMaterial; // x0

  renderer = this->fields._renderer;
  if ( !renderer || (sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_Material__SetColor(
    sharedMaterial,
    this->fields.targetColorName,
    *(UnityEngine_Color_o *)&this->fields.customColor.fields.g,
    0LL);
}