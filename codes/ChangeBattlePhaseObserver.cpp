void ChangeBattlePhaseObserver___ctor(ChangeBattlePhaseObserver_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ChangeBattlePhaseObserver__Update(
        ChangeBattlePhaseObserver_o *this,
        BattleSubject_o *subject,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4D33E91 & 1) == 0 )
  {
    sub_1C93AD4(&ChangeBattlePhaseNotify_TypeInfo);
    byte_4D33E91 = 1;
  }
  if ( subject )
  {
    naturalAligment = ChangeBattlePhaseNotify_TypeInfo->_2.naturalAligment;
    if ( subject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ChangeBattlePhaseNotify_c *)subject->klass->_2.typeHierarchy[naturalAligment - 1] == ChangeBattlePhaseNotify_TypeInfo )
    {
      ((void (__fastcall *)(ChangeBattlePhaseObserver_o *, BattleSubject_o *, void *))this->klass[1]._1.image)(
        this,
        subject,
        this->klass[1]._1.gc_desc);
    }
  }
}