void BattleObserver___ctor(BattleObserver_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleObserver__Add(BattleObserver_o *this, BattleSubject_o *subject, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( subject )
  {
    BattleSubject__Add(subject, this, method);
    this->fields.battleSubject = subject;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)subject, v5, v6, v7, v8, v9, v10);
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