void __fastcall SpotPathMaster___ctor(SpotPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEA6 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__, method);
    byte_49FEEA6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    217,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
}


int32_t __fastcall SpotPathMaster__CreateTargetId(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  return termId + 100 * eventId;
}


int32_t __fastcall SpotPathMaster__GetRaceSpotId(
        SpotPathMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  SpotPathEntity_o *SpotPathEntity; // x0

  SpotPathEntity = SpotPathMaster__GetSpotPathEntity(this, eventId, termId, groupId, method);
  if ( SpotPathEntity )
    LODWORD(SpotPathEntity) = SpotPathEntity->fields.spotId;
  return (int)SpotPathEntity;
}


// local variable allocation has failed, the output may be wrong!
SpotPathEntity_o *__fastcall SpotPathMaster__GetSpotPathEntity(
        SpotPathMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  SpotPathEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  int v15; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_49FEEA7 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B64870(&SpotPathEntity_TypeInfo, v10);
    byte_49FEEA7 = 1;
  }
  result = (SpotPathEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    v15 = termId + 100 * eventId;
    while ( 1 )
    {
      result = (SpotPathEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (SpotPathEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                     v14,
                                     (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(SpotPathEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SpotPathEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SpotPathEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.valueType == 1 && result->fields.targetId == v15 && result->fields.targetValue == groupId )
        return result;
      if ( v13 == ++v14 )
        return 0LL;
    }
LABEL_16:
    sub_1B64ACC(result, *(_QWORD *)&eventId);
  }
  return 0LL;
}