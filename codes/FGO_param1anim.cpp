void __fastcall FGO_param1anim___ctor(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param1anim__Start(FGO_param1anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Renderer_o **v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_421542E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B0D8A4(&StringLiteral_16211/*"_oneValue"*/, v3);
    byte_421542E = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v5 = (UnityEngine_Renderer_o **)&this[1];
  this[1].klass = (FGO_param1anim_c *)Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16211/*"_oneValue"*/,
          0LL),
        (klass = *v5) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
  {
    sub_B0D97C(klass);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16211/*"_oneValue"*/,
    *(float *)&this->fields._renderer,
    0LL);
}


void __fastcall FGO_param1anim__Update(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_421542F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16211/*"_oneValue"*/, method);
    byte_421542F = 1;
  }
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
    sub_B0D97C(klass);
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16211/*"_oneValue"*/,
    *(float *)&this->fields._renderer,
    0LL);
}