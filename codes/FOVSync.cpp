void __fastcall FOVSync___ctor(FOVSync_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FOVSync__LateUpdate(FOVSync_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *observeCamera; // x21
  UnityEngine_Camera_o *v10; // x20
  __int64 v11; // x1
  UnityEngine_Camera_o *v12; // x0
  float fieldOfView; // s0
  float v14; // s0

  if ( (byte_42E8C95 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Camera___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8C95 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Camera___);
  observeCamera = (UnityEngine_Object_o *)this->fields.observeCamera;
  v10 = (UnityEngine_Camera_o *)Component_WebViewObject;
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
    if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v10, 0LL) )
    {
      v12 = this->fields.observeCamera;
      if ( !v12 )
        goto LABEL_17;
      fieldOfView = UnityEngine_Camera__get_fieldOfView(v12, 0LL);
      if ( !v10 )
        goto LABEL_17;
      if ( fieldOfView != UnityEngine_Camera__get_fieldOfView(v10, 0LL) )
      {
        v12 = this->fields.observeCamera;
        if ( v12 )
        {
          v14 = UnityEngine_Camera__get_fieldOfView(v12, 0LL);
          UnityEngine_Camera__set_fieldOfView(v10, v14, 0LL);
          return;
        }
LABEL_17:
        sub_B5D69C(v12, v11);
      }
    }
  }
}


void __fastcall FOVSync__Start(FOVSync_o *this, const MethodInfo *method)
{
  ;
}