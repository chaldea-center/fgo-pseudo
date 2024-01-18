void __fastcall FadeOutScript___ctor(FadeOutScript_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  __int128 v7; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8.fields.a = 0.01;
  v8.fields.r = 0.0;
  v8.fields.g = 0.0;
  v8.fields.b = 0.0;
  *(_QWORD *)&v7 = 0LL;
  UnityEngine_Color___ctor(v8, v2, v3, v4, v5, (const MethodInfo *)&v7);
  *(_OWORD *)&this->fields.alpha.fields.g = v7;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FadeOutScript__Start(FadeOutScript_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FadeOutScript__Update(FadeOutScript_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  __int64 v4; // x1
  UnityEngine_Material_o *v5; // x20
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41885E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_41885E9 = 1;
  }
  Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_WebViewObject )
    goto LABEL_9;
  Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Component_WebViewObject, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_9;
  color = UnityEngine_Material__get_color((UnityEngine_Material_o *)Component_WebViewObject, 0LL);
  if ( color.fields.a < 0.0 )
    return;
  Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_WebViewObject
    || (Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(
                                                              Component_WebViewObject,
                                                              0LL)) == 0LL )
  {
LABEL_9:
    sub_B2C434(Component_WebViewObject, v4);
  }
  v5 = (UnityEngine_Material_o *)Component_WebViewObject;
  v7 = UnityEngine_Material__get_color((UnityEngine_Material_o *)Component_WebViewObject, 0LL);
  v8 = UnityEngine_Color__op_Subtraction(v7, *(UnityEngine_Color_o *)&this->fields.alpha.fields.g, 0LL);
  UnityEngine_Material__set_color(v5, v8, 0LL);
}