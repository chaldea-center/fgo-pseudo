void __fastcall FGO_param1anim___ctor(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_param1anim__Start(FGO_param1anim_o *this, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Renderer_o **v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_43521FC & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B70694(&StringLiteral_16400/*"_oneValue"*/);
    byte_43521FC = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v4 = (UnityEngine_Renderer_o **)&this[1];
  this[1].klass = (FGO_param1anim_c *)Component_WebViewObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL
    || (UnityEngine_Material__EnableKeyword(
          (UnityEngine_Material_o *)klass,
          (System_String_o *)StringLiteral_16400/*"_oneValue"*/,
          0LL),
        (klass = *v4) == 0LL)
    || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
  {
    sub_B7076C(klass, v11);
  }
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16400/*"_oneValue"*/,
    *(float *)&this->fields._renderer,
    0LL);
}


void __fastcall FGO_param1anim__Update(FGO_param1anim_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *klass; // x0

  if ( (byte_43521FD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16400/*"_oneValue"*/);
    byte_43521FD = 1;
  }
  klass = (UnityEngine_Renderer_o *)this[1].klass;
  if ( !klass || (klass = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(klass, 0LL)) == 0LL )
    sub_B7076C(klass, method);
  UnityEngine_Material__SetFloat(
    (UnityEngine_Material_o *)klass,
    (System_String_o *)StringLiteral_16400/*"_oneValue"*/,
    *(float *)&this->fields._renderer,
    0LL);
}