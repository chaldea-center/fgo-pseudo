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

  if ( (byte_59379C7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10219/*"OnAnimEvent"*/);
    byte_59379C7 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_21FFECC(0, ev);
  UnityEngine_GameObject__SendMessage_83224784(
    targetObject,
    (System_String_o *)StringLiteral_10219/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0);
}


void BattleChrControl__setTarget(BattleChrControl_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.targetObject = obj;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetObject,
    (int32_t)obj,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}