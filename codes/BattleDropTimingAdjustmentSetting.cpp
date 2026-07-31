void BattleDropTimingAdjustmentSetting___ctor(BattleDropTimingAdjustmentSetting_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B230 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__TypeInfo);
    byte_593B230 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData___ctor__);
  this->fields.dropTimingDatas = (struct System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dropTimingDatas, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__o *BattleDropTimingAdjustmentSetting__get_DropTimingDatas(
        BattleDropTimingAdjustmentSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.dropTimingDatas;
}


float BattleDropTimingAdjustmentSetting__get_WaitDropTime(
        BattleDropTimingAdjustmentSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.waitDropTime;
}


void BattleDropTimingAdjustmentSetting_DropTimingData___ctor(
        BattleDropTimingAdjustmentSetting_DropTimingData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float BattleDropTimingAdjustmentSetting_DropTimingData__get_DropItemDelayTime(
        BattleDropTimingAdjustmentSetting_DropTimingData_o *this,
        const MethodInfo *method)
{
  return this->fields.dropItemDelayTime;
}


float BattleDropTimingAdjustmentSetting_DropTimingData__get_FirstEffectDelayTime(
        BattleDropTimingAdjustmentSetting_DropTimingData_o *this,
        const MethodInfo *method)
{
  return this->fields.firstEffectDelayTime;
}


System_Int32_array *BattleDropTimingAdjustmentSetting_DropTimingData__get_GiftIdArray(
        BattleDropTimingAdjustmentSetting_DropTimingData_o *this,
        const MethodInfo *method)
{
  return this->fields.giftIdArray;
}


BattleDropTimingAdjustmentSetting_DropTimingRangeData_array *BattleDropTimingAdjustmentSetting_DropTimingData__get_TimingRangeArray(
        BattleDropTimingAdjustmentSetting_DropTimingData_o *this,
        const MethodInfo *method)
{
  return this->fields.timingRangeArray;
}


void BattleDropTimingAdjustmentSetting_DropTimingRangeData___ctor(
        BattleDropTimingAdjustmentSetting_DropTimingRangeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float BattleDropTimingAdjustmentSetting_DropTimingRangeData__get_FixedEffectInterval(
        BattleDropTimingAdjustmentSetting_DropTimingRangeData_o *this,
        const MethodInfo *method)
{
  return this->fields.fixedEffectInterval;
}


int32_t BattleDropTimingAdjustmentSetting_DropTimingRangeData__get_MaxMillisecond(
        BattleDropTimingAdjustmentSetting_DropTimingRangeData_o *this,
        const MethodInfo *method)
{
  return this->fields.maxMillisecond;
}


int32_t BattleDropTimingAdjustmentSetting_DropTimingRangeData__get_Min(
        BattleDropTimingAdjustmentSetting_DropTimingRangeData_o *this,
        const MethodInfo *method)
{
  return this->fields.min;
}


bool BattleDropTimingAdjustmentSetting_DropTimingRangeData__get_UseFixedEffectInterval(
        BattleDropTimingAdjustmentSetting_DropTimingRangeData_o *this,
        const MethodInfo *method)
{
  return this->fields.useFixedEffectInterval;
}