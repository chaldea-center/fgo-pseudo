void __fastcall BattleChrControl___ctor(BattleChrControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleChrControl__OnAnimEvent(
        BattleChrControl_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetObject; // x0

  if ( (byte_4B1B8C1 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9756/*"OnAnimEvent"*/, ev);
    byte_4B1B8C1 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_1BCB254(0LL, ev);
  UnityEngine_GameObject__SendMessage_70117864(
    targetObject,
    (System_String_o *)StringLiteral_9756/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0LL);
}


void __fastcall BattleChrControl__setTarget(
        BattleChrControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetObject = obj;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)obj, (int32_t)method, v3);
}