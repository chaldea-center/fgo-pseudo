void __fastcall ChangeBattlePhaseNotify___ctor(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_418A110 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__Add__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___ctor__,
      v3);
    sub_B2C35C(
      &System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__TypeInfo,
      v4);
    byte_418A110 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B2C42C(System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v5,
    (const MethodInfo_2E76880 *)Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___ctor__);
  if ( !v5 )
    sub_B2C434(v6, v7);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v5,
    4,
    3,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__Add__);
  this->fields.dicDetailToPhase = (struct System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicDetailToPhase,
    (System_Int32_array **)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  BattleSubject___ctor((BattleSubject_o *)this, 0LL);
}


void __fastcall ChangeBattlePhaseNotify__UpdatePhase(
        ChangeBattlePhaseNotify_o *this,
        int32_t phase,
        const MethodInfo *method)
{
  this->fields._DetailPhase_k__BackingField = phase;
  BattleSubject__Notify((BattleSubject_o *)this, 0LL);
}


int32_t __fastcall ChangeBattlePhaseNotify__get_DetailPhase(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  return this->fields._DetailPhase_k__BackingField;
}


int32_t __fastcall ChangeBattlePhaseNotify__get_Phase(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  if ( (byte_418A10F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_BasicHelper_GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___,
      method);
    byte_418A10F = 1;
  }
  return BasicHelper__GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicDetailToPhase,
           this->fields._DetailPhase_k__BackingField,
           this->fields._DetailPhase_k__BackingField,
           (const MethodInfo_172861C *)Method_BasicHelper_GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___);
}


void __fastcall ChangeBattlePhaseNotify__set_DetailPhase(
        ChangeBattlePhaseNotify_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DetailPhase_k__BackingField = value;
}


void __fastcall ChangeBattlePhaseNotify__set_Phase(
        ChangeBattlePhaseNotify_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DetailPhase_k__BackingField = value;
  BattleSubject__Notify((BattleSubject_o *)this, 0LL);
}