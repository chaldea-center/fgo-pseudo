void __fastcall FOVSync___ctor(FOVSync_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FOVSync__LateUpdate(FOVSync_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *observeCamera; // x21
  UnityEngine_Camera_o *v6; // x20
  UnityEngine_Camera_o *v7; // x0
  float fieldOfView; // s0
  float v9; // s0

  if ( (byte_49FB8F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Camera___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FB8F0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Camera___);
  observeCamera = (UnityEngine_Object_o *)this->fields.observeCamera;
  v6 = (UnityEngine_Camera_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(observeCamera, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v6, 0LL) )
    {
      v7 = this->fields.observeCamera;
      if ( !v7 )
        goto LABEL_15;
      fieldOfView = UnityEngine_Camera__get_fieldOfView(v7, 0LL);
      if ( !v6 )
        goto LABEL_15;
      if ( fieldOfView != UnityEngine_Camera__get_fieldOfView(v6, 0LL) )
      {
        v7 = this->fields.observeCamera;
        if ( v7 )
        {
          v9 = UnityEngine_Camera__get_fieldOfView(v7, 0LL);
          UnityEngine_Camera__set_fieldOfView(v6, v9, 0LL);
          return;
        }
LABEL_15:
        sub_1B64324(v7);
      }
    }
  }
}


void __fastcall FOVSync__Start(FOVSync_o *this, const MethodInfo *method)
{
  ;
}