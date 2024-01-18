void __fastcall EventMaskFade___ctor(EventMaskFade_o *this, const MethodInfo *method)
{
  MaskFade___ctor((MaskFade_o *)this, 0LL);
}


void __fastcall EventMaskFade__SetCallback(EventMaskFade_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  EventMaskFadeTouchBlockObject_o *touchBlockObject; // x0

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    touchBlockObject = this->fields.touchBlockObject;
    if ( !touchBlockObject )
      sub_B2C434(0LL, v5);
    EventMaskFadeTouchBlockObject__SetCallback(touchBlockObject, callback, v6);
  }
}


void __fastcall EventMaskFade__SetMaskCollider(EventMaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  EventMaskFadeTouchBlockObject_o *touchBlockObject; // x0

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) && !isEnable )
  {
    touchBlockObject = this->fields.touchBlockObject;
    if ( !touchBlockObject )
      goto LABEL_7;
    EventMaskFadeTouchBlockObject__RemoveCallback(touchBlockObject, v5);
  }
  touchBlockObject = (EventMaskFadeTouchBlockObject_o *)this->fields.colliderBase;
  if ( !touchBlockObject )
LABEL_7:
    sub_B2C434(touchBlockObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchBlockObject, isEnable, 0LL);
}