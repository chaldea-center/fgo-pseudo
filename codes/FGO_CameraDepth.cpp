void __fastcall FGO_CameraDepth___ctor(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_CameraDepth__Start(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  UnityEngine_Camera_o *v4; // x19
  int v5; // w1

  if ( (byte_4215426 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Camera___, method);
    byte_4215426 = 1;
  }
  Component_srcLineSprite = UnityEngine_GameObject__Find(this->fields._TargetCameraName, 0LL);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Component_srcLineSprite,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Camera___)) == 0LL )
  {
    sub_B0D97C(Component_srcLineSprite);
  }
  v4 = (UnityEngine_Camera_o *)Component_srcLineSprite;
  v5 = UnityEngine_Camera__get_depthTextureMode((UnityEngine_Camera_o *)Component_srcLineSprite, 0LL) | 1;
  UnityEngine_Camera__set_depthTextureMode(v4, v5, 0LL);
}