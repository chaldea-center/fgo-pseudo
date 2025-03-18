void __fastcall BattleCallBack___ctor(BattleCallBack_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.callBack = callBack;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)callBack, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleCallBack__call(BattleCallBack_o *this, const MethodInfo *method)
{
  struct System_Action_o *callBack; // x8

  callBack = this->fields.callBack;
  if ( !callBack )
    sub_1C3B9C0(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callBack->fields.m_target)(
    callBack->fields.original_method_info,
    *(_QWORD *)&callBack->fields.extra_arg);
}