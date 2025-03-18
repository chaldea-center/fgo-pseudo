void __fastcall ChangeBattlePhaseNotify___ctor(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_4C24F01 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__Add__,
      method);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___ctor__,
      v3);
    sub_1C3B764(
      &System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__TypeInfo,
      v4);
    byte_4C24F01 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v5,
    (const MethodInfo_3321BA4 *)Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___ctor__);
  if ( !v5 )
    sub_1C3B9C0(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v5,
    4,
    3,
    (const MethodInfo_3322568 *)Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__Add__);
  this->fields.dicDetailToPhase = (struct System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__o *)v5;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.dicDetailToPhase, (int64_t)v5, v8, v9, v10, v11, v12, v13);
  BattleSubject___ctor((BattleSubject_o *)this, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeBattlePhaseNotify__UpdatePhase(
        ChangeBattlePhaseNotify_o *this,
        int32_t phase,
        const MethodInfo *method)
{
  this->fields._DetailPhase_k__BackingField = phase;
  BattleSubject__Notify((BattleSubject_o *)this, *(const MethodInfo **)&phase);
}


int32_t __fastcall ChangeBattlePhaseNotify__get_DetailPhase(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  return this->fields._DetailPhase_k__BackingField;
}


int32_t __fastcall ChangeBattlePhaseNotify__get_Phase(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  if ( (byte_4C24F00 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_BasicHelper_GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___,
      method);
    byte_4C24F00 = 1;
  }
  return BasicHelper__GetValue_Int32Enum__Int32Enum_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicDetailToPhase,
           this->fields._DetailPhase_k__BackingField,
           this->fields._DetailPhase_k__BackingField,
           (const MethodInfo_2FDE390 *)Method_BasicHelper_GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___);
}


void __fastcall ChangeBattlePhaseNotify__set_DetailPhase(
        ChangeBattlePhaseNotify_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DetailPhase_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeBattlePhaseNotify__set_Phase(
        ChangeBattlePhaseNotify_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DetailPhase_k__BackingField = value;
  BattleSubject__Notify((BattleSubject_o *)this, *(const MethodInfo **)&value);
}