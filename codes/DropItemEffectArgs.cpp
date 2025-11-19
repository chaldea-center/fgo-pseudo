void DropItemEffectArgs___ctor(DropItemEffectArgs_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleDropTimingAdjustment_FixedDropTimingData_o *DropItemEffectArgs__GetFixedDropTimingData(
        DropItemEffectArgs_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  BattleDropTimingAdjustment_FixedDropTimingData_o *result; // x0

  result = (BattleDropTimingAdjustment_FixedDropTimingData_o *)this->fields.dropTimingAdjustmentData;
  if ( result )
    return BattleDropTimingAdjustment__GetFixedDropTimingData((BattleDropTimingAdjustment_o *)result, giftId, 0);
  return result;
}


float DropItemEffectArgs__GetWaitDropTime(DropItemEffectArgs_o *this, const MethodInfo *method)
{
  struct BattleDropTimingAdjustment_o *dropTimingAdjustmentData; // x8

  dropTimingAdjustmentData = this->fields.dropTimingAdjustmentData;
  if ( dropTimingAdjustmentData )
    return dropTimingAdjustmentData->fields.waitDropTime;
  else
    return 0.0;
}


BattleDropPositionRandom_FixedDropPositionRandom_o *DropItemEffectArgs__RandomGetFixedDropPositionDataAndRemove(
        DropItemEffectArgs_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  BattleDropPositionRandom_o *dropPositionRandomData; // x0

  dropPositionRandomData = this->fields.dropPositionRandomData;
  if ( !dropPositionRandomData )
    sub_1C6BC60(0, giftId);
  return BattleDropPositionRandom__RandomGetPositionDataAndRemove(dropPositionRandomData, giftId, 0);
}


void DropItemEffectArgs__SetDropPointRandomData(
        DropItemEffectArgs_o *this,
        UnityEngine_ScriptableObject_o *scriptableObject,
        DropInfo_array *dropInfoArray,
        const MethodInfo *method)
{
  BattleDropPositionRandom_o *v7; // x22
  struct BattleDropPositionRandom_o **p_dropPositionRandomData; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1

  if ( (byte_4CB9816 & 1) == 0 )
  {
    sub_1C6BA08(&BattleDropPositionRandom_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9816 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scriptableObject, 0, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)dropInfoArray, 0) )
  {
    v7 = (BattleDropPositionRandom_o *)sub_1C6BC54(BattleDropPositionRandom_TypeInfo);
    BattleDropPositionRandom___ctor(v7, 0);
    this->fields.dropPositionRandomData = v7;
    p_dropPositionRandomData = &this->fields.dropPositionRandomData;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_dropPositionRandomData, (int32_t)v7, v9, v10);
    if ( !*p_dropPositionRandomData )
      sub_1C6BC60(0, v11);
    BattleDropPositionRandom__Initialize(*p_dropPositionRandomData, scriptableObject, dropInfoArray, 0);
  }
}


void DropItemEffectArgs__SetDropTimingAdjustData(
        DropItemEffectArgs_o *this,
        UnityEngine_ScriptableObject_o *scriptableObject,
        DropInfo_array *dropInfoArray,
        const MethodInfo *method)
{
  BattleDropTimingAdjustment_o *v7; // x22
  DropItemEffectArgs_Fields *p_fields; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1

  if ( (byte_4CB9815 & 1) == 0 )
  {
    sub_1C6BA08(&BattleDropTimingAdjustment_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9815 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scriptableObject, 0, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)dropInfoArray, 0) )
  {
    v7 = (BattleDropTimingAdjustment_o *)sub_1C6BC54(BattleDropTimingAdjustment_TypeInfo);
    BattleDropTimingAdjustment___ctor(v7, 0);
    this->fields.dropTimingAdjustmentData = v7;
    p_fields = &this->fields;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_fields, (int32_t)v7, v9, v10);
    if ( !p_fields->dropTimingAdjustmentData )
      sub_1C6BC60(0, v11);
    BattleDropTimingAdjustment__Initialize(p_fields->dropTimingAdjustmentData, scriptableObject, dropInfoArray, 0);
  }
}