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

  if ( (byte_4C4232B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9833/*"OnAnimEvent"*/);
    byte_4C4232B = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SendMessage_71248540(
    targetObject,
    (System_String_o *)StringLiteral_9833/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0);
}


void BattleChrControl__setTarget(BattleChrControl_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetObject = obj;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)obj, (int32_t)method, v3);
}