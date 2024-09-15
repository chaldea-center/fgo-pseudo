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

  if ( (byte_4A2D382 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_9827/*"OnAnimEvent"*/, ev);
    byte_4A2D382 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_1B7641C(0LL, ev);
  UnityEngine_GameObject__SendMessage_69268780(
    targetObject,
    (System_String_o *)StringLiteral_9827/*"OnAnimEvent"*/,
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)obj, (int32_t)method, v3);
}