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

  if ( (byte_40FD467 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9905/*"OnAnimEvent"*/, ev);
    byte_40FD467 = 1;
  }
  targetObject = this->fields.targetObject;
  if ( !targetObject )
    sub_B170D4();
  UnityEngine_GameObject__SendMessage_40693300(
    targetObject,
    (System_String_o *)StringLiteral_9905/*"OnAnimEvent"*/,
    (Il2CppObject *)ev,
    0LL);
}


void __fastcall BattleChrControl__setTarget(
        BattleChrControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.targetObject = obj;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}