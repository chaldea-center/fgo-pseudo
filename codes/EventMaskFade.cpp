void __fastcall EventMaskFade___ctor(EventMaskFade_o *this, const MethodInfo *method)
{
  MaskFade___ctor((MaskFade_o *)this, 0LL);
}


void __fastcall EventMaskFade__SetCallback(EventMaskFade_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  EventMaskFadeTouchBlockObject_o *touchBlockObject; // x0

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
  {
    touchBlockObject = this->fields.touchBlockObject;
    if ( !touchBlockObject )
      sub_B170D4();
    EventMaskFadeTouchBlockObject__SetCallback(touchBlockObject, callback, v5);
  }
}


void __fastcall EventMaskFade__SetMaskCollider(EventMaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  EventMaskFadeTouchBlockObject_o *touchBlockObject; // x0
  UnityEngine_GameObject_o *colliderBase; // x0

  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) && !isEnable )
  {
    touchBlockObject = this->fields.touchBlockObject;
    if ( !touchBlockObject )
      goto LABEL_7;
    EventMaskFadeTouchBlockObject__RemoveCallback(touchBlockObject, v5);
  }
  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
LABEL_7:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0LL);
}