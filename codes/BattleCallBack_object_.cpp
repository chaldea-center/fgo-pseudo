void __fastcall BattleCallBack_object____ctor(
        BattleCallBack_T__o *this,
        Il2CppObject *argument,
        System_Action_T__o *callBack,
        const MethodInfo_31D1350 *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  this->fields.argument = argument;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)argument, v7, v8, v9, v10, v11, v12);
  this->fields.callBack = callBack;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callBack, (int64_t)callBack, v13, v14, v15, v16, v17, v18);
}


void __fastcall BattleCallBack_object___call(BattleCallBack_T__o *this, const MethodInfo_31D1394 *method)
{
  struct System_Action_T__o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1C22094(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    this->fields.argument,
    *(_QWORD *)&callBack->fields.extra_arg);
}