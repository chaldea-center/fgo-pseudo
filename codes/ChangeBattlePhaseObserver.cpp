void __fastcall ChangeBattlePhaseObserver___ctor(ChangeBattlePhaseObserver_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ChangeBattlePhaseObserver__Update(
        ChangeBattlePhaseObserver_o *this,
        BattleSubject_o *subject,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A01182 & 1) == 0 )
  {
    sub_1B64870(&ChangeBattlePhaseNotify_TypeInfo, subject);
    byte_4A01182 = 1;
  }
  if ( subject )
  {
    methodPtr_low = LOBYTE(ChangeBattlePhaseNotify_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(subject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (ChangeBattlePhaseNotify_c *)subject->klass->_2.typeHierarchy[methodPtr_low - 1] == ChangeBattlePhaseNotify_TypeInfo )
    {
      ((void (__fastcall *)(ChangeBattlePhaseObserver_o *, BattleSubject_o *, const char *))this->klass[1]._1.gc_desc)(
        this,
        subject,
        this->klass[1]._1.name);
    }
  }
}