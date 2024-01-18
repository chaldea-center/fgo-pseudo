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

  if ( (byte_4184251 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9937/*"OnAnimEvent"*/, ev);
    byte_4184251 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_B2C434(0LL, ev);
  UnityEngine_GameObject__SendMessage_40660472(
    targetObject,
    (System_String_o *)StringLiteral_9937/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0LL);
}


void __fastcall BattleChrControl__setTarget(
        BattleChrControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  this->fields.targetObject = obj;
  sub_B2C2F8(&this->fields.targetObject, obj);
}