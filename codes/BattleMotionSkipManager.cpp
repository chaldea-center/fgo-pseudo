void __fastcall BattleMotionSkipManager___ctor(
        BattleMotionSkipManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1886F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMotionSkip_TypeInfo, perf, method);
    byte_4B1886F = 1;
  }
  v6 = (Il2CppObject *)sub_1BCAA2C(BaseMotionSkip_TypeInfo, perf, method, v3);
  System_Object___ctor(v6, 0LL);
  this->fields.defaultMotionSkip = (struct BaseMotionSkip_o *)v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Perf_k__BackingField,
    (int64_t)perf,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall BattleMotionSkipManager__ReleaseMotionSkip(BattleMotionSkipManager_o *this, const MethodInfo *method)
{
  struct BaseMotionSkip_o *mainMotionSkip; // x0
  PartyOrganizationUtility_o *p_mainMotionSkip; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_mainMotionSkip = (PartyOrganizationUtility_o *)&this->fields.mainMotionSkip;
  mainMotionSkip = this->fields.mainMotionSkip;
  if ( !mainMotionSkip )
  {
    mainMotionSkip = this->fields.defaultMotionSkip;
    if ( !mainMotionSkip )
      sub_1BCAA3C(0LL, method);
  }
  ((void (__fastcall *)(struct BaseMotionSkip_o *, Il2CppMethodPointer))mainMotionSkip->klass->vtable._7_Release.method)(
    mainMotionSkip,
    mainMotionSkip->klass->vtable._8_ResetSkipTimeScale.methodPtr);
  p_mainMotionSkip->klass = 0LL;
  sub_1BCA784(p_mainMotionSkip, 0LL, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleMotionSkipManager__SetMotionSkip(
        BattleMotionSkipManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  struct BaseMotionSkip_o *mainMotionSkip; // x0
  __int64 v6; // x1
  struct BaseMotionSkip_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  BattleMotionSkipManager__ReleaseMotionSkip(this, (const MethodInfo *)skillInfo);
  if ( !skillInfo
    || (v7 = (struct BaseMotionSkip_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._14_MakeSkillSkip.method)(
                                          skillInfo,
                                          skillInfo->klass->vtable._15_CommonMakeSkillSkip.methodPtr),
        this->fields.mainMotionSkip = v7,
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainMotionSkip, (int64_t)v7, v8, v9, v10, v11, v12, v13),
        (mainMotionSkip = this->fields.mainMotionSkip) == 0LL)
    && (mainMotionSkip = this->fields.defaultMotionSkip) == 0LL )
  {
    sub_1BCAA3C(mainMotionSkip, v6);
  }
  ((void (__fastcall *)(struct BaseMotionSkip_o *, BattleMotionSkipManager_o *, Il2CppMethodPointer))mainMotionSkip->klass->vtable._6_Init.method)(
    mainMotionSkip,
    this,
    mainMotionSkip->klass->vtable._7_Release.methodPtr);
}


BaseMotionSkip_o *__fastcall BattleMotionSkipManager__get_Current(
        BattleMotionSkipManager_o *this,
        const MethodInfo *method)
{
  BaseMotionSkip_o *result; // x0

  result = this->fields.mainMotionSkip;
  if ( !result )
    return this->fields.defaultMotionSkip;
  return result;
}


BattlePerformance_o *__fastcall BattleMotionSkipManager__get_Perf(
        BattleMotionSkipManager_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void __fastcall BattleMotionSkipManager__set_Current(
        BattleMotionSkipManager_o *this,
        BaseMotionSkip_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mainMotionSkip = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mainMotionSkip,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleMotionSkipManager__set_Perf(
        BattleMotionSkipManager_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Perf_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Perf_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}