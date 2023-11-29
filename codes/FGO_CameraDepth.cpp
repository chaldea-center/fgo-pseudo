void __fastcall FGO_CameraDepth___ctor(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_CameraDepth__Start(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v3; // x0
  UnityEngine_Camera_o *Component_srcLineSprite; // x0
  UnityEngine_Camera_o *v5; // x19
  int v6; // w1

  if ( (byte_40F9F5A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Camera___, method);
    byte_40F9F5A = 1;
  }
  v3 = UnityEngine_GameObject__Find(this->fields._TargetCameraName, 0LL);
  if ( !v3
    || (Component_srcLineSprite = (UnityEngine_Camera_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v3,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Camera___)) == 0LL )
  {
    sub_B170D4();
  }
  v5 = Component_srcLineSprite;
  v6 = UnityEngine_Camera__get_depthTextureMode(Component_srcLineSprite, 0LL) | 1;
  UnityEngine_Camera__set_depthTextureMode(v5, v6, 0LL);
}