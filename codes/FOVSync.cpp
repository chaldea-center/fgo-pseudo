void FOVSync___ctor(FOVSync_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FOVSync__LateUpdate(FOVSync_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *observeCamera; // x21
  UnityEngine_Camera_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_Camera_o *v7; // x0
  float fieldOfView; // s0
  float v9; // s0

  if ( (byte_4D2BC42 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC42 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Camera___);
  observeCamera = (UnityEngine_Object_o *)this->fields.observeCamera;
  v5 = (UnityEngine_Camera_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(observeCamera, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v5, 0) )
    {
      v7 = this->fields.observeCamera;
      if ( !v7 )
        goto LABEL_15;
      fieldOfView = UnityEngine_Camera__get_fieldOfView(v7, 0);
      if ( !v5 )
        goto LABEL_15;
      if ( fieldOfView != UnityEngine_Camera__get_fieldOfView(v5, 0) )
      {
        v7 = this->fields.observeCamera;
        if ( v7 )
        {
          v9 = UnityEngine_Camera__get_fieldOfView(v7, 0);
          UnityEngine_Camera__set_fieldOfView(v5, v9, 0);
          return;
        }
LABEL_15:
        sub_1C942F0(v7, v6);
      }
    }
  }
}


void FOVSync__Start(FOVSync_o *this, const MethodInfo *method)
{
  ;
}