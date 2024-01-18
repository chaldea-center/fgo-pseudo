void __fastcall FOVSync___ctor(FOVSync_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FOVSync__LateUpdate(FOVSync_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *observeCamera; // x21
  UnityEngine_Camera_o *v6; // x20
  __int64 v7; // x1
  UnityEngine_Camera_o *v8; // x0
  float fieldOfView; // s0
  float v10; // s0

  if ( (byte_41885C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41885C5 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  observeCamera = (UnityEngine_Object_o *)this->fields.observeCamera;
  v6 = (UnityEngine_Camera_o *)Component_WebViewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(observeCamera, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v6, 0LL) )
    {
      v8 = this->fields.observeCamera;
      if ( !v8 )
        goto LABEL_17;
      fieldOfView = UnityEngine_Camera__get_fieldOfView(v8, 0LL);
      if ( !v6 )
        goto LABEL_17;
      if ( fieldOfView != UnityEngine_Camera__get_fieldOfView(v6, 0LL) )
      {
        v8 = this->fields.observeCamera;
        if ( v8 )
        {
          v10 = UnityEngine_Camera__get_fieldOfView(v8, 0LL);
          UnityEngine_Camera__set_fieldOfView(v6, v10, 0LL);
          return;
        }
LABEL_17:
        sub_B2C434(v8, v7);
      }
    }
  }
}


void __fastcall FOVSync__Start(FOVSync_o *this, const MethodInfo *method)
{
  ;
}