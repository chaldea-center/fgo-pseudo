void __fastcall FGO_param1anim___ctor(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param1anim__Start(FGO_param1anim_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Renderer_o **v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_42E8C85 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16356/*"_oneValue"*/, v5, v6, v7);
    byte_42E8C85 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v9 = (UnityEngine_Renderer_o **)&this[1];
  this[1].klass = (FGO_param1anim_c *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)Component_WebViewObject,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16356/*"_oneValue"*/,
          0LL),
        (klass = *v9) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
  {
    sub_B5D69C(klass, v16);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16356/*"_oneValue"*/,
    *(float *)&this->fields._renderer,
    0LL);
}


void __fastcall FGO_param1anim__Update(FGO_param1anim_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_42E8C86 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16356/*"_oneValue"*/, (_DWORD)method, v2, v3);
    byte_42E8C86 = 1;
  }
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
    sub_B5D69C(klass, method);
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16356/*"_oneValue"*/,
    *(float *)&this->fields._renderer,
    0LL);
}