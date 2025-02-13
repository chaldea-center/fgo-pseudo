void __fastcall FGO_CameraDepth___ctor(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_CameraDepth__Start(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v4; // x1
  UnityEngine_Camera_o *v5; // x19
  int v6; // w1

  if ( (byte_4BDB3BF & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    byte_4BDB3BF = 1;
  }
  Component_object = UnityEngine_GameObject__Find(this->fields._TargetCameraName, 0LL);
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Camera___)) == 0LL )
  {
    sub_1C22094(Component_object, v4);
  }
  v5 = (UnityEngine_Camera_o *)Component_object;
  v6 = UnityEngine_Camera__get_depthTextureMode((UnityEngine_Camera_o *)Component_object, 0LL) | 1;
  UnityEngine_Camera__set_depthTextureMode(v5, v6, 0LL);
}