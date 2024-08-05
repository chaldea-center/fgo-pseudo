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

  if ( (byte_49FD960 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9786/*"OnAnimEvent"*/, ev);
    byte_49FD960 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_1B64ACC(0LL, ev);
  UnityEngine_GameObject__SendMessage_69117288(
    targetObject,
    (System_String_o *)StringLiteral_9786/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0LL);
}


void __fastcall BattleChrControl__setTarget(
        BattleChrControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.targetObject = obj;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)obj, (int32_t)method, v3);
}