void __fastcall BattleObserver___ctor(BattleObserver_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleObserver__Add(BattleObserver_o *this, BattleSubject_o *subject, const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( subject )
  {
    BattleSubject__Add(subject, this, method);
    this->fields.battleSubject = subject;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)subject, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall BattleObserver__Remove(BattleObserver_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleSubject_o *battleSubject; // x0

  battleSubject = this->fields.battleSubject;
  if ( battleSubject )
    BattleSubject__Remove(battleSubject, this, v2);
}