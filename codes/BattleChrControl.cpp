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

  if ( (byte_49BA26B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9630/*"OnAnimEvent"*/, ev);
    byte_49BA26B = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_1B4D1EC(0LL, ev);
  UnityEngine_GameObject__SendMessage_68785828(
    targetObject,
    (System_String_o *)StringLiteral_9630/*"OnAnimEvent"*/,
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)obj, (int32_t)method, v3);
}