void __fastcall FGO_CameraDepth___ctor(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGO_CameraDepth__Start(FGO_CameraDepth_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v6; // x1
  UnityEngine_Camera_o *v7; // x19
  int v8; // w1

  if ( (byte_42E8C7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Camera___, (_DWORD)method, v2, v3);
    byte_42E8C7D = 1;
  }
  Component_srcLineSprite = UnityEngine_GameObject__Find(this->fields._TargetCameraName, 0LL);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Component_srcLineSprite,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Camera___)) == 0LL )
  {
    sub_B5D69C(Component_srcLineSprite, v6);
  }
  v7 = (UnityEngine_Camera_o *)Component_srcLineSprite;
  v8 = UnityEngine_Camera__get_depthTextureMode((UnityEngine_Camera_o *)Component_srcLineSprite, 0LL) | 1;
  UnityEngine_Camera__set_depthTextureMode(v7, v8, 0LL);
}