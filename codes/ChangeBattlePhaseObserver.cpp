void __fastcall ChangeBattlePhaseObserver___ctor(ChangeBattlePhaseObserver_o *this, const MethodInfo *method)
{
  BattleObserver___ctor((BattleObserver_o *)this, 0LL);
}


void __fastcall ChangeBattlePhaseObserver__Update(
        ChangeBattlePhaseObserver_o *this,
        BattleSubject_o *subject,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_418A111 & 1) == 0 )
  {
    sub_B2C35C(&ChangeBattlePhaseNotify_TypeInfo, subject);
    byte_418A111 = 1;
  }
  if ( subject )
  {
    v5 = *(&ChangeBattlePhaseNotify_TypeInfo->_2.bitflags2 + 1);
    if ( *(&subject->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (ChangeBattlePhaseNotify_c *)subject->klass->_2.typeHierarchy[v5 - 1] == ChangeBattlePhaseNotify_TypeInfo )
    {
      ((void (__fastcall *)(ChangeBattlePhaseObserver_o *, BattleSubject_o *, const char *))this->klass[1]._1.gc_desc)(
        this,
        subject,
        this->klass[1]._1.name);
    }
  }
}