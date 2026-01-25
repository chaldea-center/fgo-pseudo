void BattleDropTimingAdjustmentSetting___ctor(BattleDropTimingAdjustmentSetting_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF10C8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__TypeInfo);
    byte_4CF10C8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData___ctor__);
  this->fields.dropTimingDatas = (struct System_Collections_Generic_List_BattleDropTimingAdjustmentSetting_DropTimingData__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dropTimingDatas, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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