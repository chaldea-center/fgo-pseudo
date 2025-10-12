void BattleMotionSkipManager___ctor(
        BattleMotionSkipManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3A4D4 & 1) == 0 )
  {
    sub_1C32C20(&BaseMotionSkip_TypeInfo);
    byte_4C3A4D4 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(BaseMotionSkip_TypeInfo);
  System_Object___ctor(v5, 0);
  this->fields.defaultMotionSkip = (struct BaseMotionSkip_o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Perf_k__BackingField = perf;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Perf_k__BackingField, (int32_t)perf, v8, v9);
}


void BattleMotionSkipManager__ReleaseMotionSkip(BattleMotionSkipManager_o *this, const MethodInfo *method)
{
  struct BaseMotionSkip_o *mainMotionSkip; // x0
  CGThumbnailListItem_o *p_mainMotionSkip; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_mainMotionSkip = (CGThumbnailListItem_o *)&this->fields.mainMotionSkip;
  mainMotionSkip = this->fields.mainMotionSkip;
  if ( !mainMotionSkip )
  {
    mainMotionSkip = this->fields.defaultMotionSkip;
    if ( !mainMotionSkip )
      sub_1C32E7C(0);
  }
  ((void (__fastcall *)(struct BaseMotionSkip_o *, const MethodInfo *))mainMotionSkip->klass->vtable._7_Release.methodPtr)(
    mainMotionSkip,
    mainMotionSkip->klass->vtable._7_Release.method);
  p_mainMotionSkip->klass = 0;
  sub_1C32BC4(p_mainMotionSkip, 0, v5, v6);
}


void BattleMotionSkipManager__SetMotionSkip(
        BattleMotionSkipManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  struct BaseMotionSkip_o *mainMotionSkip; // x0
  struct BaseMotionSkip_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  BattleMotionSkipManager__ReleaseMotionSkip(this, (const MethodInfo *)skillInfo);
  if ( !skillInfo
    || (v6 = (struct BaseMotionSkip_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._16_MakeSkillSkip.methodPtr)(
                                          skillInfo,
                                          skillInfo->klass->vtable._16_MakeSkillSkip.method),
        this->fields.mainMotionSkip = v6,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainMotionSkip, (int32_t)v6, v7, v8),
        (mainMotionSkip = this->fields.mainMotionSkip) == 0)
    && (mainMotionSkip = this->fields.defaultMotionSkip) == 0 )
  {
    sub_1C32E7C(mainMotionSkip);
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
  const MethodInfo *v3; // x3

  this->fields.mainMotionSkip = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainMotionSkip, (int32_t)value, (int32_t)method, v3);
}


void BattleMotionSkipManager__set_Perf(
        BattleMotionSkipManager_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Perf_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Perf_k__BackingField, (int32_t)value, (int32_t)method, v3);
}