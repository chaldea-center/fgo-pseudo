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

  if ( (byte_4BB3AE0 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_10011/*"Olive"*/, ev);
    byte_4BB3AE0 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_1C13F80(0LL, ev);
  UnityEngine_GameObject__SendMessage_70703360(
    targetObject,
    (System_String_o *)StringLiteral_10011/*"Olive"*/,
    (Il2CppObject *)ev,
    0LL);
}


void __fastcall BattleChrControl__setTarget(
        BattleChrControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.targetObject = obj;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)obj,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}