void __fastcall SpotPathMaster___ctor(SpotPathMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16CB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__, method, v2);
    byte_4B16CB1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    217,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  SpotPathEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v15; // w21
  int32_t v16; // w22
  int v17; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4B16CB2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&SpotPathEntity_TypeInfo, v11, v12);
    byte_4B16CB2 = 1;
  }
  result = (SpotPathEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    v17 = termId + 100 * eventId;
    while ( 1 )
    {
      result = (SpotPathEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (SpotPathEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                     v16,
                                     (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(SpotPathEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SpotPathEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SpotPathEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.valueType == 1 && result->fields.targetId == v17 && result->fields.targetValue == groupId )
        return result;
      if ( v15 == ++v16 )
        return 0LL;
    }
LABEL_16:
    sub_1BCAA3C(result, *(_QWORD *)&eventId);
  }
  return 0LL;
}