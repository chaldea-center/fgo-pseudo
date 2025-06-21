void __fastcall BattleObserver___ctor(BattleObserver_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleObserver__Add(BattleObserver_o *this, BattleSubject_o *subject, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( subject )
  {
    BattleSubject__Add(subject, this, method);
    this->fields.battleSubject = subject;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)subject, v5, v6);
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