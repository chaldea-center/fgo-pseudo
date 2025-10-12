void FGO_CameraDepth___ctor(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_CameraDepth__Start(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Component_object; // x0
  UnityEngine_Camera_o *v4; // x19
  int32_t v5; // w1

  if ( (byte_4C3675E & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    byte_4C3675E = 1;
  }
  Component_object = UnityEngine_GameObject__Find(this->fields._TargetCameraName, 0);
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Camera___)) == 0 )
  {
    sub_1C32E7C(Component_object);
  }
  v4 = (UnityEngine_Camera_o *)Component_object;
  v5 = UnityEngine_Camera__get_depthTextureMode((UnityEngine_Camera_o *)Component_object, 0) | 1;
  UnityEngine_Camera__set_depthTextureMode(v4, v5, 0);
}