void BattleObserver___ctor(BattleObserver_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleObserver__Add(BattleObserver_o *this, BattleSubject_o *subject, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( subject )
  {
    BattleSubject__Add(subject, this, method);
    this->fields.battleSubject = subject;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)subject, v5, v6, v7, v8, v9, v10);
  }
}


void BattleObserver__Remove(BattleObserver_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleSubject_o *battleSubject; // x0

  battleSubject = this->fields.battleSubject;
  if ( battleSubject )
    BattleSubject__Remove(battleSubject, this, v2);
}