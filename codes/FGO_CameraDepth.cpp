void __fastcall FGO_CameraDepth___ctor(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_CameraDepth__Start(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Camera_o *v6; // x19
  int v7; // w1

  if ( (byte_4B15093 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Camera___, method, v2);
    byte_4B15093 = 1;
  }
  Component_object = UnityEngine_GameObject__Find(this->fields._TargetCameraName, 0LL);
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Camera___)) == 0LL )
  {
    sub_1BCAA3C(Component_object, v5);
  }
  v6 = (UnityEngine_Camera_o *)Component_object;
  v7 = UnityEngine_Camera__get_depthTextureMode((UnityEngine_Camera_o *)Component_object, 0LL) | 1;
  UnityEngine_Camera__set_depthTextureMode(v6, v7, 0LL);
}