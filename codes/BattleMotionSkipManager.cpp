void BattleMotionSkipManager___ctor(
        BattleMotionSkipManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5973549 & 1) == 0 )
  {
    sub_2213A60(&BaseMotionSkip_TypeInfo);
    byte_5973549 = 1;
  }
  v5 = (Il2CppObject *)sub_2213CCC(BaseMotionSkip_TypeInfo);
  System_Object___ctor(v5, 0);
  this->fields.defaultMotionSkip = (struct BaseMotionSkip_o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Perf_k__BackingField = perf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Perf_k__BackingField,
    (int32_t)perf,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void BattleMotionSkipManager__ReleaseMotionSkip(BattleMotionSkipManager_o *this, const MethodInfo *method)
{
  struct BaseMotionSkip_o *mainMotionSkip; // x0
  MissionNaviTransitionBoardItem_o *p_mainMotionSkip; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_mainMotionSkip = (MissionNaviTransitionBoardItem_o *)&this->fields.mainMotionSkip;
  mainMotionSkip = this->fields.mainMotionSkip;
  if ( !mainMotionSkip )
  {
    mainMotionSkip = this->fields.defaultMotionSkip;
    if ( !mainMotionSkip )
      sub_2213CDC(0, method);
  }
  ((void (__fastcall *)(struct BaseMotionSkip_o *, const MethodInfo *))mainMotionSkip->klass->vtable._7_Release.methodPtr)(
    mainMotionSkip,
    mainMotionSkip->klass->vtable._7_Release.method);
  p_mainMotionSkip->klass = 0;
  sub_2213A04(p_mainMotionSkip, 0, v5, v6, v7, v8, v9, v10);
}


void BattleMotionSkipManager__SetMotionSkip(
        BattleMotionSkipManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  struct BaseMotionSkip_o *mainMotionSkip; // x0
  __int64 v6; // x1
  struct BaseMotionSkip_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  BattleMotionSkipManager__ReleaseMotionSkip(this, (const MethodInfo *)skillInfo);
  if ( !skillInfo
    || (v7 = (struct BaseMotionSkip_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._16_MakeSkillSkip.methodPtr)(
                                          skillInfo,
                                          skillInfo->klass->vtable._16_MakeSkillSkip.method),
        this->fields.mainMotionSkip = v7,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mainMotionSkip,
          (int32_t)v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (mainMotionSkip = this->fields.mainMotionSkip) == 0)
    && (mainMotionSkip = this->fields.defaultMotionSkip) == 0 )
  {
    sub_2213CDC(mainMotionSkip, v6);
  }
  ((void (__fastcall *)(struct BaseMotionSkip_o *, BattleMotionSkipManager_o *, const MethodInfo *))mainMotionSkip->klass->vtable._6_Init.methodPtr)(
    mainMotionSkip,
    this,
    mainMotionSkip->klass->vtable._6_Init.method);
}


BaseMotionSkip_o *BattleMotionSkipManager__get_Current(BattleMotionSkipManager_o *this, const MethodInfo *method)
{
  BaseMotionSkip_o *result; // x0

  result = this->fields.mainMotionSkip;
  if ( !result )
    return this->fields.defaultMotionSkip;
  return result;
}


BattlePerformance_o *BattleMotionSkipManager__get_Perf(BattleMotionSkipManager_o *this, const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void BattleMotionSkipManager__set_Current(
        BattleMotionSkipManager_o *this,
        BaseMotionSkip_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mainMotionSkip = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainMotionSkip,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleMotionSkipManager__set_Perf(
        BattleMotionSkipManager_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Perf_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Perf_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}