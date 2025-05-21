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

  if ( (byte_4B43E3C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9831/*"OnAnimEvent"*/, ev);
    byte_4B43E3C = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_1BDBAD4(0LL, ev);
  UnityEngine_GameObject__SendMessage_70265988(
    targetObject,
    (System_String_o *)StringLiteral_9831/*"OnAnimEvent"*/,
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)obj, (int32_t)method, v3);
}