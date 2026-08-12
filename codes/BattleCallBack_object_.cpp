void BattleCallBack_object____ctor(
        BattleCallBack_T__o *this,
        Il2CppObject *argument,
        System_Action_T__o *callBack,
        const MethodInfo_3E6CFF8 *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  this->fields.argument = argument;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)argument, v7, v8, v9, v10, v11, v12);
  this->fields.callBack = callBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callBack,
    (int32_t)callBack,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void BattleCallBack_object___call(BattleCallBack_T__o *this, const MethodInfo_3E6D03C *method)
{
  struct System_Action_T__o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    this->fields.argument,
    callBack->fields.method);
}