void BattleCallBack_object____ctor(
        BattleCallBack_T__o *this,
        Il2CppObject *argument,
        System_Action_T__o *callBack,
        const MethodInfo_33A3A30 *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  this->fields.argument = argument;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)argument, v7, v8, v9, v10, v11, v12);
  this->fields.callBack = callBack;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callBack, (int32_t)callBack, v13, v14, v15, v16, v17, v18);
}


void BattleCallBack_object___call(BattleCallBack_T__o *this, const MethodInfo_33A3A74 *method)
{
  struct System_Action_T__o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1C7BD40(this, method);
  ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callBack->fields.invoke_impl)(
    callBack->fields.method_code,
    this->fields.argument,
    callBack->fields.method);
}