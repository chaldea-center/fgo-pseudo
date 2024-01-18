void __fastcall FGO_CameraDepth___ctor(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_CameraDepth__Start(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v4; // x1
  UnityEngine_Camera_o *v5; // x19
  int v6; // w1

  if ( (byte_41885AD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Camera___, method);
    byte_41885AD = 1;
  }
  Component_srcLineSprite = UnityEngine_GameObject__Find(this->fields._TargetCameraName, 0LL);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Component_srcLineSprite,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Camera___)) == 0LL )
  {
    sub_B2C434(Component_srcLineSprite, v4);
  }
  v5 = (UnityEngine_Camera_o *)Component_srcLineSprite;
  v6 = UnityEngine_Camera__get_depthTextureMode((UnityEngine_Camera_o *)Component_srcLineSprite, 0LL) | 1;
  UnityEngine_Camera__set_depthTextureMode(v5, v6, 0LL);
}