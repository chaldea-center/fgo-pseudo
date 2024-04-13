void __fastcall BattleChrControl___ctor(BattleChrControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleChrControl__OnAnimEvent(
        BattleChrControl_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *targetObject; // x0

  if ( (byte_42E5371 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10043/*"OnAnimEvent"*/, (_DWORD)ev, (_DWORD)method, v3);
    byte_42E5371 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_B5D69C(0LL, ev);
  UnityEngine_GameObject__SendMessage_41595104(
    targetObject,
    (System_String_o *)StringLiteral_10043/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0LL);
}


void __fastcall BattleChrControl__setTarget(
        BattleChrControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  this->fields.targetObject = obj;
  sub_B5D560(&this->fields.targetObject);
}