void FOVSync___ctor(FOVSync_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FOVSync__LateUpdate(FOVSync_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *observeCamera; // x21
  UnityEngine_Camera_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Camera_o *v9; // x0
  float fieldOfView; // s0
  float v11; // s0

  if ( (byte_596FBB3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FBB3 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
  observeCamera = (UnityEngine_Object_o *)this->fields.observeCamera;
  v6 = (UnityEngine_Camera_o *)Component_object;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Implicit(observeCamera, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v6, 0) )
    {
      v9 = this->fields.observeCamera;
      if ( !v9 )
        goto LABEL_15;
      fieldOfView = UnityEngine_Camera__get_fieldOfView(v9, 0);
      if ( !v6 )
        goto LABEL_15;
      if ( fieldOfView != UnityEngine_Camera__get_fieldOfView(v6, 0) )
      {
        v9 = this->fields.observeCamera;
        if ( v9 )
        {
          v11 = UnityEngine_Camera__get_fieldOfView(v9, 0);
          UnityEngine_Camera__set_fieldOfView(v6, v11, 0);
          return;
        }
LABEL_15:
        sub_2213CDC(v9, v8);
      }
    }
  }
}


void FOVSync__Start(FOVSync_o *this, const MethodInfo *method)
{
  ;
}