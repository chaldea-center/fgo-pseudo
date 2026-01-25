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

  if ( (byte_4CEDA0E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9858/*"OnAnimEvent"*/);
    byte_4CEDA0E = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_1C7BD40(0, ev);
  UnityEngine_GameObject__SendMessage_71851428(
    targetObject,
    (System_String_o *)StringLiteral_9858/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0);
}


void BattleChrControl__setTarget(BattleChrControl_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.targetObject = obj;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetObject,
    (int32_t)obj,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}