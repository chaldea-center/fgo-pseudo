void BattleChrControl___ctor(BattleChrControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleChrControl__OnAnimEvent(
        BattleChrControl_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetObject; // x0

  if ( (byte_4C26663 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9827/*"OnAnimEvent"*/);
    byte_4C26663 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_1C2D6EC(0, ev);
  UnityEngine_GameObject__SendMessage_71145492(
    targetObject,
    (System_String_o *)StringLiteral_9827/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0);
}


void BattleChrControl__setTarget(BattleChrControl_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetObject = obj;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)obj, (int32_t)method, v3);
}