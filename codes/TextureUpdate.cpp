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
  UnityEngine_Behaviour_o *v4; // x19

  if ( (byte_4210C46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, method);
    byte_4210C46 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !Component_WebViewObject )
    sub_B0D97C(0LL);
  v4 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  ((void (__fastcall *)(WebViewObject_o *, void *))Component_WebViewObject->klass[2]._1.namespaze)(
    Component_WebViewObject,
    Component_WebViewObject->klass[2]._1.byval_arg.data);
  UnityEngine_Behaviour__set_enabled(v4, 0, 0LL);
  UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
}