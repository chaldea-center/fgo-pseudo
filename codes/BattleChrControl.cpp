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

  if ( (byte_434E72E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10060/*"OnAnimEvent"*/);
    byte_434E72E = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_B7076C(0LL, ev);
  UnityEngine_GameObject__SendMessage_41092628(
    targetObject,
    (System_String_o *)StringLiteral_10060/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0LL);
}


void __fastcall BattleChrControl__setTarget(
        BattleChrControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  this->fields.targetObject = obj;
  sub_B70630(&this->fields.targetObject);
}