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
  UnityEngine_Camera_o *v7; // x0
  float fieldOfView; // s0
  UnityEngine_Camera_o *v9; // x0
  float v10; // s0

  if ( (byte_40F9F72 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9F72 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Camera___);
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
      v7 = this->fields.observeCamera;
      if ( !v7 )
        goto LABEL_17;
      fieldOfView = UnityEngine_Camera__get_fieldOfView(v7, 0LL);
      if ( !v6 )
        goto LABEL_17;
      if ( fieldOfView != UnityEngine_Camera__get_fieldOfView(v6, 0LL) )
      {
        v9 = this->fields.observeCamera;
        if ( v9 )
        {
          v10 = UnityEngine_Camera__get_fieldOfView(v9, 0LL);
          UnityEngine_Camera__set_fieldOfView(v6, v10, 0LL);
          return;
        }
LABEL_17:
        sub_B170D4();
      }
    }
  }
}


void __fastcall FOVSync__Start(FOVSync_o *this, const MethodInfo *method)
{
  ;
}