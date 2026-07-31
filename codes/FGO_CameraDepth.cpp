void FGO_CameraDepth___ctor(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_CameraDepth__Start(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v4; // x1
  UnityEngine_Camera_o *v5; // x19
  int32_t depthTextureMode; // w8

  if ( (byte_59373E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    byte_59373E3 = 1;
  }
  Component_object = UnityEngine_GameObject__Find(this->fields._TargetCameraName, 0);
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Camera___)) == 0 )
  {
    sub_21FFECC(Component_object, v4);
  }
  v5 = (UnityEngine_Camera_o *)Component_object;
  depthTextureMode = UnityEngine_Camera__get_depthTextureMode((UnityEngine_Camera_o *)Component_object, 0);
  UnityEngine_Camera__set_depthTextureMode(v5, depthTextureMode | 1, 0);
}