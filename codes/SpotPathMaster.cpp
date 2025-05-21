void __fastcall SpotPathMaster___ctor(SpotPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45629 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__, method);
    byte_4B45629 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    223,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
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
  SpotPathEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  int v14; // w23

  if ( (byte_4B4562A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Item__, v9);
    byte_4B4562A = 1;
  }
  result = (SpotPathEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    v14 = termId + 100 * eventId;
    while ( 1 )
    {
      result = (SpotPathEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (SpotPathEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                     v13,
                                     (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.valueType == 1 && result->fields.targetId == v14 && result->fields.targetValue == groupId )
        return result;
      if ( v12 == ++v13 )
        return 0LL;
    }
LABEL_14:
    sub_1BDBAD4(result, *(_QWORD *)&eventId);
  }
  return 0LL;
}