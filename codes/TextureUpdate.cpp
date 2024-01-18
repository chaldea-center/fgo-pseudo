void __fastcall TextureUpdate___ctor(TextureUpdate_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TextureUpdate__Start(TextureUpdate_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall TextureUpdate__Update(TextureUpdate_o *this, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x19

  if ( (byte_4184CDE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    byte_4184CDE = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !Component_WebViewObject )
    sub_B2C434(0LL, v4);
  v5 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  ((void (__fastcall *)(WebViewObject_o *, void *))Component_WebViewObject->klass[2]._1.namespaze)(
    Component_WebViewObject,
    Component_WebViewObject->klass[2]._1.byval_arg.data);
  UnityEngine_Behaviour__set_enabled(v5, 0, 0LL);
  UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
}