void __fastcall ChangeBattlePhaseNotify___ctor(ChangeBattlePhaseNotify_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438E468 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__TypeInfo);
    byte_438E468 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B77694(System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v3,
    (const MethodInfo_2F9B4D0 *)Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___ctor__);
  if ( !v3 )
    sub_B7769C(v4, v5);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v3,
    4,
    3,
    (const MethodInfo_2F9C074 *)Method_System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__Add__);
  this->fields.dicDetailToPhase = (struct System_Collections_Generic_Dictionary_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dicDetailToPhase,
    (System_Int32_array **)v3,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  if ( (byte_438E467 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___);
    byte_438E467 = 1;
  }
  return BasicHelper__GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicDetailToPhase,
           this->fields._DetailPhase_k__BackingField,
           this->fields._DetailPhase_k__BackingField,
           (const MethodInfo_1C680B4 *)Method_BasicHelper_GetValue_ServantAnimationOverwriteEntity_PhaseType__ServantAnimationOverwriteEntity_PhaseType___);
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