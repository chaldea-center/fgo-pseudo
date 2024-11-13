void __fastcall FOVSync___ctor(FOVSync_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FOVSync__LateUpdate(FOVSync_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *observeCamera; // x21
  UnityEngine_Camera_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Camera_o *v12; // x0
  float fieldOfView; // s0
  float v14; // s0

  if ( (byte_4B15692 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Camera___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B15692 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Camera___);
  observeCamera = (UnityEngine_Object_o *)this->fields.observeCamera;
  v9 = (UnityEngine_Camera_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Implicit(observeCamera, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v9, 0LL) )
    {
      v12 = this->fields.observeCamera;
      if ( !v12 )
        goto LABEL_15;
      fieldOfView = UnityEngine_Camera__get_fieldOfView(v12, 0LL);
      if ( !v9 )
        goto LABEL_15;
      if ( fieldOfView != UnityEngine_Camera__get_fieldOfView(v9, 0LL) )
      {
        v12 = this->fields.observeCamera;
        if ( v12 )
        {
          v14 = UnityEngine_Camera__get_fieldOfView(v12, 0LL);
          UnityEngine_Camera__set_fieldOfView(v9, v14, 0LL);
          return;
        }
LABEL_15:
        sub_1BCAA3C(v12, v11);
      }
    }
  }
}


void __fastcall FOVSync__Start(FOVSync_o *this, const MethodInfo *method)
{
  ;
}