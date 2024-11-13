void __fastcall BattleActionWaitCond___ctor(BattleActionWaitCond_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionWaitCond_Base___ctor(BattleActionWaitCond_Base_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionWaitCond_Base__IsWait(
        BattleActionWaitCond_Base_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleActionWaitCond_LimitTime___ctor(
        BattleActionWaitCond_LimitTime_o *this,
        float limit,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.limit = limit;
}


bool __fastcall BattleActionWaitCond_LimitTime__IsInLimitTime(
        BattleActionWaitCond_LimitTime_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  return this->fields.limit > elapsedTime;
}


bool __fastcall BattleActionWaitCond_LimitTime__IsWait(
        BattleActionWaitCond_LimitTime_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  if ( this->fields.limit <= elapsedTime )
    return 0;
  else
    return ((__int64 (__fastcall *)(BattleActionWaitCond_LimitTime_o *, void *))this->klass->vtable._5_IsWaitCond.method)(
             this,
             this->klass[1]._1.image);
}


bool __fastcall BattleActionWaitCond_LimitTime__IsWaitCond(
        BattleActionWaitCond_LimitTime_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleActionWaitCond_UntilSideEffectInvisible___ctor(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  v4 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields._normalFollowerInfo = (struct FollowerInfo_o *)perf;
  v4 = (PartyOrganizationUtility_o *)((char *)v4 + 24);
  *(_DWORD *)&v4[-1].fields._IsQuestStartMenuMode_k__BackingField = 1067450368;
  sub_1BCA784(v4, (int64_t)perf, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleActionWaitCond_UntilSideEffectInvisible__IsWaitCond(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_1BCAA3C(this, method);
  return perf->fields._WaitDispEffectCount_k__BackingField > 0;
}