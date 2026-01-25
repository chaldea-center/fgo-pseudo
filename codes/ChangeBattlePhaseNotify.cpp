void ChangeBattlePhaseNotify___ctor(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4CF1AAC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__TypeInfo);
    byte_4CF1AAC = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v3,
    (const MethodInfo_34B8D98 *)Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___ctor__);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v3,
    4,
    3,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__Add__);
  this->fields.dicDetailToPhase = (struct System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dicDetailToPhase, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  BattleSubject___ctor((BattleSubject_o *)this, v12);
}


// local variable allocation has failed, the output may be wrong!
void ChangeBattlePhaseNotify__UpdatePhase(ChangeBattlePhaseNotify_o *this, int32_t phase, const MethodInfo *method)
{
  this->fields._DetailPhase_k__BackingField = phase;
  BattleSubject__Notify((BattleSubject_o *)this, *(const MethodInfo **)&phase);
}


int32_t ChangeBattlePhaseNotify__get_DetailPhase(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  return this->fields._DetailPhase_k__BackingField;
}


int32_t ChangeBattlePhaseNotify__get_Phase(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  if ( (byte_4CF1AAB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___);
    byte_4CF1AAB = 1;
  }
  return BasicHelper__GetValue_Int32Enum__Int32Enum_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicDetailToPhase,
           this->fields._DetailPhase_k__BackingField,
           this->fields._DetailPhase_k__BackingField,
           (const MethodInfo_315E1DC *)Method_BasicHelper_GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___);
}


void ChangeBattlePhaseNotify__set_DetailPhase(ChangeBattlePhaseNotify_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DetailPhase_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void ChangeBattlePhaseNotify__set_Phase(ChangeBattlePhaseNotify_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DetailPhase_k__BackingField = value;
  BattleSubject__Notify((BattleSubject_o *)this, *(const MethodInfo **)&value);
}