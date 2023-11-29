void __fastcall BattleObserver___ctor(BattleObserver_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleObserver__Add(BattleObserver_o *this, BattleSubject_o *subject, const MethodInfo *method)
{
  if ( subject )
  {
    BattleSubject__Add(subject, this, 0LL);
    this->fields.battleSubject = subject;
    sub_B16F98(&this->fields, subject);
  }
}


void __fastcall BattleObserver__Remove(BattleObserver_o *this, const MethodInfo *method)
{
  BattleSubject_o *battleSubject; // x0

  battleSubject = this->fields.battleSubject;
  if ( battleSubject )
    BattleSubject__Remove(battleSubject, this, 0LL);
}